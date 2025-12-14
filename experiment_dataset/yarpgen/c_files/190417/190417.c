/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min((3072 & var_15), var_17))) && ((((((127 ? 0 : 3968))) ? ((max(-110, var_17))) : (var_6 / var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = ((~(32767 >> 3)));
                arr_6 [i_0] [16] |= ((524287 >= (arr_2 [i_1 + 1] [16])));
                var_21 = -127;

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_1] [i_2] = min(((-(arr_7 [i_0] [i_1 + 2]))), (((arr_7 [i_0] [i_1 + 1]) + (arr_7 [i_0] [i_1 + 2]))));

                    for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        var_22 = ((((max((arr_11 [i_1] [i_0] [i_2] [i_1 + 1]), (arr_11 [i_0] [i_0] [i_2] [i_1 + 1])))) + (((((min((arr_1 [i_0]), var_1))) || (!255))))));
                        arr_14 [i_0] [i_1] = var_12;
                    }
                    for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        var_23 = arr_0 [i_0];
                        var_24 = ((!((((arr_12 [i_4 + 1] [i_1] [i_1 + 1] [i_0]) ? (arr_12 [i_4 - 1] [i_1] [i_1 + 1] [i_0]) : var_14)))));

                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            var_25 = (((((((min((arr_13 [i_0] [i_0] [i_2]), (arr_13 [i_0] [i_0] [i_2])))) < ((((arr_2 [i_0] [i_0]) != (arr_12 [i_0] [i_5] [i_2] [i_0]))))))) <= (arr_12 [i_1 + 1] [i_0] [i_2] [i_0])));
                            arr_20 [i_0] [i_0] [i_2] [i_4] [i_0] = ((((max(255, (arr_16 [i_0] [i_1] [i_2] [i_0])))) ? ((~(min(6, (arr_2 [i_0] [i_0]))))) : (32767 <= var_7)));
                            var_26 = (max(var_26, (arr_18 [i_5] [i_1])));
                            arr_21 [i_5] [i_1] &= 9;
                        }
                        var_27 = (arr_9 [i_4] [i_1] [i_4] [i_4]);
                    }

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {

                        for (int i_7 = 4; i_7 < 16;i_7 += 1)
                        {
                            arr_27 [i_0] [i_1] [i_7] [i_0] [i_7] = -56;
                            var_28 = (arr_9 [i_0] [i_1] [i_0] [i_6]);
                            var_29 = ((!((min(3, (arr_19 [i_0] [i_0] [i_7 - 4] [i_1 + 2] [i_7]))))));
                        }
                        var_30 = (((min((arr_13 [i_0] [i_0] [i_2]), (((var_3 > (arr_12 [i_2] [i_1] [i_2] [i_0])))))) >= ((-(arr_13 [i_1 - 1] [i_0] [i_2])))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_31 -= (((arr_17 [i_8] [i_2] [i_2] [i_2]) * (arr_17 [i_8] [i_0] [i_2] [i_8])));
                        var_32 = (((arr_23 [i_0] [i_2]) || (arr_23 [i_0] [i_1])));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_33 = (arr_30 [i_0] [i_1] [i_0] [i_1 - 1]);
                            arr_35 [i_0] [i_1] [i_2] [i_9] [i_10] = (arr_28 [i_0] [i_1] [i_1 - 1] [i_9] [i_10] [i_9]);
                            var_34 = (((arr_24 [i_1 - 1] [i_0]) ? (arr_24 [i_1 + 1] [i_0]) : (arr_16 [i_1 + 1] [i_1] [i_2] [i_9])));
                        }
                        var_35 += ((arr_0 [4]) - var_1);
                        var_36 = (arr_24 [i_1] [i_0]);
                        var_37 = (-1 ? -104 : (arr_26 [i_0] [i_0]));
                        var_38 = 18;
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                    {
                        var_39 = (min(var_39, ((((-2147483647 - 1) ? (arr_25 [i_1 + 1]) : var_8)))));
                        arr_40 [i_0] [i_1] [i_2] [i_0] [i_1] = ((var_16 ^ ((max((arr_28 [i_0] [i_1] [i_2] [i_11] [i_11] [i_1]), (max(127, 0)))))));
                        var_40 = arr_37 [i_0] [i_1] [i_2] [i_1 + 1];
                        arr_41 [i_0] [i_1] [i_1] [i_0] [i_1] = max(((-1 * (arr_39 [i_0] [i_1 + 1] [i_2] [i_11]))), ((max(6, 17))));
                    }
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_41 = 1;
                    var_42 = (max(((min(var_18, var_18))), (max(0, (arr_28 [i_0] [i_1] [i_12] [i_1 + 2] [i_1] [i_1])))));
                    var_43 -= ((1 ? 0 : (-9223372036854775807 - 1)));
                }
            }
        }
    }
    #pragma endscop
}
