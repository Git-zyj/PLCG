/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40406
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))) : (arr_0 [i_1]))) - (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))));
                var_15 = ((/* implicit */int) max((max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_0])), (var_0)))), (min((((/* implicit */long long int) arr_0 [i_0])), (var_13))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)4876)) != (((/* implicit */int) (_Bool)1)))))) * (min((530856789U), (arr_0 [i_1]))))))));
                var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) var_12)) <= (max((((/* implicit */long long int) var_1)), (var_5))))))));
                var_17 = ((/* implicit */unsigned long long int) ((max((530856789U), (((/* implicit */unsigned int) max(((_Bool)1), (var_6)))))) % (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)98)))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 2; i_5 < 14; i_5 += 4) 
                {
                    {
                        arr_16 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((min((var_5), (((/* implicit */long long int) var_9)))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)223)))))))))) > ((+(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) - (arr_7 [i_5])))))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)17)), (var_11)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_2] [i_5 + 1] [i_5 - 2]))) & (((arr_2 [i_3]) ? (var_5) : (((/* implicit */long long int) var_8)))))) : (((/* implicit */long long int) var_3))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_2])) >= (((/* implicit */int) arr_4 [i_2]))))) | (((((/* implicit */int) arr_4 [i_2])) & (((/* implicit */int) arr_4 [i_2]))))));
    }
    for (signed char i_6 = 2; i_6 < 18; i_6 += 1) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 575161399U))))) != (1940877354)))) & (((/* implicit */int) arr_1 [i_6 - 1]))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)127)))), ((short)-1)))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (1306332055) : (((/* implicit */int) var_2)))))))));
    }
    for (long long int i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_10 = 1; i_10 < 18; i_10 += 3) 
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)17)) & (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7]))) : (((long long int) 694605612)))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_10 + 1])) >> (((unsigned long long int) arr_21 [i_10]))))))))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)60654)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (unsigned short)21766))));
                }
                for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    arr_35 [i_7] [i_7] [i_11] [i_7] = ((/* implicit */unsigned int) (unsigned short)7860);
                    var_24 = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)61)), (((((/* implicit */int) arr_24 [i_8] [i_8] [i_8])) | (min((arr_30 [i_11] [i_9] [i_8] [i_7]), (((/* implicit */int) var_1))))))));
                }
                /* LoopNest 2 */
                for (short i_12 = 2; i_12 < 16; i_12 += 2) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) ((int) ((arr_27 [i_12 - 1] [i_12 - 1] [i_12 + 1]) <= (arr_27 [i_12 - 1] [i_12 + 1] [i_12 + 3]))));
                            var_26 = ((/* implicit */long long int) max((min((((/* implicit */int) arr_24 [i_12 - 1] [i_12 + 3] [i_12 + 3])), ((~(((/* implicit */int) var_4)))))), (((((/* implicit */int) (unsigned char)61)) >> (((((/* implicit */int) (unsigned char)195)) - (186)))))));
                            var_27 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) max((arr_29 [i_12 - 2] [i_12 + 2] [i_12 - 2] [i_12 + 2] [i_12 + 3]), (arr_29 [i_12 - 2] [i_12 - 2] [i_12] [i_12 - 2] [i_12 + 3]))))));
                            var_28 = ((/* implicit */unsigned int) var_11);
                            var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_7] [i_7] [i_13])))))));
                        }
                    } 
                } 
            }
            var_30 ^= ((/* implicit */unsigned char) var_11);
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((var_8), (((/* implicit */unsigned int) var_10)))) >> (((arr_31 [i_7] [0LL] [i_7] [i_7]) + (270451796)))))) ? (((/* implicit */unsigned long long int) var_0)) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_7] [(short)12] [(short)12] [(short)12] [i_8])) || (((/* implicit */_Bool) var_1))))), (min((((/* implicit */unsigned long long int) arr_1 [i_7])), (arr_38 [i_8] [i_7])))))));
        }
        var_32 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) arr_2 [i_7])) < (((arr_33 [i_7] [2] [i_7] [i_7] [i_7] [i_7]) | (((/* implicit */int) arr_28 [(_Bool)1] [(_Bool)1]))))))), ((+(((/* implicit */int) arr_3 [i_7] [i_7] [i_7]))))));
        /* LoopNest 2 */
        for (signed char i_14 = 1; i_14 < 19; i_14 += 1) 
        {
            for (long long int i_15 = 0; i_15 < 20; i_15 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_16 = 2; i_16 < 19; i_16 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) var_9)), ((~(var_12))))) ^ (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_44 [i_7] [(unsigned char)5] [i_7])) ? (((/* implicit */int) arr_28 [i_14 - 1] [i_14 - 1])) : (((/* implicit */int) (unsigned char)236)))), (((/* implicit */int) max((arr_36 [i_14 - 1] [i_14] [i_14]), (var_9)))))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_17 = 4; i_17 < 18; i_17 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)41504)), (((arr_49 [i_7] [i_7] [i_15] [i_16] [(unsigned short)14]) ? (((/* implicit */int) (short)20728)) : (((/* implicit */int) var_6))))))) <= (min((arr_50 [i_14] [(_Bool)1] [i_16 + 1] [i_17] [i_17 - 3] [i_17 - 4] [i_17 - 4]), (((/* implicit */unsigned long long int) arr_31 [i_16] [i_16] [i_16 + 1] [i_16]))))));
                            var_35 = ((/* implicit */signed char) min((((arr_34 [i_17 + 1] [i_17 + 1] [i_17 - 4] [i_17 + 1] [i_16]) + (arr_34 [i_17 + 1] [i_17] [i_17 - 3] [i_17] [i_17]))), (((/* implicit */int) ((_Bool) arr_34 [i_17 + 1] [i_17] [i_17 - 1] [i_17] [i_16])))));
                        }
                        for (unsigned long long int i_18 = 1; i_18 < 17; i_18 += 2) 
                        {
                            arr_54 [i_7] [i_14] [i_15] [(_Bool)1] [i_7] [i_18 - 1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_10))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_36 [i_15] [i_16 - 2] [i_18])), (var_12))))))) == (((((((/* implicit */int) (signed char)-90)) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57669)))))))));
                            arr_55 [i_7] [i_7] [(_Bool)1] [i_16] [i_18] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_34 [i_7] [i_14 - 1] [i_15] [(unsigned char)4] [i_16])), ((-(max((((/* implicit */unsigned int) (unsigned char)194)), (2821700634U)))))));
                            var_36 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 4294967295ULL)))) || ((!(((/* implicit */_Bool) (unsigned short)2178))))));
                            var_37 = ((/* implicit */_Bool) (+(max((max((((/* implicit */long long int) 0)), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) var_9))))));
                        }
                        for (unsigned short i_19 = 0; i_19 < 20; i_19 += 1) 
                        {
                            var_38 &= ((/* implicit */long long int) (-(((/* implicit */int) (short)32767))));
                            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19))) <= (530856779U))))));
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((((/* implicit */int) (unsigned char)106)) >> (((((/* implicit */int) (signed char)-68)) + (71)))))));
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_41 = ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) arr_33 [i_7] [i_16] [i_14 + 1] [i_15] [i_16] [i_20])))) ? (arr_33 [i_14 - 1] [i_16] [i_14] [i_14 - 1] [i_14 + 1] [i_14 + 1]) : (((/* implicit */int) ((unsigned short) (_Bool)1))))), (((((/* implicit */_Bool) -7LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                            var_42 += ((((/* implicit */_Bool) arr_44 [i_15] [i_14 - 1] [i_15])) && (((/* implicit */_Bool) max((arr_44 [i_20] [i_16 - 1] [i_7]), (arr_44 [i_16] [i_16 - 2] [(signed char)7])))));
                        }
                    }
                    for (long long int i_21 = 2; i_21 < 19; i_21 += 4) /* same iter space */
                    {
                        var_43 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_7] [i_14] [i_21 - 1] [i_21] [i_21 + 1])) ? (arr_43 [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)84)))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-109)) & (var_7))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_15]))) <= (-5953736190424956538LL))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (arr_0 [i_21])))) ? ((~(var_11))) : (min((arr_20 [i_7]), (((/* implicit */long long int) var_10)))))));
                        var_44 |= ((/* implicit */short) (+(max((((/* implicit */long long int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)57627)))), (min((((/* implicit */long long int) var_9)), (arr_20 [i_7])))))));
                        var_45 = ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_32 [i_14 - 1] [i_14 - 1] [i_14 + 1]), (arr_32 [i_7] [i_7] [i_15]))))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_22 = 1; i_22 < 18; i_22 += 1) 
                    {
                        var_46 = arr_57 [i_7] [i_22 - 1] [i_22 + 1] [2U] [i_15] [i_14 + 1] [2U];
                        /* LoopSeq 2 */
                        for (int i_23 = 0; i_23 < 20; i_23 += 3) 
                        {
                            arr_69 [(signed char)17] [i_15] [i_7] &= ((/* implicit */_Bool) (unsigned short)32512);
                            var_47 = var_7;
                            var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_3 [i_14] [i_15] [i_22])))) < ((+(var_3)))))), (((((/* implicit */_Bool) 192U)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)80))) > (-1LL)))) : (((/* implicit */int) (_Bool)1)))))))));
                            var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_49 [i_22 - 1] [i_22 - 1] [16LL] [i_22 - 1] [16LL])) : (((/* implicit */int) arr_39 [i_22 + 1] [i_22 - 1] [i_22 + 2] [2U] [i_22 - 1] [i_22 + 2] [(signed char)18]))))) ? (min((var_8), (((/* implicit */unsigned int) arr_49 [i_22 - 1] [i_22 - 1] [i_22 + 1] [i_22] [i_22 + 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_22 + 1] [i_22 + 1] [(_Bool)1] [i_22 + 1] [i_22] [i_22] [(_Bool)1])))))))));
                        }
                        for (signed char i_24 = 1; i_24 < 19; i_24 += 1) 
                        {
                            var_50 = ((/* implicit */unsigned char) var_5);
                            arr_74 [i_24] [i_7] [i_22] [i_15] [i_15] [i_14] [i_7] = ((/* implicit */_Bool) 289325412U);
                            var_51 = arr_58 [i_7] [i_7];
                        }
                    }
                    /* vectorizable */
                    for (signed char i_25 = 0; i_25 < 20; i_25 += 2) /* same iter space */
                    {
                        var_52 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_7] [i_14] [i_7]))));
                        var_53 = ((/* implicit */unsigned int) var_2);
                        var_54 = (unsigned char)20;
                    }
                    /* vectorizable */
                    for (signed char i_26 = 0; i_26 < 20; i_26 += 2) /* same iter space */
                    {
                        var_55 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (arr_79 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14] [i_14 - 1]) : (((/* implicit */long long int) var_3))));
                        var_56 = ((/* implicit */unsigned char) ((arr_23 [i_15]) != (((/* implicit */int) arr_57 [i_7] [i_14 + 1] [i_14] [i_14] [i_14 + 1] [i_14 + 1] [i_14 + 1]))));
                    }
                }
            } 
        } 
        var_57 = ((/* implicit */_Bool) max((((var_0) * (((var_8) >> (((arr_20 [i_7]) + (8391530744728427765LL))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
        var_58 = max((min((((/* implicit */signed char) (_Bool)1)), ((signed char)-102))), (var_1));
    }
    for (long long int i_27 = 0; i_27 < 20; i_27 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_28 = 0; i_28 < 20; i_28 += 2) 
        {
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_30 = 0; i_30 < 20; i_30 += 3) 
                    {
                        for (signed char i_31 = 2; i_31 < 17; i_31 += 2) 
                        {
                            {
                                var_59 = ((/* implicit */int) ((((/* implicit */_Bool) 5LL)) ? (-5953736190424956538LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)84)))));
                                arr_98 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28] = ((/* implicit */signed char) (+(((long long int) min((((/* implicit */long long int) var_10)), (var_5))))));
                                var_60 |= ((/* implicit */unsigned char) (((((~(-5953736190424956522LL))) & (((1LL) >> (((var_5) - (4976516478663980174LL))))))) + (((long long int) -5505916249222389584LL))));
                                var_61 -= ((/* implicit */_Bool) ((short) ((((5953736190424956529LL) > (((/* implicit */long long int) ((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_44 [i_31 + 1] [i_31 + 1] [i_31 + 3])) : (arr_56 [i_29]))));
                            }
                        } 
                    } 
                    var_62 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-102)), (max((var_13), (var_13)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_27]))) : (max((arr_46 [i_27] [i_29]), (((/* implicit */unsigned int) (_Bool)1))))));
                    var_63 = ((/* implicit */int) ((((/* implicit */long long int) (~(591291783)))) * (((min((arr_26 [i_28] [i_28] [i_28] [i_27]), (((/* implicit */long long int) var_8)))) & (arr_61 [i_27] [i_28])))));
                }
            } 
        } 
        var_64 = ((/* implicit */long long int) min((var_64), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_27]))) | (arr_93 [i_27] [i_27])))))));
        var_65 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_27] [i_27])))))), (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) ^ (arr_89 [i_27] [i_27] [i_27]))))));
    }
}
