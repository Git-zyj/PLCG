/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219522
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) (short)-28871)), (((((/* implicit */int) arr_0 [i_1 + 1] [i_0])) | (((/* implicit */int) arr_0 [i_1 - 1] [i_0]))))));
                var_20 = ((/* implicit */signed char) ((short) ((short) arr_0 [i_0] [i_1 + 1])));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((long long int) arr_5 [i_0] [i_1 + 1])))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [(short)2] = ((/* implicit */unsigned short) arr_1 [i_0] [i_1 + 1]);
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (short)-8692)), (arr_3 [i_1 - 1] [i_2]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-18447), ((short)18447)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_3])) ? (2489281780U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)101)))))) ? (((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))) : (((/* implicit */int) arr_9 [4U] [i_1 - 1] [i_1] [i_1 + 1])))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)4092))) : (2LL)))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [(short)0] [(_Bool)1] [i_3])) ? (((/* implicit */int) arr_1 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_6 [i_0] [i_2] [i_3])))) : (((/* implicit */int) arr_4 [i_0] [(short)5])))))))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                            {
                                arr_16 [i_0] [i_0] [i_2] [(unsigned short)4] [i_4] = ((/* implicit */short) ((((((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1])) / (((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1])))) * (((/* implicit */int) arr_0 [i_1 - 1] [i_4 + 1]))));
                                var_23 += ((short) (unsigned char)86);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_10);
    var_25 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                {
                    var_26 -= ((/* implicit */long long int) min((((((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */int) arr_6 [i_5] [i_6] [i_7])) : (((/* implicit */int) (short)27131)))) ^ (((/* implicit */int) ((short) arr_24 [i_7]))))), (((/* implicit */int) ((short) arr_14 [i_5] [i_5])))));
                    var_27 = ((/* implicit */_Bool) ((short) max((arr_12 [i_5] [(signed char)13] [(short)1] [i_5] [i_5] [i_5]), (arr_12 [(signed char)8] [i_6] [i_7] [i_6] [i_6] [i_6]))));
                }
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) max((7944835695305817750LL), (((/* implicit */long long int) min(((short)32767), ((short)-32764))))))) ? (((/* implicit */int) arr_28 [i_5] [(short)8])) : (((((/* implicit */_Bool) arr_11 [i_8] [i_8] [i_6] [i_5])) ? (((/* implicit */int) arr_11 [i_5] [i_5] [i_6] [i_8])) : (((/* implicit */int) (unsigned char)255))))));
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) max(((short)18447), (((/* implicit */short) arr_29 [i_5])))))) ? (((/* implicit */int) arr_9 [i_5] [(signed char)10] [2U] [i_5])) : (((((/* implicit */int) arr_22 [i_5] [i_5] [i_5])) & (((/* implicit */int) (short)11029))))));
                    arr_30 [(short)5] [i_6] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(short)10])) * (((/* implicit */int) max((arr_19 [i_5]), (((/* implicit */short) arr_2 [i_5])))))))) ? (((/* implicit */int) ((signed char) arr_12 [(unsigned char)8] [i_6] [i_6] [11LL] [(short)4] [i_6]))) : (max((((/* implicit */int) arr_11 [i_8] [i_8] [i_8] [i_8])), (((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) arr_14 [i_5] [i_5]))))))));
                }
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        var_30 = ((/* implicit */_Bool) arr_17 [i_5]);
                        var_31 = ((/* implicit */unsigned short) ((((arr_23 [i_5] [i_5]) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (arr_23 [i_5] [i_5])))))));
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_32 [i_5] [6LL] [i_6])) ? (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_6] [i_5] [i_10])) : (((/* implicit */int) (short)18447)))) + (2147483647))) << (((max((((/* implicit */unsigned int) arr_28 [i_6] [i_6])), (1354571853U))) - (1354571853U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6]))) : (((((/* implicit */_Bool) max((arr_28 [i_6] [i_10]), ((short)11029)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_6]))) + (2489281780U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)64207))))))))))));
                    }
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-23922)) & (((/* implicit */int) arr_27 [i_5] [i_6] [i_5]))));
                        var_34 = ((/* implicit */unsigned char) ((1371619068U) < (arr_3 [i_5] [i_5])));
                    }
                    var_35 = ((/* implicit */signed char) max(((short)24657), (((/* implicit */short) arr_17 [i_6]))));
                    var_36 = ((/* implicit */signed char) (_Bool)0);
                }
                var_37 = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [(_Bool)1])) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) arr_1 [i_6] [i_6])))), (((((/* implicit */int) (unsigned char)5)) / (((/* implicit */int) arr_32 [i_5] [(short)9] [i_5])))))), (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_5]))) / (arr_33 [i_5]))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_14 = 3; i_14 < 6; i_14 += 2) 
                            {
                                arr_44 [i_5] [i_6] [(short)4] [i_12] [i_13] [i_14] [i_14] = ((/* implicit */short) ((((((/* implicit */int) arr_15 [i_14] [i_14 + 2] [i_14 - 3] [i_14 + 2] [i_14] [i_14] [i_14])) >= (((/* implicit */int) arr_26 [i_14 + 4] [i_14 - 2] [i_14 + 3])))) ? (max((min((((/* implicit */unsigned int) (short)18447)), (4294967295U))), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_29 [i_14 + 3]))))));
                                var_38 = ((/* implicit */signed char) min((max((((/* implicit */long long int) ((unsigned char) (short)18447))), (arr_34 [(_Bool)1] [(short)2] [i_14 - 1] [(_Bool)1] [(_Bool)1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_5] [i_6] [i_12] [i_13] [i_14 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(short)9] [(signed char)12] [i_12] [(signed char)12]))) | (arr_20 [i_13] [i_6]))))))));
                                var_39 = ((/* implicit */unsigned int) min((arr_36 [i_14 + 1] [i_14] [i_12] [i_12]), (((/* implicit */short) ((_Bool) ((1069298589U) << (((2439890374U) - (2439890357U)))))))));
                            }
                            var_40 = ((/* implicit */signed char) ((max((arr_25 [i_5] [i_5] [i_5]), (arr_25 [i_5] [i_5] [i_5]))) ? (arr_34 [i_5] [i_6] [i_6] [i_12] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)14)), ((short)18436)))))));
                        }
                    } 
                } 
                arr_45 [i_5] = ((/* implicit */short) arr_2 [i_5]);
                /* LoopSeq 4 */
                for (unsigned char i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((_Bool) arr_35 [(short)3] [(short)3] [i_6])))));
                    /* LoopNest 2 */
                    for (signed char i_16 = 1; i_16 < 7; i_16 += 4) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((arr_33 [(signed char)7]) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_17] [i_5])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_15] [(short)4]))))))))))));
                                var_43 -= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2654)) ? (((/* implicit */int) arr_17 [(_Bool)1])) : (((/* implicit */int) arr_42 [i_5] [i_6] [i_15] [i_16]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)4080), (((/* implicit */short) (signed char)55)))))) : (min((arr_18 [i_5]), (((/* implicit */unsigned int) (short)-2673)))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)168)) || (((/* implicit */_Bool) 8U)))))));
                            }
                        } 
                    } 
                    arr_54 [i_5] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)4)) <= (((/* implicit */int) ((((/* implicit */int) arr_4 [i_5] [i_5])) <= (((/* implicit */int) (signed char)53)))))))), (arr_18 [i_15])));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_44 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((((/* implicit */int) (short)-14396)) + (2147483647))) << (((((/* implicit */int) arr_24 [i_18])) - (8567)))))), (arr_56 [i_5] [i_5] [i_6] [i_5])));
                    var_45 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((signed char) arr_27 [i_18] [i_6] [i_5]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -4536383494704492304LL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-2654))))))));
                    arr_58 [i_5] [i_6] [i_18] = ((/* implicit */short) max((((/* implicit */unsigned int) max((((signed char) arr_33 [i_6])), ((signed char)0)))), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_11 [10LL] [i_6] [10LL] [i_5])), (arr_27 [i_5] [i_5] [i_5]))))) : (max((arr_52 [(_Bool)1] [i_5] [i_5] [i_6] [i_6] [i_5] [i_18]), (((/* implicit */unsigned int) arr_46 [i_5] [i_5]))))))));
                    var_46 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_25 [i_5] [i_6] [i_5]) ? (((/* implicit */int) arr_42 [i_5] [(_Bool)1] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) (unsigned char)64))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7722))) : (max((((/* implicit */unsigned int) arr_36 [i_5] [i_6] [i_18] [i_18])), (arr_3 [i_5] [i_6]))))) << (((((/* implicit */int) ((short) arr_34 [i_5] [i_5] [7LL] [i_5] [i_5]))) + (4820)))));
                }
                for (signed char i_19 = 0; i_19 < 10; i_19 += 2) 
                {
                    var_47 = ((/* implicit */unsigned int) ((unsigned char) arr_38 [i_5] [i_5] [i_6] [i_19]));
                    var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_56 [i_5] [(unsigned short)9] [i_5] [(unsigned short)9])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2654))) : (arr_56 [i_5] [i_5] [i_6] [i_19]))) != (arr_56 [i_5] [i_6] [i_6] [i_19]))))));
                    arr_63 [i_19] [i_6] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5] [i_5] [i_5] [i_5] [i_5] [(unsigned char)13] [i_5]))) != (max((((((/* implicit */_Bool) arr_24 [i_5])) ? (-4536383494704492318LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))))), (((/* implicit */long long int) min((((/* implicit */short) (_Bool)0)), ((short)2653))))))));
                    /* LoopNest 2 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        for (unsigned short i_21 = 0; i_21 < 10; i_21 += 1) 
                        {
                            {
                                var_49 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_69 [i_5] [i_6])), (arr_34 [i_5] [i_19] [4U] [i_20] [i_21])))) ? (((((/* implicit */int) arr_22 [i_5] [i_5] [i_21])) >> (((((/* implicit */int) ((short) arr_43 [i_5] [i_6] [i_19]))) + (27262))))) : (((/* implicit */int) arr_55 [i_19] [i_19] [i_19] [i_19]))));
                                var_50 = ((/* implicit */short) max((var_50), (max((max(((short)-24064), (max((((/* implicit */short) arr_50 [(unsigned short)9] [i_5])), (arr_6 [i_21] [(signed char)5] [i_19]))))), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_17 [i_5]))) || (((/* implicit */_Bool) arr_31 [i_5])))))))));
                                var_51 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)12)) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)217)))));
                            }
                        } 
                    } 
                }
                for (short i_22 = 0; i_22 < 10; i_22 += 2) 
                {
                    arr_72 [i_22] = ((/* implicit */unsigned char) (signed char)-1);
                    var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) max((((/* implicit */int) ((short) arr_12 [(signed char)4] [(signed char)4] [(signed char)4] [i_22] [i_5] [(short)4]))), (((((((/* implicit */int) (short)-31806)) ^ (((/* implicit */int) arr_2 [i_5])))) >> (((((/* implicit */int) ((signed char) (unsigned char)255))) + (25))))))))));
                    var_53 = ((/* implicit */unsigned short) (short)-18667);
                }
            }
        } 
    } 
    var_54 *= ((/* implicit */short) ((((/* implicit */int) var_2)) * (((/* implicit */int) ((((/* implicit */int) var_8)) == (((((/* implicit */int) var_6)) | (((/* implicit */int) var_18)))))))));
}
