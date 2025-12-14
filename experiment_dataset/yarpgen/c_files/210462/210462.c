/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (arr_0 [i_0] [i_1 - 1]);
                var_15 &= (max((arr_4 [i_0] [i_0] [i_0]), (min((arr_4 [i_1 + 1] [5] [i_0]), ((var_3 ? (arr_4 [i_1] [7] [i_0]) : var_11))))));
                arr_5 [i_0] = ((((((845 ? var_12 : 845)))) / ((~(((arr_3 [i_0] [i_0]) << (((arr_3 [i_0] [i_1]) - 11130336460453922459))))))));
                arr_6 [i_0] [i_1] [i_0] = ((((((arr_4 [i_0] [i_0] [i_0]) - var_0))) ? ((((arr_4 [i_0] [i_1 - 2] [i_1 - 2]) - (arr_4 [4] [i_1 + 1] [4])))) : (min(var_5, (arr_3 [i_0] [i_0])))));
                var_16 = (max(var_16, ((((arr_3 [i_1] [i_0]) >= var_2)))));
            }
        }
    }
    var_17 |= (~var_8);
    var_18 = (max(var_18, var_8));
    #pragma endscop
}
