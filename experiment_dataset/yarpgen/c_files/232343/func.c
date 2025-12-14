/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232343
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        var_17 += ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) arr_2 [i_0])), (arr_0 [i_0 - 1])))));
        var_18 = ((/* implicit */long long int) min((arr_2 [(unsigned char)0]), (((/* implicit */unsigned char) arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_3 [2] [i_1 + 2] [2])), (min((min((((/* implicit */long long int) var_14)), (-4711798063350802307LL))), (((/* implicit */long long int) max((var_14), (((/* implicit */int) var_3)))))))));
            var_20 ^= ((/* implicit */int) (~(((((arr_0 [i_1 + 1]) + (9223372036854775807LL))) >> (((/* implicit */int) ((_Bool) (_Bool)1)))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    arr_11 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_3])), (((2147483647) ^ (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned int) (~(max((((/* implicit */int) var_9)), (var_12)))))) : (((unsigned int) min((((/* implicit */int) var_2)), (var_12))))));
                    arr_12 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */int) var_3)), ((-(((((/* implicit */int) var_2)) + (var_12)))))));
                    var_21 -= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
                    var_22 = ((/* implicit */unsigned char) var_0);
                }
                var_23 = ((/* implicit */signed char) ((var_6) == (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)206)), (-1272122999))))));
            }
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            var_24 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0 - 2] [i_4]);
            var_25 += ((/* implicit */short) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((((/* implicit */int) arr_8 [(_Bool)0] [i_0] [i_0 - 4] [i_0] [i_0] [i_0])) + (28634))) - (29)))));
            var_26 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_14))) > (var_14)));
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0 + 1])) == (((/* implicit */int) arr_4 [i_0 + 1])))))));
            var_28 += ((/* implicit */signed char) ((((/* implicit */int) var_11)) | (((((/* implicit */int) arr_4 [i_0 - 4])) + (((/* implicit */int) arr_2 [i_0 + 1]))))));
        }
    }
    for (signed char i_5 = 1; i_5 < 10; i_5 += 2) 
    {
        var_29 -= arr_16 [(signed char)6];
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_15 [i_5]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_5)), (arr_17 [i_5 + 2]))))) : (min((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) var_15))))));
        var_31 = ((/* implicit */_Bool) min((var_9), (arr_17 [i_5])));
        /* LoopSeq 4 */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            var_32 = ((/* implicit */signed char) var_8);
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                for (long long int i_8 = 4; i_8 < 9; i_8 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) (((~(min((var_6), (((/* implicit */unsigned int) arr_26 [i_5] [i_6])))))) >> (((min((((/* implicit */long long int) var_11)), (var_10))) + (5206739231417615027LL)))));
                            var_34 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) ((var_12) < (((/* implicit */int) (signed char)109)))))) > (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) & (18400412932987603869ULL))) != (((/* implicit */unsigned long long int) var_10)))))));
                            arr_29 [i_5] [i_5 + 1] [i_5 + 1] [i_5] [i_5] [i_5 - 1] [3ULL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((410654818U) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_25 [i_8] [i_8]))))) : (5496290370941153355ULL))))));
                            var_35 = ((/* implicit */unsigned short) ((unsigned long long int) ((max((((/* implicit */unsigned int) var_9)), (var_6))) < (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 11U)))))));
                            var_36 ^= ((/* implicit */int) ((((min((min((var_10), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) var_2)))) + (9223372036854775807LL))) << ((((((-(((((/* implicit */int) (unsigned char)253)) / (((/* implicit */int) (unsigned char)209)))))) + (18))) - (16)))));
                        }
                        for (unsigned char i_10 = 1; i_10 < 10; i_10 += 2) 
                        {
                            var_37 = ((/* implicit */unsigned char) max((var_37), (((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (var_10))))));
                            var_38 = ((/* implicit */unsigned char) ((((arr_21 [i_5 + 1] [i_8 - 4]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_5 + 1] [i_8 - 3] [i_10 + 1] [i_10])))))));
                        }
                        var_39 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_16 [i_5]))))), (min((var_10), (6710230625112358503LL))))), (((/* implicit */long long int) min((arr_26 [i_5 - 1] [i_5 + 2]), (arr_26 [i_5] [i_5 - 1]))))));
                        arr_33 [i_7] [i_7] [(unsigned char)1] [i_8 + 1] [i_5] = ((/* implicit */signed char) ((10906567042627466839ULL) - (((/* implicit */unsigned long long int) ((((9223372036854775807LL) + (-8043363796482149560LL))) + (((/* implicit */long long int) ((/* implicit */int) (short)-15807))))))));
                        var_40 -= ((/* implicit */unsigned int) var_9);
                    }
                } 
            } 
        }
        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_12) >= (max((((/* implicit */int) var_13)), (var_14)))))) != (((/* implicit */int) ((short) -1038007466019895015LL)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_12 = 1; i_12 < 11; i_12 += 3) 
            {
                arr_38 [(unsigned char)5] [(unsigned char)5] [i_12 - 1] [i_5] = ((/* implicit */unsigned char) var_16);
                var_42 = ((/* implicit */signed char) ((((var_1) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) arr_25 [i_5] [i_11])))) >= (var_12)));
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_21 [i_5] [i_5]))) + (((/* implicit */int) ((_Bool) arr_34 [i_5] [i_11] [i_12 - 1])))));
                var_44 ^= ((/* implicit */_Bool) arr_25 [i_5] [(short)3]);
                var_45 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_11] [i_5 + 1])) ? (((/* implicit */unsigned long long int) -1038007466019895011LL)) : (46331140721947747ULL)));
            }
            for (short i_13 = 4; i_13 < 11; i_13 += 4) 
            {
                var_46 += ((/* implicit */unsigned int) (_Bool)0);
                var_47 = ((/* implicit */_Bool) ((((var_1) ? (((/* implicit */int) max((((/* implicit */short) arr_25 [i_13] [i_5])), (arr_16 [i_5])))) : (((((/* implicit */_Bool) arr_32 [i_5 + 1] [i_5 + 1] [i_5] [i_5])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))) - ((+(((((/* implicit */int) arr_24 [i_13 + 1] [i_5] [i_5] [i_5 + 1])) - (((/* implicit */int) arr_26 [i_13] [11]))))))));
                var_48 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((var_14) / (arr_32 [(unsigned short)2] [(unsigned short)2] [i_5] [i_13]))) * (((((/* implicit */int) arr_22 [i_5] [i_5] [i_11] [i_5])) * (((/* implicit */int) var_2))))))) == (min((((/* implicit */long long int) min((var_15), (var_3)))), (max((var_10), (var_10)))))));
                var_49 = ((/* implicit */signed char) ((min(((~(((/* implicit */int) (short)26092)))), (var_14))) > (((((/* implicit */_Bool) arr_28 [(_Bool)1] [(_Bool)1] [i_13 - 2])) ? (((/* implicit */int) arr_31 [i_13] [i_13] [i_13 - 1] [i_5] [i_13] [i_13 + 1])) : (((/* implicit */int) min((var_13), (var_16))))))));
            }
            for (unsigned char i_14 = 3; i_14 < 10; i_14 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    var_50 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_40 [i_11] [i_11] [i_14 + 1] [i_15]))) ? (((/* implicit */int) max((arr_26 [i_5 + 1] [i_11]), (arr_46 [i_5 + 1] [(signed char)8] [i_14 - 1] [i_15] [(short)8] [i_14])))) : (((/* implicit */int) min((((/* implicit */short) var_1)), (((short) -9223372036854775807LL)))))));
                    var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) var_3))));
                }
                /* vectorizable */
                for (short i_16 = 3; i_16 < 9; i_16 += 3) 
                {
                    var_52 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((-9223372036854775795LL) >= (((/* implicit */long long int) var_4)))))));
                    var_53 = ((/* implicit */unsigned char) ((((arr_18 [i_5] [i_5]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_5] [i_5] [i_14]))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_19 [i_5])))))));
                    var_54 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)28578)))) > (((/* implicit */int) arr_44 [i_14 + 1] [i_14 - 1]))));
                    var_55 -= ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) (unsigned char)253)) : (-1494637620))) | (((/* implicit */int) (unsigned char)131))));
                }
                /* vectorizable */
                for (short i_17 = 1; i_17 < 9; i_17 += 4) 
                {
                    arr_56 [3U] [i_5] [3U] = ((/* implicit */long long int) var_16);
                    arr_57 [i_5 + 2] [i_5] [i_5 + 2] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_16))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_18 = 2; i_18 < 10; i_18 += 4) 
                {
                    arr_60 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((var_14) * (((/* implicit */int) (_Bool)0))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */short) var_0)), (var_8)))), (((arr_21 [(unsigned short)5] [(unsigned short)9]) ? (var_6) : (((/* implicit */unsigned int) var_12)))))))));
                    var_56 -= ((/* implicit */unsigned long long int) var_16);
                    /* LoopSeq 1 */
                    for (int i_19 = 1; i_19 < 11; i_19 += 1) 
                    {
                        var_57 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_22 [i_5] [(short)0] [5U] [i_19 - 1]))))));
                        var_58 = ((/* implicit */unsigned char) max(((+((-(((/* implicit */int) (_Bool)0)))))), (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_17 [i_11])))) % (((/* implicit */int) ((short) var_13)))))));
                    }
                }
            }
            var_59 = ((/* implicit */_Bool) ((unsigned char) ((((arr_37 [i_5]) + (((/* implicit */long long int) ((/* implicit */int) arr_36 [(unsigned char)2] [(unsigned char)2] [i_11]))))) / (min((9223372036854775806LL), (((/* implicit */long long int) (unsigned char)186)))))));
        }
        for (signed char i_20 = 1; i_20 < 10; i_20 += 3) 
        {
            arr_66 [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_53 [i_5] [i_5 + 2] [i_5])))), (((var_12) << (((var_4) - (925239287U)))))))), ((~(var_6)))));
            var_60 = ((/* implicit */unsigned int) var_0);
            var_61 ^= ((/* implicit */unsigned short) arr_36 [i_20] [i_5 + 1] [i_5]);
        }
        for (signed char i_21 = 0; i_21 < 12; i_21 += 3) 
        {
            /* LoopNest 2 */
            for (short i_22 = 2; i_22 < 10; i_22 += 4) 
            {
                for (long long int i_23 = 0; i_23 < 12; i_23 += 3) 
                {
                    {
                        var_62 = ((/* implicit */long long int) min((var_62), (((/* implicit */long long int) arr_26 [i_5] [i_23]))));
                        var_63 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_43 [i_22 + 2] [i_5 + 1]), (arr_43 [i_22 - 2] [i_5 + 1])))) ? (((/* implicit */int) arr_43 [i_22 - 1] [i_5 + 2])) : (((/* implicit */int) (!(var_2))))));
                    }
                } 
            } 
            var_64 ^= ((/* implicit */_Bool) ((arr_68 [(signed char)4] [i_21] [i_5 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_7)), (min((arr_52 [4U]), (((/* implicit */short) arr_72 [i_5] [10] [6U] [i_21] [i_5] [10])))))))) : (arr_48 [i_5] [i_5] [(short)1])));
        }
    }
    var_65 -= ((/* implicit */unsigned short) ((int) var_1));
}
