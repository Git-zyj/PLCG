/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_18 = (min((~-1), (-127 - 1)));
                        var_19 -= (((arr_7 [i_0] [i_1] [i_1] [i_1]) >= 9));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_20 += (max((((((min(16383, 16383))) ? (((((arr_2 [i_4]) + 2147483647)) << (1 - 1))) : 1578542630))), (arr_0 [i_3 + 1])));
                            arr_13 [i_2] [i_1] [4] [4] = ((-((min(var_6, var_12)))));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_21 = (max((max(var_2, var_3)), var_10));
                            var_22 |= min((var_13 && 1), (~var_11));
                            var_23 ^= ((var_7 ? var_0 : (((~(arr_3 [i_3 + 1] [i_3 - 1]))))));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_5] = (min(55420, 49152));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_1] [i_2] [i_1] [i_7] = ((min(34, (arr_10 [i_6 - 1] [i_1] [i_1] [i_1]))));
                                var_24 = (min(var_16, (~var_15)));
                                arr_25 [i_0] [i_2] [4] [i_2] [i_2] [i_1] = (min(var_13, (((-395069249713829990 < (~var_6))))));
                                arr_26 [i_0] [i_2] [10] [i_6 - 1] [i_2] = (arr_15 [i_0] [i_0] [10] [i_0] [i_2]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 15;i_9 += 1)
        {
            {
                var_25 = ((!(((~((var_17 ? 1863713327 : var_15)))))));
                arr_32 [i_8] [i_8] [i_8] = (arr_31 [i_8] [i_8] [i_8]);
                var_26 = 14;
            }
        }
    }
    var_27 = (~var_5);
    #pragma endscop
}
