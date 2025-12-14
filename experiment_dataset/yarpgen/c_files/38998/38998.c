/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((((!(((32767 << (((arr_0 [i_1]) - 22)))))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_18 += ((738868960 / (arr_3 [i_0] [i_1])));
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_1] = ((1 >= (((arr_2 [i_1]) << (((arr_4 [i_0] [i_3] [i_4]) - 13873))))));
                            }
                        }
                    }
                    var_19 += ((-(arr_9 [i_2] [i_1])));
                    var_20 = (var_8 == 65);

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_21 = (((arr_15 [i_5] [i_2]) ? (arr_3 [i_2] [i_2]) : (arr_3 [i_1] [i_0])));
                        arr_18 [i_0] [2] [2] [0] [i_5] = (((arr_3 [6] [i_1]) ^ (arr_3 [i_2] [i_0])));
                        var_22 -= var_11;
                        var_23 = (min(var_23, (((!(arr_0 [1]))))));
                        arr_19 [i_0] [i_1] [i_0] [i_1] [i_2] [i_5] = (((170 || 2595294724) == 32767));
                    }
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_24 = (arr_0 [i_6]);
                    var_25 = var_12;
                    var_26 = ((!((((arr_6 [i_0] [i_0] [i_1] [i_6]) ? ((max((arr_9 [i_0] [19]), var_10))) : -112)))));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_26 [i_8] [i_7] [i_6] [i_6] [i_1] [i_0] = ((((min(48844, (min(var_0, (arr_23 [18] [i_6] [i_6] [i_1] [i_6] [i_0])))))) << (((min((min((arr_6 [i_1] [i_8] [i_6] [i_8]), var_13)), (arr_4 [i_8] [i_1] [i_8]))) + 5704989374733060621))));
                                var_27 = ((((12269952509269300315 < (arr_12 [i_7 + 2] [i_1] [i_7 + 2] [i_0] [i_8 - 1]))) ? -79 : (arr_24 [23] [i_8 - 1] [i_6] [i_6] [i_7])));
                                var_28 = (max(var_28, ((((arr_23 [i_0] [i_8 - 1] [i_0] [i_1] [i_0] [i_0]) ? (arr_8 [i_0] [i_6] [i_8]) : (((arr_7 [i_7 + 2] [i_8] [i_6] [i_8 - 1]) ? (arr_7 [i_7 - 4] [16] [i_7 - 4] [i_8 - 1]) : (arr_6 [i_7 - 4] [i_7 - 4] [i_7 - 4] [i_8 - 1]))))))));
                            }
                        }
                    }
                    var_29 = (max(var_29, ((min((((-(arr_20 [i_0] [i_1] [i_0] [i_6])))), (max((arr_12 [i_0] [i_1] [i_6] [i_1] [i_0]), (arr_12 [19] [i_0] [i_1] [i_1] [i_6]))))))));
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    var_30 -= ((((var_11 ? (arr_12 [i_9] [i_1] [i_1] [i_0] [12]) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))) == ((~(arr_12 [i_0] [i_1] [i_1] [i_0] [i_1])))));
                    var_31 += (((((max(15067752869673126966, var_5)) >= (((var_1 * (arr_8 [i_9] [i_1] [i_0]))))))) == ((max(37909, (arr_7 [i_1] [i_9] [i_1] [19])))));
                    var_32 = (!1653);
                }
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        arr_37 [i_0] [i_1] [1] [0] [i_10] = 3559126609;
                        arr_38 [i_0] [12] [i_0] = (((max((arr_21 [i_11] [i_11] [i_11] [i_11]), (arr_21 [i_1] [i_10] [i_10] [i_11]))) + ((-(arr_21 [19] [i_1] [i_10] [i_11])))));
                        var_33 *= ((var_7 - (arr_24 [13] [i_0] [22] [i_10] [i_11])));
                    }
                    var_34 = 3653169458255243441;
                    var_35 = (((arr_10 [i_10]) ? 2207838997 : 32756));
                }
                var_36 = (max(((-(arr_24 [i_1] [i_1] [i_0] [i_0] [i_0]))), (((arr_24 [i_0] [i_0] [i_0] [22] [19]) ^ (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                arr_39 [i_0] [i_0] = (arr_1 [i_1]);
                arr_40 [i_1] = ((min(var_6, var_4)));
            }
        }
    }
    var_37 -= 85;
    var_38 = -123;
    #pragma endscop
}
