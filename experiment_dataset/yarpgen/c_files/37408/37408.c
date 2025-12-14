/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = ((~((var_10 * (arr_0 [i_2])))));
                    var_13 = (((var_0 || ((min(1356467469, var_8))))));
                    var_14 *= (min(var_11, ((((min(var_6, (arr_4 [i_0] [i_1] [i_2] [i_2]))) > var_0)))));
                    var_15 = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = var_2;
                                var_17 = (min((arr_7 [i_0] [i_3 + 2] [i_2] [15]), (min((arr_7 [i_0] [i_3 + 1] [i_2] [i_3 + 1]), (arr_7 [i_0] [i_3 + 2] [15] [i_3 + 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = -var_8;

    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    var_19 = (-9223372036854775800 / -819203420251426611);
                    var_20 = (max(var_20, var_8));
                }
            }
        }
        var_21 = var_7;
        var_22 = 9223372036854775806;
    }
    var_23 = (~var_4);
    #pragma endscop
}
