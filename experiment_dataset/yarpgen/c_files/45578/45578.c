/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 742415384;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] = (3552551894 && var_4);
                    arr_9 [i_1] [i_0] [i_1] [i_1] = var_13;
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_1] [5] [16] [i_5] [5] = (((!(4446 >= 43045))));
                            var_21 = (min(var_21, (max(118, 742415401))));
                            var_22 ^= ((3552551916 ? 3552551920 : 2919541056));
                            arr_20 [i_0] [i_0] [i_1] [i_1] [i_4] [i_1] [i_0] = (min((max((min(152854141, var_7)), var_19)), 742415361));
                        }
                        var_23 ^= ((-102 & ((max(32089, (arr_2 [i_0 + 1]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_24 = (max(var_24, ((((-127 - 1) ? var_5 : (arr_10 [i_7 + 1] [i_6] [i_1]))))));
                                arr_28 [i_0 - 1] [i_1] [i_1] [i_7] = (((min(65520, 152854141)) & (((min(124, var_16))))));
                                var_25 = (!2417);
                            }
                        }
                    }
                }

                for (int i_8 = 2; i_8 < 18;i_8 += 1)
                {
                    var_26 = (max((min(1, 37930)), (min((max(var_19, var_3)), (arr_15 [i_8 + 1] [i_8 + 2] [i_0 + 3])))));

                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        arr_33 [i_1] [i_1] [i_1] [i_8] [i_1] [i_1] = (max((((!((((-127 - 1) ? 0 : -61)))))), ((var_18 * (var_9 >= 742415401)))));
                        arr_34 [i_0] [i_0] [i_1] [21] [14] = ((var_3 == (max(((max(10664, var_16))), (min(var_12, 876764021))))));
                        var_27 += 54871;
                    }
                    arr_35 [i_1] = ((((742415379 ? 19855 : -115)) < var_19));
                }
                for (int i_10 = 1; i_10 < 21;i_10 += 1) /* same iter space */
                {
                    arr_39 [i_10] [i_1] [i_1] [i_0] = var_10;
                    var_28 *= var_14;
                    var_29 = (max((max(-116, (min(3552551916, 16125)))), (((((min(var_10, 65535))) ? var_13 : 63119)))));
                    var_30 = (54871 >> 0);
                }
                for (int i_11 = 1; i_11 < 21;i_11 += 1) /* same iter space */
                {
                    var_31 = 118;

                    for (int i_12 = 2; i_12 < 18;i_12 += 1)
                    {
                        var_32 = min((max(742415421, var_10)), 99);
                        var_33 = (min((min((max(var_8, var_8)), 58180)), (arr_27 [i_0] [i_0] [i_0] [i_1] [i_11] [i_0])));
                        var_34 = (((!54871) | 106));
                        arr_45 [i_1] [6] [i_1] [2] [i_0 + 3] [i_1] = min(46813, 0);
                    }
                    var_35 = ((((((!((min(127, 39639))))))) - 2191897237));
                }
                /* LoopNest 3 */
                for (int i_13 = 1; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            {
                                arr_53 [0] [i_1] [0] [i_1] [i_1] [i_1] [i_1] = (min((((65535 >> (var_17 - 23588)))), ((max(52267, 742415401)))));
                                var_36 = -127;
                                arr_54 [i_1] [i_13] [i_1] = (max((-127 - 1), 127));
                            }
                        }
                    }
                }
                arr_55 [i_1] = (min(56893, var_13));
            }
        }
    }
    var_37 = ((58167 & (((!(((10 ? -48 : var_15))))))));

    /* vectorizable */
    for (int i_16 = 2; i_16 < 23;i_16 += 1)
    {
        arr_59 [i_16] = (3479182848 && 3587780007);
        arr_60 [7] = (47 * 45);
        arr_61 [i_16] = ((var_19 ? var_19 : 4966));
    }
    #pragma endscop
}
