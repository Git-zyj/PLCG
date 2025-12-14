/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, 103));
    var_20 = ((((((48454 ? var_11 : var_1)))) ^ (max(((max(var_16, var_16))), (~52728)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = 52728;
                    arr_8 [i_1] [i_2] [i_1] [10] = (var_5 * (arr_0 [i_0] [i_1]));
                    var_22 = ((((((~var_7) ? (((arr_4 [i_0] [i_1] [i_2]) & var_6)) : (arr_3 [i_0] [i_1] [i_2])))) ? ((max((min((arr_3 [14] [14] [14]), var_10)), (arr_3 [6] [i_1] [i_1])))) : ((((52726 == (arr_2 [i_2]))) ? (arr_5 [i_0] [i_0]) : (((((arr_5 [i_0] [i_1]) + 2147483647)) << (((arr_6 [i_0] [i_0]) - 26530))))))));
                    var_23 ^= ((max(((var_2 ? var_11 : var_5), (arr_1 [i_0] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
