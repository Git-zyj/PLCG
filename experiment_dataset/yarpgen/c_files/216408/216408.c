/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_11 ? var_1 : (max(130, -4928164942245691524))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_20 = (min(var_20, var_15));
                    var_21 ^= 596122952;
                }
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    var_22 = (min(var_22, (-2147483647 - 1)));
                    var_23 *= (((((max(3941530687, -32748)) ? var_4 : -2985))));
                }
                var_24 ^= var_5;
                var_25 = (arr_3 [i_0 + 1] [11] [i_1]);

                /* vectorizable */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_26 = -0;
                    var_27 ^= 1048458901;
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_28 = arr_15 [i_6 - 1] [i_6 + 2] [10] [i_0] [i_0];
                                arr_17 [i_1] [i_1] [i_4] [i_1] [i_5] [i_6] = var_17;
                                var_29 = (-var_18 != 65535);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
