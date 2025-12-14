/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (!-19414);
    var_19 = (min(var_19, var_13));
    var_20 = ((63 ? 1 : (((-19414 < 12618438213171263091) | 5969992865279439383))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -19414;
        arr_3 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_21 = ((((1 ? 1 : 16307071732067062155)) << (!-6736)));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] &= (max((((arr_13 [i_0] [i_0] [i_2] [i_1 + 3]) << ((((var_13 ? (arr_0 [i_1 + 1] [i_4]) : (arr_7 [i_3] [i_1 + 2] [i_3]))) - 64)))), (-127 - 1)));
                                arr_15 [i_0] [i_3] [i_4] = (arr_7 [i_0] [4] [i_1 - 2]);
                                var_22 -= 19413;
                            }
                        }
                    }
                    var_23 = (((-6736 ? 18446744073709551615 : 12649368550711195295)));
                    arr_16 [8] = (((~(arr_10 [i_1 - 2] [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 2]))));
                    arr_17 [i_0] [i_1 + 2] [i_0] [i_2] = (arr_4 [i_0] [15] [15]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_24 = ((!(arr_1 [i_5])));
        var_25 -= ((-1108460031 ? -1270119805 : -6736));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_26 = (max(((7436371665958420947 ? (arr_12 [i_6] [i_6]) : (arr_12 [i_6] [i_6]))), (((arr_1 [i_6]) ? (~1) : 1))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_27 = (!18446744073709551615);
                                var_28 = -7436371665958420947;
                                var_29 = ((48575 ? 480 : 60106));
                                arr_32 [i_6] [i_7] [i_10] [i_9] [i_10] = (+((4294967295 ? (!65535) : ((max(118, 0))))));
                                arr_33 [i_6] [i_10] [i_7] [i_8] [i_8] [i_9] [0] = ((-(max((max((arr_28 [i_6] [i_6] [i_6] [i_6] [i_9] [i_6]), (arr_30 [i_6] [i_6] [i_6] [i_6] [i_6]))), 1108460031))));
                            }
                        }
                    }
                    var_30 = ((0 ? (((((arr_24 [i_7]) > (arr_5 [i_8] [i_8] [i_8]))) ? (max(var_14, 1)) : ((((arr_23 [i_7] [i_7]) ? (-2147483647 - 1) : (arr_24 [7])))))) : (arr_20 [i_6])));
                }
            }
        }
    }
    #pragma endscop
}
