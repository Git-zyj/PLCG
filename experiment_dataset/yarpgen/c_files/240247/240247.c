/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 11609824997392900239;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = (min(var_19, 1));
        arr_2 [i_0] = (arr_0 [i_0]);
        var_20 |= ((-((146 | (((!(arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_21 += (((((arr_3 [i_1]) ^ 38)) | (!var_14)));
        var_22 = (min(var_22, (((-(arr_4 [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 6;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 6;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_23 = ((+((-127424689998630282 ^ (min((arr_9 [8] [8] [6]), var_5))))));
                                var_24 += ((((~(max(528482304, (arr_5 [0] [i_3]))))) ^ ((((((198 ^ (arr_11 [i_2] [i_1] [i_4 - 1]))) != var_3))))));
                                arr_16 [i_4] = (max(((((1885097388 != (arr_5 [1] [0]))) || var_11)), ((!((!(arr_6 [i_2] [i_2 + 1] [i_2 + 2])))))));
                                var_25 = ((((var_16 ? var_4 : (arr_14 [i_1] [i_2 + 4] [i_3 + 1] [i_4] [i_5 - 1] [i_5 - 1]))) >= (((arr_14 [i_1] [0] [i_1] [i_3] [9] [i_5]) | (arr_8 [i_2 + 1] [9] [i_4 + 1])))));
                            }
                        }
                    }
                    var_26 = ((~(((var_14 || 14728143284203649135) ? ((((arr_0 [i_1]) ^ 1))) : ((-(arr_10 [i_1] [2] [i_3])))))));
                    var_27 = arr_3 [i_3];
                }
            }
        }
        var_28 |= (arr_9 [i_1] [i_1] [i_1]);
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_29 = (min(var_29, ((min((arr_20 [i_6] [i_6]), var_11)))));
        arr_21 [i_6] = ((~((-30 ? (arr_17 [i_6]) : 6836919076316651389))));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_30 ^= 27524;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 23;i_11 += 1)
                        {
                            arr_37 [i_7] [i_11] [i_8] [i_8] [i_8] [i_7] = (((arr_32 [i_9 + 1] [i_9] [3] [i_11 - 1] [i_7]) ? (-9223372036854775807 - 1) : 0));
                            var_31 = (min(var_31, var_11));
                            arr_38 [10] [i_8] |= -var_10;
                            var_32 = (arr_27 [i_7]);
                            var_33 = (-9223372036854775804 ^ 253);
                        }
                        for (int i_12 = 2; i_12 < 23;i_12 += 1)
                        {
                            arr_41 [i_10] [i_10] [i_7] [i_7] [i_12] [i_10] = -1849769242;
                            arr_42 [i_12] [i_8] [i_9] &= (max(((((var_3 ? 0 : var_14)))), ((8678575471454133157 ? (~var_1) : (4951 ^ 9223372036854775790)))));
                        }
                        /* vectorizable */
                        for (int i_13 = 2; i_13 < 23;i_13 += 1)
                        {
                            var_34 *= 27011;
                            var_35 = (6836919076316651373 | 11596375986037424889);
                            var_36 = -1;
                        }
                        var_37 = ((-(-3230 - -162)));
                        var_38 &= (max((arr_40 [i_8] [i_9 - 2] [i_8]), (arr_40 [i_8] [i_9 - 2] [i_8])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
