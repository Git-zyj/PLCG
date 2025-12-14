/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_20 += 2945120868;
        var_21 += 0;
    }
    var_22 = (((((var_0 / var_13) ? var_11 : (min(var_11, var_15))))) ? var_3 : ((max(1, (min(68719476672, var_13))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 19;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        {
                            arr_13 [i_2] = var_9;
                            var_23 -= (((arr_9 [16]) % (((arr_12 [i_4] [i_4] [i_4] [i_4 + 1] [11] [i_4]) & var_7))));
                            var_24 = (((((((arr_6 [i_1]) ? 26593 : var_2))) ? (-2147483647 - 1) : (var_1 & var_15))));
                        }
                    }
                }

                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    arr_18 [i_5] [i_2] [i_2] [i_1] = ((~(~2)));
                    var_25 ^= (((((arr_16 [i_2] [i_2 + 1] [i_2 + 2]) ? (arr_17 [4] [i_2] [4]) : (arr_4 [i_2 - 4] [i_2])))) ? (min(31258, ((((arr_9 [2]) && 31260))))) : (arr_4 [i_5 + 2] [i_2 + 1]));
                    arr_19 [i_2] = (max((min(((32 ? var_2 : 40771)), ((min(261931274, -890282494))))), (((arr_15 [i_5] [i_2] [i_5]) ? -1194343349 : (arr_3 [i_2 + 2])))));
                }
                arr_20 [i_2] = 7679;
            }
        }
    }
    #pragma endscop
}
