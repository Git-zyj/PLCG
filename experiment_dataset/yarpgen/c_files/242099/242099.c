/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_2 ? (var_2 > var_13) : ((max(var_11, var_12))))) * var_11));
    var_16 = (((((((var_12 ? var_13 : var_7))) ? ((120 ? var_13 : 19498)) : (1346900784 != 255)))) ? var_4 : var_13);
    var_17 = -var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    var_18 = 85;
                    arr_7 [i_2] = (!-1873385600943793626);
                    var_19 += ((-709196294 ? -406497923 : -1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, 6226226849900955080));
                                var_21 = 1;
                                var_22 *= ((arr_6 [i_0 - 1] [i_0 - 1] [i_2 - 2]) - ((-84 ? 2798927635 : var_14)));
                                arr_13 [i_2] [i_2] = (((((9223372036854775807 ? var_3 : var_0))) || (((arr_2 [i_3]) || var_14))));
                                var_23 ^= (((arr_11 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0 + 2]) ? var_11 : (arr_11 [i_0 - 1] [i_0 - 1] [i_3] [i_0] [i_0] [i_0 + 2])));
                            }
                        }
                    }
                }
                arr_14 [i_0 + 2] = var_4;
            }
        }
    }
    #pragma endscop
}
