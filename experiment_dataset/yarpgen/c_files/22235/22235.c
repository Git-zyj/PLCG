/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_13 [1] [i_1] [i_2 + 1] [i_3] [6] [i_4] [i_4] = ((var_15 || (arr_3 [i_2 + 1] [i_2] [i_2 + 1])));
                            var_18 = (arr_12 [i_3 - 2] [i_4] [i_1] [i_4] [i_1 - 1]);
                            arr_14 [i_0] [i_1] [i_2] [i_4] [i_4] = (+-32759);
                            var_19 = (!1020);
                        }
                        var_20 = var_13;
                        var_21 -= (-127 - 1);
                    }
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] = ((~(arr_8 [i_1 - 1])));
                        var_22 = (~561391296);

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_23 = -80;
                            var_24 = ((~(((arr_11 [i_1] [i_6] [i_1] [i_6] [i_1]) ? (arr_0 [i_5]) : 3004890927))));
                            var_25 *= arr_17 [i_1 - 3] [i_1 - 3] [0] [i_2 + 1] [i_5] [i_5 - 2];
                            var_26 *= var_13;
                        }
                        var_27 ^= ((32759 ? -31 : (-127 - 1)));
                    }
                    for (int i_7 = 3; i_7 < 16;i_7 += 1)
                    {
                        var_28 = (((8907445701060539449 >> (-725292132 + 725292145))));
                        arr_24 [i_0] [i_1] [i_2] [i_7] = arr_23 [i_0] [i_0] [i_0] [i_7 - 1] [i_7 - 1];
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_29 ^= (114 || -30903);
                        var_30 = (!101);
                        arr_27 [i_0] = ((!(arr_18 [i_1 - 2] [i_2 + 1] [i_1 - 2] [i_1 - 1] [i_1 - 1])));
                        arr_28 [i_8] [i_2] [i_2] [i_1] [i_0] = ((~(-32760 / var_5)));
                        var_31 = (min(var_31, 1));
                    }
                    arr_29 [i_0] [i_0] [i_1] [13] = (((arr_20 [i_1 + 1] [i_2 + 1]) ? -39 : (arr_20 [i_1 - 1] [i_1 + 1])));
                    var_32 ^= (arr_20 [i_2 + 1] [i_2 + 1]);
                    arr_30 [0] [i_1] [i_1] [i_1] = -var_16;
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_39 [i_0] [i_0] [i_9] [i_9] [i_11] = ((((((-(arr_1 [i_11 - 1] [i_11 + 1])))) ? (!var_0) : 116)));
                                var_33 = (arr_15 [12] [i_1] [i_9] [i_9] [i_9] [i_11 + 1]);
                                var_34 = ((var_5 || ((min(((126 ? -32760 : -52)), (arr_25 [i_11] [i_9] [i_1 - 3]))))));
                            }
                        }
                    }
                }
                arr_40 [i_0] [i_0] = (-((max((arr_37 [i_1 + 1] [10] [i_1] [10] [i_0]), var_0))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 10;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                {
                    arr_51 [i_14] [i_14] [i_14] [i_14] = 32747;
                    var_35 = var_7;
                    arr_52 [i_12] [i_14] [i_14] [i_14] = -1758420651;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 21;i_16 += 1)
        {
            {
                arr_61 [i_16] [i_16] |= ((-(min((arr_56 [i_15]), -1))));
                arr_62 [i_15] [i_16] = (!(!141313706));

                for (int i_17 = 2; i_17 < 20;i_17 += 1)
                {
                    var_36 = ((((min((arr_59 [i_17 + 1] [i_17 - 2] [i_17 - 2]), (arr_59 [i_17 - 1] [i_17 - 1] [i_17 + 1])))) ? ((119 ? 61 : 32759)) : var_12));
                    arr_65 [1] [1] [i_16] = ((-((-((9455 ? (arr_53 [i_15] [i_15]) : 8315))))));
                    arr_66 [i_16] = (max((min(8701, -117)), -113));
                    var_37 ^= (arr_57 [i_15]);
                }
                var_38 *= ((((min(120, (arr_63 [i_15])))) ? -var_5 : (5 % -32761)));
                var_39 = -32749;
            }
        }
    }
    var_40 = (min(var_40, var_14));
    #pragma endscop
}
