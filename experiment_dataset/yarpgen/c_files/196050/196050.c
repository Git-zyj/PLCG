/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_1);
    var_18 += ((~(max(((min(4402, var_13))), (min(7120, 1449610820))))));
    var_19 ^= (min(var_12, var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = var_9;
                var_21 = (((-1449610815 + 2147483647) >> ((var_4 & (var_5 != 2888086407039754978)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_22 ^= (min((1449610834 && 1), (!1449610838)));
                            var_23 = (min((~0), ((min(var_10, 1449610838)))));
                            var_24 &= (!-1449610855);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_25 = (((~1449610838) ? (!1449610844) : 1449610838));
                                var_26 = (max(var_26, (((((min(var_16, 1449610836))) * var_2)))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    var_27 -= ((((max((116 * 146), (~-1449610820)))) ? (24 + 218) : (3 * 1697300626)));

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_26 [i_7] [14] [i_7] [i_7] [i_7] = (min(-29, -24));
                        arr_27 [i_8] [i_9] [i_8] [i_10] [i_7] = ((-(var_2 > 51)));
                    }
                }
            }
        }
        var_28 = (min(var_28, (((~(1997845514965275301 && 38))))));
    }
    #pragma endscop
}
