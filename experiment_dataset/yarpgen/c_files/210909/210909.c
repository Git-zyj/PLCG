/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_12 = (min(var_12, (arr_6 [i_0] [i_0] [i_0] [i_0 - 2])));
                            var_13 = (arr_4 [i_0] [i_0] [i_2]);
                            var_14 ^= ((-(((10591887679440638547 / (arr_5 [i_0]))))));
                            var_15 = (max((68 != 510047751), (((arr_8 [i_0] [i_2] [i_2] [i_3] [i_0 - 1] [i_0]) * var_8))));
                            var_16 = (arr_1 [i_0]);
                        }
                    }
                }
                var_17 = var_11;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_18 = var_8;

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 13;i_6 += 1)
                            {
                                var_19 = (min(var_19, ((((arr_13 [i_0] [i_0] [i_0 - 1] [i_5 - 1] [i_6]) << (arr_13 [i_0] [i_0 - 2] [i_0 - 1] [i_5 - 1] [i_6]))))));
                                var_20 = (min(var_20, var_7));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 13;i_7 += 1)
                            {
                                var_21 ^= var_5;
                                var_22 = (arr_0 [i_0 + 1] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 *= max(var_9, ((var_6 ? ((min(var_5, var_2))) : ((68 ? var_5 : var_0)))));
    var_24 = ((((max(var_6, var_8))) && (!var_2)));
    var_25 ^= var_8;
    #pragma endscop
}
