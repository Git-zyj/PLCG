/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46477
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                var_15 ^= ((/* implicit */short) ((var_9) + (1489169940)));
                var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1])) == (arr_3 [i_0 - 1]))))));
                var_17 ^= 8841686132442752292LL;
                var_18 = ((/* implicit */unsigned short) (+(var_10)));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4640)) ? (arr_6 [i_0] [i_0 - 1] [10U] [i_1]) : (((/* implicit */long long int) (-(3627411794U))))));
            }
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    var_20 = ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (unsigned short)26839)) : (arr_3 [i_0]))) != ((-(((/* implicit */int) (unsigned char)9))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) -888468992)) ? (arr_4 [i_0] [i_0] [i_3]) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_4])) && (((/* implicit */_Bool) var_7)))))));
                    var_22 |= ((/* implicit */long long int) ((var_10) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (1370085518))))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0] [i_0 - 1])) + (((/* implicit */int) arr_5 [i_0] [i_0 - 1])))))));
                    var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)49235))));
                }
                var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_1] [i_1] [i_0 + 1]))));
            }
            for (long long int i_5 = 2; i_5 < 11; i_5 += 1) 
            {
                var_26 = var_4;
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) -1370085529))));
            }
            var_28 = (~(arr_1 [i_0] [11LL]));
        }
        for (short i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            var_29 &= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_15 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_15 [i_0 - 1]))));
            var_30 = ((/* implicit */_Bool) max((var_30), (arr_13 [i_0] [i_6])));
            var_31 = ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_0 [i_0] [i_0 - 1])));
        }
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0] [i_0])), (var_1)))) ? (((/* implicit */unsigned int) (~(611917416)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (var_4)))))) ? (((min((var_11), (((/* implicit */long long int) (unsigned char)83)))) - (((/* implicit */long long int) max((arr_2 [i_0 + 1] [i_0] [i_0]), (var_5)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_15 [i_0 - 1]))))));
        var_33 &= ((/* implicit */_Bool) max((arr_2 [i_0] [i_0 - 1] [i_0]), (arr_2 [i_0] [i_0 - 1] [i_0])));
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            var_34 = ((/* implicit */signed char) max((((var_1) + (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_7] [i_7]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -493810634)) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_10))) : (((/* implicit */unsigned int) var_9)))))));
            var_35 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)6700)) + (((493810633) & (((/* implicit */int) arr_5 [i_0] [i_7]))))))) != (max((max((1575665418U), (var_5))), (((/* implicit */unsigned int) ((arr_11 [(unsigned short)6] [i_0] [i_0] [i_0] [(unsigned short)6] [i_7]) == (arr_8 [i_0] [i_0] [i_0] [5LL]))))))));
            var_36 = ((/* implicit */unsigned short) max((((long long int) arr_2 [i_0 + 1] [i_0 - 1] [i_0])), (((/* implicit */long long int) ((arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1]) != (((/* implicit */unsigned int) var_9)))))));
        }
        /* LoopSeq 3 */
        for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            arr_24 [i_0] [i_8] = ((/* implicit */unsigned int) min(((+(min((1491411807796618332LL), (((/* implicit */long long int) var_8)))))), (((((/* implicit */_Bool) arr_20 [i_0] [i_8] [i_0 - 1])) ? (-4163891354491507093LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-4550)))))));
            /* LoopNest 2 */
            for (short i_9 = 3; i_9 < 11; i_9 += 1) 
            {
                for (short i_10 = 3; i_10 < 9; i_10 += 1) 
                {
                    {
                        arr_31 [i_9] = ((/* implicit */long long int) (~((+((+(((/* implicit */int) var_2))))))));
                        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) arr_13 [i_10 - 3] [i_0 + 1]))));
                        arr_32 [i_0] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)22266))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)46962))) == (arr_11 [i_9] [i_8] [i_9] [i_10] [i_8] [i_8]))))) : (((((/* implicit */_Bool) (unsigned short)6716)) ? (arr_11 [i_9] [i_8] [i_8] [i_8] [i_8] [i_8]) : (arr_11 [i_9] [i_8] [i_8] [i_8] [i_9 - 3] [i_8])))));
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (-(-493810620)))), (min((var_7), (((/* implicit */unsigned int) arr_25 [0LL] [i_8] [i_8]))))))), (((((/* implicit */_Bool) arr_17 [i_10])) ? ((~(arr_22 [i_0]))) : (((/* implicit */long long int) ((arr_13 [i_0] [i_10]) ? (arr_14 [i_0] [i_8] [i_9] [i_10]) : (var_5)))))))))));
                        arr_33 [i_9] [i_9] [(_Bool)1] [i_10] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_12 [i_10 + 4] [i_10 - 1] [i_10] [i_10 - 2])) == (((/* implicit */int) arr_12 [i_10 + 2] [i_10 - 1] [i_10] [i_10 + 1])))));
                    }
                } 
            } 
            var_39 = ((/* implicit */int) var_12);
            /* LoopSeq 3 */
            for (int i_11 = 0; i_11 < 13; i_11 += 2) 
            {
                var_40 = arr_27 [1U];
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 13; i_12 += 1) 
                {
                    for (unsigned short i_13 = 1; i_13 < 12; i_13 += 2) 
                    {
                        {
                            arr_41 [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0])))))) ? ((~(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_13)) ? (arr_34 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]) : (((/* implicit */int) var_2)))));
                            arr_42 [i_0] [i_8] [i_13] [i_13] [i_13] [i_13] = ((((min((((((/* implicit */_Bool) -6308641374518889984LL)) ? (var_11) : (((/* implicit */long long int) var_4)))), (((((/* implicit */_Bool) var_3)) ? (arr_8 [i_0] [i_0] [i_11] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_12]))))))) + (9223372036854775807LL))) << (((((/* implicit */int) min((((unsigned short) 2561832146U)), (((/* implicit */unsigned short) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) - (1))));
                            var_41 = (+(((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) ((unsigned short) arr_17 [i_11]))) : (((/* implicit */int) arr_17 [i_11])))));
                            var_42 += ((/* implicit */unsigned int) ((arr_34 [i_0 - 1] [i_13 + 1] [11] [i_13]) == (max((((/* implicit */int) var_8)), (arr_34 [i_0 + 1] [i_13 - 1] [i_13] [i_13])))));
                        }
                    } 
                } 
            }
            for (int i_14 = 2; i_14 < 12; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 13; i_15 += 4) 
                {
                    for (signed char i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        {
                            var_43 = ((/* implicit */short) (unsigned short)43286);
                            var_44 = ((/* implicit */long long int) (unsigned short)22250);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_17 = 0; i_17 < 13; i_17 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_18 = 0; i_18 < 13; i_18 += 4) 
                    {
                        var_45 -= ((/* implicit */long long int) arr_43 [i_8] [i_14] [i_18]);
                        var_46 |= ((/* implicit */signed char) min((((/* implicit */int) var_8)), ((+(((/* implicit */int) arr_19 [i_0 - 1] [i_14 + 1]))))));
                        var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((min((3666138590605199873LL), (((/* implicit */long long int) arr_52 [i_14 - 2] [i_0] [i_14] [i_17] [i_18] [i_0])))) & (((/* implicit */long long int) (~(arr_52 [i_14 - 1] [i_8] [i_14] [i_17] [i_8] [i_8])))))))));
                    }
                    for (signed char i_19 = 0; i_19 < 13; i_19 += 2) 
                    {
                        var_48 &= ((/* implicit */unsigned short) min((2092990120U), (((/* implicit */unsigned int) max((arr_43 [i_0 + 1] [i_8] [i_14 - 1]), (arr_43 [i_0 + 1] [i_8] [i_14 - 2]))))));
                        var_49 = ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (4283234852U)))) : (arr_11 [i_14] [i_14] [i_14 + 1] [i_14] [i_14] [i_14 - 2])))));
                    }
                    var_50 = ((unsigned int) ((long long int) var_10));
                    var_51 = ((unsigned short) ((short) arr_45 [i_0] [i_8]));
                }
                arr_61 [i_0] [i_0] [i_8] [i_14] = ((/* implicit */long long int) ((min((arr_13 [i_0] [i_0]), (arr_13 [i_0] [i_0]))) ? (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)43286)) && (((/* implicit */_Bool) (unsigned short)14714))))) << (((((((/* implicit */_Bool) 491440567U)) ? (((/* implicit */int) arr_10 [i_0] [i_8] [i_8] [i_14])) : (var_9))) - (18))))) : ((~(arr_57 [i_14 - 1] [i_8] [i_14] [i_8] [i_0 + 1] [i_0])))));
            }
            for (int i_20 = 3; i_20 < 10; i_20 += 3) 
            {
                var_52 = ((long long int) ((((/* implicit */int) arr_54 [i_20] [i_0 + 1] [i_20 + 1] [i_20])) << (((/* implicit */int) (_Bool)0))));
                var_53 = ((/* implicit */_Bool) 2098118239);
                var_54 = ((/* implicit */int) min((var_54), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_0] [(_Bool)1] [i_0] [i_0 - 1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) arr_20 [i_0] [i_8] [i_8])) + (((/* implicit */int) arr_63 [i_0] [i_8] [i_20] [i_0]))))))) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (var_13) : (arr_50 [i_0 + 1])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_21 = 0; i_21 < 13; i_21 += 4) 
                {
                    var_55 = ((long long int) arr_60 [i_0] [i_0] [i_0] [i_0 - 1] [i_20 + 1] [i_21] [i_21]);
                    var_56 = ((((/* implicit */_Bool) (+(-6954905126616561073LL)))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))));
                }
                for (int i_22 = 0; i_22 < 13; i_22 += 4) 
                {
                    var_57 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6700))) : (var_10)))))) ? (((arr_8 [i_0] [i_8] [i_20 + 3] [i_22]) - (arr_8 [i_20] [i_0] [i_20 - 2] [i_22]))) : (-3840419505405134139LL)));
                    arr_69 [i_0] [i_20 - 2] [i_20] [i_20] = ((/* implicit */signed char) var_4);
                    var_58 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-(-9079367512889611007LL)))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) arr_21 [i_0 + 1] [i_8])) & (var_9)))))) : (((((/* implicit */_Bool) arr_44 [i_8])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_45 [(unsigned char)5] [i_22]))))) : (((unsigned int) var_11))))));
                }
                var_59 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */short) ((var_4) != (((/* implicit */unsigned int) arr_52 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]))))), ((short)-12643))))));
            }
            var_60 = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36030))) : (arr_50 [i_8]))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        }
        /* vectorizable */
        for (unsigned int i_23 = 0; i_23 < 13; i_23 += 1) 
        {
            var_61 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_55 [i_0] [i_0]) : (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) var_11)))))));
            /* LoopSeq 3 */
            for (long long int i_24 = 0; i_24 < 13; i_24 += 2) /* same iter space */
            {
                var_62 = ((/* implicit */int) (~(((((/* implicit */_Bool) 997925631038232038LL)) ? (((/* implicit */long long int) var_13)) : (var_11)))));
                var_63 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) && ((!(((/* implicit */_Bool) arr_23 [i_23] [i_24]))))));
            }
            for (long long int i_25 = 0; i_25 < 13; i_25 += 2) /* same iter space */
            {
                var_64 = ((/* implicit */long long int) min((var_64), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)60899)) == (((/* implicit */int) var_0)))) ? (((/* implicit */int) arr_16 [i_0] [i_0 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) -369692416))))))))));
                var_65 = ((/* implicit */long long int) arr_14 [i_0] [i_0] [i_25] [i_0]);
                var_66 = -1779260984610616496LL;
            }
            for (long long int i_26 = 0; i_26 < 13; i_26 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_27 = 4; i_27 < 12; i_27 += 1) 
                {
                    arr_84 [(unsigned short)3] [i_23] [i_26] [i_23] = ((/* implicit */int) 2156270496U);
                    var_67 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-29172)) + (2147483647))) << (((var_5) - (4216437885U)))))) ? (((541459752U) << (((493810634) - (493810612))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(_Bool)0] [i_23] [i_0 - 1] [i_27 + 1])))));
                    var_68 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0 - 1] [i_27 - 3]))) + (2342715317U)));
                }
                for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) 
                {
                    var_69 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)62499)) + (arr_34 [i_23] [i_23] [i_23] [i_28])))) + (var_4)));
                    arr_88 [i_0] [i_23] [i_26] [i_0] = ((/* implicit */signed char) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) != (2706432014U)))));
                }
                arr_89 [i_0] [i_26] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3363371426U)) ? (arr_37 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]) : (((((/* implicit */_Bool) arr_11 [i_26] [i_26] [i_26] [i_0] [i_26] [i_23])) ? (((/* implicit */int) var_0)) : (1298639370)))));
                /* LoopSeq 1 */
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    var_70 = ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
                    var_71 = ((/* implicit */int) ((unsigned int) arr_35 [i_26] [i_23] [i_0 - 1]));
                    var_72 = ((/* implicit */unsigned int) ((((arr_43 [i_0] [i_23] [i_29]) + (2147483647))) << (((/* implicit */int) ((((/* implicit */long long int) arr_92 [i_0] [i_23] [i_26] [i_29])) == (-3278646168933565149LL))))));
                }
            }
            /* LoopNest 2 */
            for (unsigned short i_30 = 0; i_30 < 13; i_30 += 3) 
            {
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    {
                        var_73 = ((/* implicit */unsigned int) var_2);
                        var_74 = ((/* implicit */int) ((((/* implicit */_Bool) arr_80 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1])) ? (var_11) : (arr_80 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1])));
                        var_75 = ((/* implicit */long long int) min((var_75), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_66 [i_0] [10] [(_Bool)0] [10])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-347430810) : (((/* implicit */int) var_14))))))))));
                    }
                } 
            } 
            var_76 = ((/* implicit */long long int) var_2);
            /* LoopNest 2 */
            for (long long int i_32 = 0; i_32 < 13; i_32 += 2) 
            {
                for (long long int i_33 = 2; i_33 < 12; i_33 += 1) 
                {
                    {
                        var_77 = ((((/* implicit */_Bool) arr_40 [i_0 - 1] [i_33 - 1] [i_33 + 1] [i_33] [i_33])) ? (((/* implicit */int) ((unsigned short) var_12))) : (var_9));
                        /* LoopSeq 1 */
                        for (unsigned int i_34 = 3; i_34 < 10; i_34 += 1) 
                        {
                            var_78 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_32] [i_23] [i_23] [i_23] [i_23] [i_23])) ? (((/* implicit */long long int) (-(var_7)))) : (arr_90 [i_0] [i_23] [i_0] [i_33] [i_33] [i_34])));
                            var_79 = ((/* implicit */unsigned short) var_6);
                            var_80 = ((/* implicit */unsigned int) min((var_80), (var_4)));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_35 = 0; i_35 < 13; i_35 += 2) 
                        {
                            var_81 = (-(((/* implicit */int) ((unsigned char) var_10))));
                            var_82 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_7)));
                            var_83 = ((/* implicit */unsigned short) var_11);
                        }
                        for (short i_36 = 0; i_36 < 13; i_36 += 4) 
                        {
                            var_84 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8601741990626425904LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_96 [i_0] [i_0] [i_32] [i_32] [i_33] [i_0]))))) ? (((/* implicit */long long int) arr_102 [i_0 + 1])) : (((((/* implicit */_Bool) -8160389591227378908LL)) ? (arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (var_6)))));
                            var_85 = arr_82 [i_23] [i_0 + 1] [i_33 - 2] [i_33 - 1];
                            var_86 &= ((/* implicit */int) ((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        }
                        for (long long int i_37 = 0; i_37 < 13; i_37 += 4) 
                        {
                            var_87 = ((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_103 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_33 - 2]))));
                            var_88 = ((/* implicit */signed char) var_1);
                            var_89 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (-7429863639793423193LL))));
                            arr_117 [i_37] = ((/* implicit */unsigned int) arr_91 [i_0 - 1] [i_23] [i_33 + 1] [i_33 - 2]);
                            arr_118 [i_0] [i_23] [i_23] [i_32] [i_33] [i_37] = var_11;
                        }
                    }
                } 
            } 
        }
        for (int i_38 = 3; i_38 < 11; i_38 += 2) 
        {
            arr_122 [i_0] [i_38] &= ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
            arr_123 [1] = (~((+((+(arr_36 [i_0] [i_0] [i_0] [i_0]))))));
            var_90 ^= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_78 [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((-7429863639793423193LL) == (((/* implicit */long long int) ((/* implicit */int) arr_76 [i_38] [i_38])))))) : (max((1370085518), (var_9))))));
        }
    }
    var_91 += ((/* implicit */long long int) var_10);
    var_92 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (var_7)))) ? (var_11) : (((/* implicit */long long int) 421587482U))));
}
