/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_10 |= (0 >= var_4);
        arr_3 [i_0] = (arr_2 [i_0]);
        var_11 = (arr_1 [i_0 + 1] [i_0 + 1]);

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_12 = (arr_4 [i_0 - 2]);
            var_13 *= arr_1 [i_0 - 1] [i_1];
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_14 = (max(var_14, var_8));
            var_15 += (max(((min((arr_7 [i_0] [12]), var_5))), (min(1, (min(1, var_7))))));
        }
        var_16 = var_7;
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = (arr_1 [i_3] [i_3]);
        var_17 ^= (min((max((arr_2 [i_3]), (arr_4 [i_3]))), ((min((arr_0 [i_3]), (arr_5 [i_3] [i_3]))))));
        arr_13 [i_3] = (max(((1 ? (arr_6 [i_3]) : (arr_1 [i_3] [i_3]))), (arr_10 [i_3])));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            {
                arr_20 [i_5] = min((arr_19 [i_4]), 69);
                var_18 &= ((max((arr_19 [i_5 - 1]), (max(664176727, var_3)))));
                var_19 = (min(((134279252 | (arr_19 [i_4]))), (arr_14 [i_5] [i_4])));
                var_20 = ((1 ? (max(3630790569, 1944107361)) : -114));

                for (int i_6 = 2; i_6 < 20;i_6 += 1)
                {

                    for (int i_7 = 4; i_7 < 19;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            arr_28 [i_5] [i_5] = (min((((arr_25 [i_5 - 1] [i_6 - 2] [i_7 - 2] [i_8 + 3]) ? 4227127164868321143 : (arr_21 [i_5 - 1] [i_6 - 2]))), (arr_27 [i_8 + 1] [i_8 + 1] [i_8 + 2] [i_8] [i_8])));
                            var_21 = 17029;
                            var_22 = (arr_22 [i_5]);
                        }
                        var_23 *= ((!(arr_24 [i_7 - 3] [i_5 + 1] [i_5 + 1])));
                        var_24 = (max(110, 0));
                        var_25 = (min((arr_17 [i_5] [i_5]), (max(((~(arr_22 [i_5]))), ((~(arr_15 [i_4])))))));
                    }
                    for (int i_9 = 4; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        var_26 = (arr_27 [i_4] [i_5] [i_6 + 1] [i_9] [i_6]);
                        arr_31 [0] [i_4] [14] |= var_7;
                        arr_32 [i_5] = 0;
                    }
                    for (int i_10 = 3; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        var_27 &= ((((max(-3614268851124564811, (arr_23 [i_4] [i_5 - 1] [i_6] [i_10])))) ? (min((!-1139040492), (arr_34 [i_10 + 1] [i_10] [i_10 - 3] [i_4]))) : ((max((arr_33 [i_6 - 2] [i_6 - 2] [i_5 - 1] [i_5 + 1]), (arr_24 [i_6 - 2] [i_5 - 2] [i_5 - 1]))))));

                        for (int i_11 = 1; i_11 < 17;i_11 += 1)
                        {
                            var_28 = (max(var_28, (arr_35 [12] [12] [i_10 + 2] [i_6] [i_11])));
                            var_29 = ((!((min(var_2, (min(120, 3035023620)))))));
                            var_30 = (max(var_30, ((max((min((arr_36 [i_6 - 2] [i_11] [1] [i_6 - 2] [i_5] [i_4]), ((max(-6, var_0))))), (max((arr_36 [i_11] [i_11 - 1] [i_10 - 3] [i_10 - 2] [i_5 - 2] [i_4]), (arr_36 [i_11] [i_11 + 2] [i_10 - 3] [i_5] [i_5 - 2] [i_5]))))))));
                        }
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            var_31 = (max(var_31, ((min((((max(4160688036, 111)))), var_5)))));
                            var_32 = (((arr_16 [i_10]) == (arr_25 [i_4] [i_6 - 1] [i_10 + 1] [i_5])));
                        }
                    }
                    for (int i_13 = 3; i_13 < 19;i_13 += 1) /* same iter space */
                    {
                        var_33 = (arr_14 [11] [i_4]);
                        var_34 = (arr_30 [i_5 - 1] [i_5 - 1]);
                        var_35 ^= ((~(arr_19 [i_6 + 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 21;i_15 += 1)
                        {
                            {
                                var_36 = ((arr_33 [i_4] [i_4] [i_14 + 3] [i_14]) ? (((arr_33 [i_6 + 1] [i_5] [i_14 - 1] [i_14]) % (arr_33 [i_4] [i_4] [i_14 + 3] [i_15]))) : (max((arr_33 [i_4] [i_5 - 2] [i_14 + 1] [i_14]), 67)));
                                arr_51 [i_5] [i_14 - 1] [i_6] [i_5] [i_5] = arr_22 [i_5];
                            }
                        }
                    }
                    var_37 ^= (max(976132553, 976132551));
                }
            }
        }
    }

    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        var_38 = (min(var_38, ((max(-976132554, 1)))));
        var_39 = var_7;
        var_40 = (max((arr_25 [i_16] [i_16] [i_16] [i_16]), (arr_49 [i_16] [i_16] [i_16] [i_16])));
    }
    #pragma endscop
}
