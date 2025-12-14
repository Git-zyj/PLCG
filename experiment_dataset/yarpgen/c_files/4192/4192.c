/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((var_7 << (8271 - 8257)));
    var_15 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = (((((var_10 ? var_4 : 3523831461))) || var_10));
                                var_17 |= ((var_11 ? (~var_4) : var_9));
                                arr_15 [i_1] [i_2] [i_3] [i_4] = (~var_5);
                                var_18 = (max(var_18, (((0 ? 980828139 : (arr_6 [i_1 + 1] [i_0]))))));
                                var_19 = (arr_6 [i_0] [i_1]);
                            }
                        }
                    }
                    arr_16 [17] = (((((var_10 ? var_9 : var_0))) ? var_7 : var_7));
                }
            }
        }
        arr_17 [i_0] = (arr_14 [i_0] [i_0] [1] [i_0] [i_0]);
        var_20 = ((1344114381 + ((18947 ? var_10 : var_12))));
        var_21 = ((15855260000940054716 ? 281718736 : 1));
    }
    #pragma endscop
}
