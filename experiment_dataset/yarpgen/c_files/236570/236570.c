/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [8] [i_0] [i_2] = (~var_12);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [0] [i_0] [4] [0] [4] [4] [i_1] = (arr_4 [i_0 - 3]);
                                arr_16 [i_0 + 1] [i_0] [i_2] [8] [0] = (min(((~(-2147483647 - 1))), 85));
                                var_18 = (((min(((32767 ? -32766 : -2369942824068143313)), 35889)) % 1));
                            }
                        }
                    }
                    arr_17 [i_0 - 1] [i_0] [i_1] [i_0] = ((~(((((~(-9223372036854775807 - 1)))) ? -32766 : ((126 ? 0 : -65))))));
                    var_19 = ((((var_4 >> (3923 - 3900)))) ? (arr_12 [i_1] [i_2]) : ((13961 & ((((arr_13 [i_0 + 1] [i_0] [7] [i_0 + 1] [i_2]) >= var_8))))));
                    var_20 -= arr_1 [i_0 + 1] [i_1];
                }
            }
        }
    }
    var_21 = (max(var_21, ((((((var_11 == var_11) >= ((-4780511503353690238 ? var_10 : var_0)))) ? ((((var_6 ? 1 : 16619992601066274116)) * var_8)) : ((min(-373263488, 7206))))))));
    #pragma endscop
}
