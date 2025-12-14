/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (9223372036854775807 ? -621622709114189122 : 45009);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        var_18 = max(((~((var_0 ? var_5 : var_16)))), ((((6811 - 621622709114189122) ? ((var_13 ? (arr_1 [i_0] [i_3]) : 1332746917)) : (-117 ^ var_2)))));
                        arr_12 [i_0 - 4] [i_0 - 4] [i_1 + 1] [i_0 - 4] [i_2] [i_3] = (6684 | 33);
                        var_19 = (621622709114189124 < 1159);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_20 ^= var_16;
                        var_21 = -3584;
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_22 = 6276469478013080367;

                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            var_23 ^= ((-(min((min(var_9, var_12)), -63))));
                            var_24 += var_11;
                            arr_23 [i_0] [3] [i_1] [i_2 + 1] [i_0] [i_6] [i_2] = ((!(((var_7 ? (arr_21 [i_0] [i_0] [i_2] [i_0 + 1]) : -4822085276540194352)))));
                            var_25 = (min(var_25, -95));
                            arr_24 [i_2] = ((var_10 ? ((6694 ? 116 : 3584)) : var_2));
                        }
                    }
                    var_26 = (((min((((!(arr_21 [i_2] [i_2] [i_2] [i_2])))), (var_16 / 49708))) == ((-(arr_19 [i_2] [i_2] [i_1 + 1] [i_1] [i_2] [18])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            {

                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_27 += ((((max((arr_13 [i_7] [i_8] [i_8] [i_9]), 1099511619584))) || (var_8 / -6799)));

                    for (int i_10 = 3; i_10 < 17;i_10 += 1)
                    {
                        var_28 ^= ((((max((arr_7 [i_9] [i_9] [15]), (arr_4 [i_7] [11] [i_9])))) - var_3));
                        var_29 ^= min(var_7, ((6811 - (arr_25 [i_8] [i_10 + 1]))));
                    }
                    var_30 = var_1;
                }
                var_31 = ((!((((arr_33 [i_7] [i_7] [i_8]) + var_3)))));
            }
        }
    }

    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 2; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 19;i_14 += 1)
                {
                    {
                        var_32 = (((max(-1279523207, (arr_36 [i_12] [i_12] [i_12] [i_12 - 1] [16] [i_11])))) ? var_16 : (((~var_15) ? 3584 : var_9)));
                        var_33 *= ((-((-49703 * (!-2326848018294748446)))));
                        arr_51 [i_11] [i_11] [i_13] = var_11;
                    }
                }
            }
        }
        var_34 = var_0;
        var_35 = (((3737841898440532006 ^ -2213956646352062548) | ((max((arr_11 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]), -1028531281)))));
    }
    #pragma endscop
}
