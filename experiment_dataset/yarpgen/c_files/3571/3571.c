/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, -4));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_20 *= ((!((((arr_7 [i_0 - 2] [i_0 + 1]) - (arr_7 [i_0 - 1] [i_0 + 1]))))));
                        var_21 = 4611686018427387903;
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_15 [i_4] [i_4] [i_2] [i_1] [i_0] = (((arr_10 [i_1] [i_4] [i_4] [10] [i_4]) / (((var_12 ? 13 : (arr_8 [i_0 + 1] [i_1 - 1] [9] [i_0 + 1]))))));
                        var_22 = 3;
                        arr_16 [i_0 - 1] [i_2] [i_4] = -61870;
                        var_23 = 4388;
                    }
                }
            }
        }
    }
    var_24 = 61887;

    /* vectorizable */
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        arr_20 [i_5 - 1] [i_5 - 1] = (arr_18 [i_5] [i_5]);
        var_25 = ((((arr_17 [i_5 + 1]) || (arr_19 [i_5]))));
        arr_21 [5] [i_5] = (~((18446744073709551608 << (32303 - 32296))));
    }
    #pragma endscop
}
