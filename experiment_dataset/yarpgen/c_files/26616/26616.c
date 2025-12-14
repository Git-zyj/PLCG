/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((((((min((arr_5 [i_0] [i_0] [i_2]), (arr_0 [11]))) | var_7))) ? (((~var_0) ? (arr_0 [i_1]) : (arr_5 [i_1 + 1] [i_1 + 1] [i_2]))) : ((((!(arr_4 [i_1])))))));
                    arr_8 [7] [i_1 - 4] = (arr_6 [i_0] [i_0]);
                    var_13 = (200 == ((max(var_1, ((min(1, var_1)))))));
                }
            }
        }
    }
    var_14 = (((((var_6 ? 1 : 0))) ? (((var_11 ? ((var_6 ? 1 : 63488)) : -var_4))) : (((-23 - 1804709842) ? (1483625400 - 1483625398) : (((min(var_3, var_7))))))));
    #pragma endscop
}
