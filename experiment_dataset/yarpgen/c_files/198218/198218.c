/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = (((arr_2 [i_0]) << (16381308394127330663 - 16381308394127330621)));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1 - 2] [i_0] [i_3] [i_4] = (((arr_4 [i_0] [i_0]) ? var_5 : (((((arr_5 [i_3]) <= 2065435679582220963))))));
                                var_22 = ((~(-20 & 2065435679582220963)));
                                var_23 = (arr_12 [i_1 + 4] [9] [i_1 + 4] [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 2]);
                                arr_14 [i_0] = ((~(48 << var_13)));
                            }
                        }
                    }
                    var_24 ^= (((((arr_7 [i_0]) >> (((arr_10 [i_2] [i_2] [i_1 + 4] [i_1 + 4] [i_1] [5] [i_0]) - 64)))) > 37));
                }
            }
        }
        arr_15 [i_0] [i_0] = (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_16 [i_0] = (arr_3 [i_0] [i_0]);
    }
    #pragma endscop
}
