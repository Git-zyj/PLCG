/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 -= (var_8 | var_14);
                    var_16 -= -0;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = -var_10;
                                var_18 = (max(var_18, (((-(arr_5 [i_3 - 2] [0] [i_3]))))));
                                arr_13 [i_0] [i_3] [i_1] [i_1] [i_0] [i_0] [i_0] = (arr_8 [i_1]);
                            }
                        }
                    }
                    var_19 -= (arr_3 [i_0] [i_1]);
                    var_20 = (min(var_20, 1));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_21 = (min(var_21, (arr_5 [i_1 + 1] [1] [i_1 + 2])));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_22 -= ((((18446744073709551600 ? (arr_5 [i_0] [i_7] [i_6 - 1]) : (arr_5 [i_0] [i_7] [i_6 + 1])))) ? (((-(arr_5 [10] [i_7] [i_6 + 1])))) : (arr_5 [i_0] [i_7] [i_6 + 1]));
                                var_23 = (max((12063332562671130906 * var_12), (((!((min(var_11, var_4))))))));
                                var_24 *= (min((~18446744073709551608), 120481688));
                            }
                        }
                    }
                    arr_21 [i_0] = ((((max((arr_18 [i_1] [i_1 + 2] [0] [i_5] [i_5]), ((((arr_17 [i_0] [i_0] [16]) >> var_2)))))) ? ((~(4174485608 | 3459623880))) : (((~(arr_11 [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_24 [i_0] [i_0] [i_8] [i_8] = (arr_17 [i_1 + 2] [4] [i_0]);
                    var_25 = (max(var_25, ((((((var_11 ? 120481688 : 4174485607))) == ((3459623880 ? 1365092720014716993 : var_6)))))));
                    var_26 *= (~835343415);
                    arr_25 [i_1] [i_0] [i_0] [i_1] = (arr_7 [i_0] [i_0] [i_1] [i_1]);
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_27 *= (min((~var_2), (((arr_0 [i_1 - 1]) << (1 == 23414)))));
                    var_28 -= -var_4;
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_29 = ((((((var_10 ? (arr_28 [i_0] [i_0]) : (arr_22 [i_0]))))) ? ((((!(((0 ? (arr_36 [i_0] [i_1] [i_10] [1] [i_12]) : var_9))))))) : (min(((min(var_11, (arr_29 [17] [17] [i_11] [17])))), (arr_34 [i_11] [i_11])))));
                                var_30 = (arr_17 [i_0] [i_10] [i_10]);
                                var_31 = (((((4294967283 & (min(var_4, 13))))) ? (~218) : ((4294967283 ? (171 < var_9) : var_13))));
                                var_32 = ((~(((var_12 == (var_5 | var_4))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_33 = 1;
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            {
                var_34 = (((min(var_13, 184))) ? var_3 : var_5);
                var_35 = -2;
                arr_41 [i_14] [i_13] [i_13] = ((~82) ? var_12 : ((max(var_1, (arr_19 [i_13] [i_13])))));
                var_36 = ((((((((arr_22 [i_14]) | var_5))) - 99)) | ((max((arr_40 [i_13]), var_4)))));
                arr_42 [i_14] = (((((var_14 / 115) | (var_7 - 1))) >> (((((2147483647 ? var_13 : var_3)) == ((max(var_13, 128))))))));
            }
        }
    }
    var_37 *= var_9;
    var_38 = ((((((min(1, var_10))) & ((1 ? 0 : var_5)))) ^ ((var_4 ? 108 : (var_12 - var_7)))));
    #pragma endscop
}
