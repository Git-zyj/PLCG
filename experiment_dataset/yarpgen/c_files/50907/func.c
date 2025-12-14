/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50907
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
    var_15 += ((/* implicit */unsigned char) var_5);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        arr_2 [(unsigned char)4] = ((/* implicit */int) 4294967288U);
        var_16 = max((min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)74))) - (4294967288U))), (((/* implicit */unsigned int) arr_1 [i_0 - 1])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] [3LL] = (-2147483647 - 1);
            arr_6 [i_0] [i_1] = ((max(((~(((/* implicit */int) arr_4 [i_0] [(unsigned char)1] [i_0])))), (max((2147483627), (((/* implicit */int) var_6)))))) % (min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 2]))));
            arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned char) min((min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 4]))), (((/* implicit */int) arr_0 [i_0]))));
        }
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_11 [3] [i_2] = ((/* implicit */_Bool) ((min((arr_9 [i_2] [(unsigned char)6] [i_0 - 1]), (arr_9 [i_0 + 3] [i_0] [i_0 + 1]))) ? (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) 7453316904547997985LL))))) : (((arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 3]) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_0 + 3])) : (((/* implicit */int) arr_9 [10] [i_0] [i_0 + 4]))))));
            arr_12 [12] [i_2] = min((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (max((((/* implicit */unsigned char) arr_3 [13] [i_0 - 1])), ((unsigned char)229)))))), (min((min((((/* implicit */int) arr_4 [i_0] [3] [i_0])), (-1556131136))), (min((2147483647), (2147483647))))));
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_4 = 2; i_4 < 13; i_4 += 4) 
                {
                    var_17 = ((/* implicit */_Bool) ((arr_8 [i_4 - 1] [i_4 + 1]) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_4 - 2])) : (((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 4]))));
                    var_18 = ((/* implicit */unsigned char) (_Bool)0);
                    var_19 -= ((/* implicit */unsigned char) ((arr_1 [i_4 + 1]) < (arr_1 [i_4 + 1])));
                }
                for (unsigned char i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    arr_21 [i_0] [i_2] [4] [(unsigned char)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8963448050282565297LL)) ? (((/* implicit */int) (_Bool)1)) : (2147483647)));
                    arr_22 [i_5 + 2] [13LL] [i_2] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((arr_8 [i_0 + 4] [i_0 + 3]) || (arr_8 [i_0 + 4] [i_0 + 4])))), (min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)253))))), (min((arr_10 [i_0 + 2]), (((/* implicit */long long int) (_Bool)1))))))));
                    arr_23 [i_0] [i_0] [i_0] [(unsigned char)0] [(unsigned char)8] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((arr_18 [i_0]), (arr_13 [i_0 + 3] [i_5 + 3] [i_5] [i_5 + 1])))), (min((((((/* implicit */_Bool) 2147483627)) ? (1048348691U) : (1048348678U))), (((/* implicit */unsigned int) min((arr_15 [i_0] [i_0 - 2] [i_0 + 4] [i_0]), (arr_3 [i_0] [i_3]))))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6617237387996117474LL)));
                    var_21 += ((/* implicit */int) min(((_Bool)1), ((_Bool)1)));
                }
                for (long long int i_6 = 2; i_6 < 12; i_6 += 2) 
                {
                    var_22 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */int) arr_13 [i_2] [i_6 + 2] [i_6] [i_6])) : (((/* implicit */int) arr_13 [i_0 + 1] [i_6 + 1] [1] [i_6]))))), (arr_24 [(unsigned char)2] [i_6 - 2] [(unsigned char)2] [(unsigned char)2] [i_6] [i_6])));
                    arr_27 [13U] = (unsigned char)0;
                }
                var_23 = arr_18 [i_3];
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */int) max((var_24), (min((min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (1262344126))), (arr_34 [i_0 + 1] [i_2] [i_7] [i_8]))), (((/* implicit */int) arr_4 [i_0] [i_8] [i_7]))))));
                            var_25 = ((/* implicit */unsigned char) min((max((-6109061875262309036LL), (((/* implicit */long long int) 1812207663U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((-1), (((/* implicit */int) arr_15 [i_0] [i_7] [i_8] [i_9]))))) ? (((/* implicit */unsigned int) arr_32 [i_0 - 1] [i_0 - 1])) : (max((3246618604U), (((/* implicit */unsigned int) (unsigned char)201)))))))));
                            arr_38 [i_0] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min(((unsigned char)11), (arr_18 [i_0 - 2])))), (min((arr_14 [i_0 + 2] [i_0 + 2] [3LL]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_24 [i_0] [i_0] [(_Bool)1] [i_8] [(_Bool)1] [i_2]))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */int) min((arr_3 [i_0] [i_0 - 1]), (min((arr_3 [i_0 - 2] [i_2]), (arr_3 [i_2] [i_7])))));
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (long long int i_11 = 3; i_11 < 11; i_11 += 3) 
                    {
                        {
                            arr_44 [i_7] [i_7] [i_7] [i_10] [8] = ((/* implicit */_Bool) arr_17 [i_11 - 2]);
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) min((min((((/* implicit */long long int) ((arr_14 [i_0] [i_2] [i_2]) <= (((/* implicit */long long int) 2977986265U))))), (max((arr_41 [i_0] [i_0] [(unsigned char)3] [(unsigned char)2]), (((/* implicit */long long int) 255530254)))))), (((/* implicit */long long int) min((((/* implicit */int) arr_17 [i_0 - 2])), (-1)))))))));
                        }
                    } 
                } 
                var_28 = (-(((/* implicit */int) (unsigned char)211)));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                arr_48 [i_12] = ((/* implicit */_Bool) min((arr_14 [i_0 + 1] [i_0 + 2] [i_0 + 1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                var_29 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [11] [i_2] [i_2] [11])) ? (((/* implicit */int) arr_29 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_12])) : (((/* implicit */int) arr_29 [i_12] [i_2] [i_0 + 4] [13]))))), (2977986279U)));
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_53 [i_12] = ((/* implicit */unsigned int) (+(-1279811547)));
                    arr_54 [i_0 + 2] [i_12] [1U] [i_13] = min((arr_25 [(_Bool)1] [i_2] [i_2]), (min((min((((/* implicit */int) (unsigned char)71)), (arr_1 [i_0 + 4]))), (var_13))));
                }
            }
        }
        for (long long int i_14 = 1; i_14 < 13; i_14 += 1) 
        {
            arr_59 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(max((arr_28 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1]), (((/* implicit */int) arr_52 [i_14 + 1] [i_14] [i_0] [i_0]))))))), (((((/* implicit */_Bool) arr_39 [i_0 + 2] [i_14 + 1] [i_0 + 4] [i_14] [(_Bool)1] [i_14])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)220))) - (arr_20 [i_14] [i_14] [i_14 + 2] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_2) : (var_14))))))));
            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) min((2977986257U), (((/* implicit */unsigned int) arr_4 [i_0] [i_14] [i_0 + 4]))))) ? (min((((/* implicit */long long int) arr_34 [i_0] [i_14] [i_0] [i_0 + 3])), (((((/* implicit */_Bool) -1207705979)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (4373775627403039036LL))))) : (((/* implicit */long long int) 2977986246U))));
            arr_60 [i_0] [i_0 + 2] |= ((/* implicit */long long int) min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1316981039U))), (((/* implicit */unsigned int) max((max((arr_32 [i_0 + 2] [i_0 + 2]), (((/* implicit */int) (_Bool)1)))), (min((arr_31 [i_0 + 3] [i_14] [i_0 + 2]), (arr_32 [i_0 + 2] [i_0 - 1]))))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_15 = 2; i_15 < 23; i_15 += 1) 
    {
        for (unsigned int i_16 = 0; i_16 < 24; i_16 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 24; i_17 += 1) 
                {
                    for (int i_18 = 1; i_18 < 23; i_18 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned int) (+(var_7)));
                            var_32 ^= ((/* implicit */unsigned int) max((1629577495899736627LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_64 [i_15] [i_16] [i_17])) ? (max((((/* implicit */unsigned int) arr_63 [i_15] [17LL])), (1316981049U))) : (((/* implicit */unsigned int) min((var_4), (((/* implicit */int) var_3))))))))));
                            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) min((arr_67 [i_18 + 1] [i_18 - 1] [i_18 + 1] [6]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_67 [i_18 + 1] [0] [i_18 - 1] [i_18 + 1])) < (((/* implicit */int) arr_67 [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 + 1]))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_19 = 0; i_19 < 24; i_19 += 4) 
                {
                    for (int i_20 = 1; i_20 < 21; i_20 += 2) 
                    {
                        for (unsigned int i_21 = 2; i_21 < 23; i_21 += 4) 
                        {
                            {
                                arr_78 [i_15] [i_16] [23] [i_20] [i_20] [12U] = 9223372036854775807LL;
                                var_34 = ((/* implicit */int) max((((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)24)) ? (1087481685) : (-966570149))), (((((/* implicit */_Bool) -1279811547)) ? (((/* implicit */int) arr_70 [i_16])) : (((/* implicit */int) (_Bool)1))))))), (max((((/* implicit */long long int) -861599141)), (((((/* implicit */_Bool) arr_64 [23] [i_16] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_19] [i_15]))) : ((-9223372036854775807LL - 1LL))))))));
                                arr_79 [i_15] [i_16] [i_20] [i_20] [i_21] = ((/* implicit */unsigned int) min((max((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1)))), (((((/* implicit */_Bool) 1610954973)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)109))) : (4300746044972245510LL)))));
                                arr_80 [i_15 - 2] [i_20] [i_19] [i_20] [i_16] = ((/* implicit */long long int) arr_73 [i_15] [i_16] [i_16]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_22 = 2; i_22 < 23; i_22 += 4) 
                {
                    for (unsigned char i_23 = 0; i_23 < 24; i_23 += 1) 
                    {
                        {
                            var_35 = (((-(((/* implicit */int) arr_61 [i_15 - 1])))) - (((/* implicit */int) var_8)));
                            var_36 = ((/* implicit */int) max((var_36), (((((/* implicit */int) max((arr_61 [i_15 - 1]), (arr_61 [i_15 + 1])))) / (((/* implicit */int) min((arr_61 [i_15 - 2]), (arr_61 [i_15 - 1]))))))));
                            var_37 *= ((/* implicit */_Bool) ((((/* implicit */int) min((arr_82 [i_15 - 2] [i_22 + 1]), (arr_82 [i_15 - 2] [i_22 - 1])))) + (((/* implicit */int) max((arr_82 [i_15 - 1] [i_22 - 1]), (arr_82 [i_15 + 1] [i_22 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_38 += ((/* implicit */unsigned int) ((var_1) | (min((((/* implicit */int) ((((/* implicit */int) (unsigned char)163)) <= ((-2147483647 - 1))))), (var_14)))));
    /* LoopSeq 1 */
    for (int i_24 = 1; i_24 < 19; i_24 += 3) 
    {
        arr_90 [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (3246618592U))) : (((/* implicit */unsigned int) max((arr_68 [(unsigned char)7] [i_24 + 2] [i_24 + 2] [i_24] [(unsigned char)7] [i_24]), (-1))))))) ? ((((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (arr_62 [i_24] [i_24])))), ((-2147483647 - 1)))))));
        arr_91 [i_24] [i_24 + 1] = ((/* implicit */int) ((((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) arr_84 [16LL] [i_24] [i_24] [i_24 - 1] [i_24] [i_24 + 1]))))) - (min((((/* implicit */long long int) min(((_Bool)0), ((_Bool)1)))), (-8134202787508654469LL)))));
        var_39 -= ((/* implicit */unsigned char) arr_82 [(unsigned char)21] [(_Bool)1]);
        var_40 += ((/* implicit */unsigned int) (-2147483647 - 1));
    }
}
