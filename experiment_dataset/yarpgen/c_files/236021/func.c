/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236021
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (int i_3 = 2; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_18 *= ((/* implicit */signed char) (_Bool)1);
                        arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [1U])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 + 1] [i_2] [i_1] [i_0])))));
                        arr_12 [i_2] [i_1] [i_2] [i_0 - 1] [i_2] [i_1] = ((/* implicit */unsigned int) var_6);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_4 = 3; i_4 < 21; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                {
                    var_19 *= ((/* implicit */int) ((34351349760ULL) << (((14845121891874357810ULL) - (14845121891874357764ULL)))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_18 [i_4] [i_4 - 3] [i_4 - 1]))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) ((arr_5 [i_0 - 1] [i_0 - 1]) - (((/* implicit */unsigned int) var_13))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 4; i_8 < 20; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            {
                                var_23 = arr_26 [i_0 - 1];
                                var_24 -= ((/* implicit */long long int) (unsigned short)23361);
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_8 [i_8] [i_0 - 1] [i_0 - 1]))));
                                var_26 += ((/* implicit */int) (-(9132876703825141023LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_10 = 0; i_10 < 15; i_10 += 2) 
    {
        var_27 = ((/* implicit */long long int) var_15);
        /* LoopSeq 4 */
        for (signed char i_11 = 0; i_11 < 15; i_11 += 4) /* same iter space */
        {
            arr_32 [i_10] [2U] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_11)), (arr_29 [i_10] [i_11])))) ? (min((arr_5 [i_10] [i_11]), (arr_5 [i_10] [i_11]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_29 [i_10] [i_11])))))));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_14 [i_11]), (arr_14 [i_11])))) ? (((((/* implicit */_Bool) arr_14 [(_Bool)1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_14 [i_11])), (var_5))))));
            arr_33 [i_10] [i_10] = ((/* implicit */unsigned int) 34351349762ULL);
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (max((18446744039358201854ULL), (((/* implicit */unsigned long long int) max((arr_0 [i_11]), (((/* implicit */unsigned int) var_6)))))))));
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_10] [i_10])) & (((/* implicit */int) arr_29 [i_10] [i_10]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((9776913363205428656ULL) - (var_2)))) ? (arr_21 [i_10] [i_11] [i_11] [i_10] [i_10]) : (((/* implicit */long long int) arr_13 [i_10] [i_10] [i_10]))))) : (max((((/* implicit */unsigned long long int) (signed char)111)), (18446744039358201854ULL)))));
        }
        for (signed char i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
        {
            arr_37 [i_10] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((144115188075855871LL) << (((((/* implicit */int) var_11)) - (108)))))) : (((34351349767ULL) / (3601622181835193806ULL)))))));
            arr_38 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9776913363205428645ULL)) ? (arr_22 [i_10] [i_10] [i_10] [i_10] [i_12]) : (((/* implicit */unsigned long long int) arr_13 [i_10] [i_12] [i_12]))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) arr_22 [i_12] [i_12] [i_10] [i_10] [i_10])) ? (((/* implicit */int) (unsigned char)39)) : (arr_13 [i_10] [i_10] [i_10])))));
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (arr_19 [i_10] [i_12] [i_12] [i_10])));
            var_32 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744039358201848ULL)));
        }
        for (long long int i_13 = 2; i_13 < 14; i_13 += 2) 
        {
            var_33 = ((/* implicit */long long int) var_12);
            var_34 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned long long int) arr_21 [i_13] [i_13 + 1] [i_13] [i_13 - 2] [i_10]))))) ? (-885862427) : ((~(((/* implicit */int) arr_2 [i_13] [i_13 + 1] [i_10]))))));
            arr_41 [i_13] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_6)))) ? (min((((/* implicit */long long int) var_8)), (((((/* implicit */long long int) ((/* implicit */int) (short)7))) + (arr_30 [i_10] [(signed char)6]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)23383)))))))))));
            var_35 = ((/* implicit */unsigned short) arr_22 [i_10] [i_10] [i_10] [i_13] [i_10]);
            arr_42 [i_10] [0U] = ((/* implicit */long long int) 16383);
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_45 [i_10] [i_14] [i_14] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_19 [i_10] [i_10] [i_10] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_10] [i_10] [(_Bool)1]))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_10] [6U] [6U] [i_14])))));
            var_36 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_21 [i_14] [i_14] [i_14] [i_10] [i_10])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3584))))) : (((/* implicit */int) var_8))))));
            arr_46 [i_10] [i_10] [(signed char)14] = ((/* implicit */unsigned long long int) var_10);
        }
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (signed char i_16 = 0; i_16 < 15; i_16 += 1) 
            {
                for (long long int i_17 = 0; i_17 < 15; i_17 += 2) 
                {
                    {
                        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) max((((/* implicit */long long int) arr_1 [i_17])), (var_0))))));
                        arr_55 [i_17] [i_17] [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_15])) ? (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) ((4857926870590122034ULL) >= (13588817203119429567ULL))))));
                        arr_56 [i_10] [i_15] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((((-(7150530527105102653LL))) + (9223372036854775807LL))) << (((arr_54 [i_10] [i_10] [4] [i_17]) - (3199516157U)))))) ? (min((((/* implicit */unsigned long long int) -627991565246941623LL)), (((((/* implicit */_Bool) var_16)) ? (var_3) : (0ULL))))) : (((4857926870590122041ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (arr_24 [i_17] [i_16] [i_15] [i_15] [16])))))))));
                        /* LoopSeq 3 */
                        for (signed char i_18 = 3; i_18 < 14; i_18 += 3) 
                        {
                            var_38 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_15] [i_18 - 3] [i_15] [i_18 - 3] [i_18])) ? (var_0) : (((/* implicit */long long int) arr_27 [i_16] [i_18 + 1] [i_18] [i_18] [i_18]))));
                            var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_16] [i_16] [(_Bool)1] [i_18 - 2])) ? (((/* implicit */int) arr_58 [i_16] [i_16] [i_16] [i_18 + 1])) : (((/* implicit */int) arr_58 [i_15] [i_15] [4U] [i_18 - 2]))))) ? ((+(((/* implicit */int) arr_58 [i_17] [i_17] [i_17] [i_18 + 1])))) : (((((/* implicit */_Bool) arr_58 [12LL] [i_10] [i_18] [i_18 + 1])) ? (696441709) : (((/* implicit */int) arr_58 [i_15] [i_18 - 1] [9U] [i_18 - 2]))))));
                            var_40 = ((/* implicit */unsigned short) (-(min((11971457862165219984ULL), (((/* implicit */unsigned long long int) max((arr_27 [i_10] [i_10] [i_10] [i_10] [i_10]), (((/* implicit */unsigned int) var_4)))))))));
                        }
                        for (short i_19 = 0; i_19 < 15; i_19 += 1) 
                        {
                            var_41 = ((/* implicit */_Bool) (((((-(((/* implicit */int) arr_35 [i_19] [(unsigned char)8])))) + (2147483647))) >> (((((((/* implicit */unsigned int) var_6)) + (((((/* implicit */_Bool) 2763114802U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_0 [i_17]))))) - (22181340U)))));
                            arr_63 [i_16] [i_15] [i_16] [i_19] [i_16] [i_16] [i_10] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)46620)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_15] [i_10]))) : (var_3))), (((var_3) | (((/* implicit */unsigned long long int) 4294967295U))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_10] [i_15] [i_15] [i_17])) >> (((((((/* implicit */int) var_9)) << (((((/* implicit */int) (signed char)23)) - (16))))) - (2040174)))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0))))), (2548288263U))));
                        }
                        for (long long int i_20 = 1; i_20 < 13; i_20 += 2) 
                        {
                            var_42 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) 2548288258U)) : (261981778371908700ULL)));
                            arr_66 [i_16] [i_16] [i_16] [(signed char)8] [i_20 + 2] = ((/* implicit */signed char) max(((~((~(var_5))))), (((((((/* implicit */int) (signed char)-31)) <= (((/* implicit */int) arr_65 [i_16] [i_15] [i_15])))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_59 [i_16] [i_16] [i_16] [i_17] [i_17] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                        }
                        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) 0ULL))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_21 = 1; i_21 < 16; i_21 += 1) 
    {
        var_44 |= ((/* implicit */long long int) max(((~(((var_5) << (((/* implicit */int) arr_9 [i_21] [i_21] [(short)19])))))), (((((arr_0 [i_21 + 2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5)))))));
        arr_69 [i_21 - 1] = ((/* implicit */signed char) ((4857926870590122041ULL) / (((/* implicit */unsigned long long int) 1979987533U))));
    }
    var_45 = ((/* implicit */long long int) var_13);
    var_46 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) (-(var_7)))) ? (627991565246941632LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (4294967295U))))))));
}
