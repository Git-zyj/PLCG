/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203227
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
    var_11 = ((/* implicit */unsigned int) (unsigned short)21970);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)16))) >= (min((((-1021267735334464345LL) - (((/* implicit */long long int) 0)))), (((/* implicit */long long int) arr_8 [i_0 - 2] [i_0] [i_0 - 1] [i_0 + 2]))))));
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */short) arr_2 [i_0]))))) ? (((/* implicit */int) var_9)) : ((+(0)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (var_0)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_0] [i_0 + 2] [i_0 - 3])) : (8))) : (((((/* implicit */_Bool) 262143ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))))) : ((-(((((/* implicit */_Bool) (short)-11119)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) -8))))))));
                }
                for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    arr_13 [i_1] [1U] [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        var_13 = ((/* implicit */short) ((((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) var_3)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) >= (var_0)))) : (((/* implicit */int) var_6))));
                        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_2))))));
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((short) arr_7 [i_3 + 1] [10U] [i_0 + 2] [i_4])))));
                            var_16 = ((/* implicit */long long int) arr_2 [i_0]);
                            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                        }
                        for (short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned int) (-(var_10)));
                            var_19 = ((((((/* implicit */_Bool) arr_15 [i_0 + 2] [i_0 + 2] [i_3] [i_4] [i_6])) || ((_Bool)1))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-9844)) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [(signed char)7] [i_4])))))));
                            arr_24 [i_0] [i_1 + 1] [(unsigned char)15] [i_4] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) arr_4 [i_1] [i_1 + 1] [i_1])) - (13853)))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) (short)-11119)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (var_10)))));
                            var_21 = ((/* implicit */long long int) arr_15 [i_0] [i_3 + 1] [3] [i_4] [i_4]);
                        }
                        arr_25 [i_0] [i_1 + 1] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)2)) + (((/* implicit */int) arr_4 [i_1 + 1] [(signed char)13] [i_3]))))) ? (((/* implicit */int) ((_Bool) arr_3 [i_0] [i_1 + 1] [i_3]))) : (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_4])) : (((/* implicit */int) arr_21 [i_0] [(unsigned char)13] [i_3] [i_0] [i_4]))))));
                        arr_26 [i_0] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_0] [i_1 + 1] [i_4])) ? (((/* implicit */int) arr_8 [i_4] [i_0] [i_1 + 1] [i_4])) : (((/* implicit */int) (unsigned char)196))));
                    }
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            arr_32 [i_0] [i_1] [(unsigned char)19] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)47)) <= (((/* implicit */int) var_7)))) ? (((((/* implicit */_Bool) arr_23 [i_0] [i_1 + 1] [i_3] [i_7] [(short)5] [i_0])) ? (arr_28 [i_7]) : (var_8))) : (((/* implicit */unsigned int) (((_Bool)1) ? (var_10) : (((/* implicit */int) var_5)))))));
                            arr_33 [i_0] [i_1 + 1] [i_3] [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_8])) : (var_10)));
                            var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_0 - 3] [i_1] [15U] [i_1 + 1] [i_3 + 2])) < (((/* implicit */int) arr_17 [i_0 - 2] [i_1] [i_1] [i_1 + 1] [i_3 + 3]))));
                        }
                        arr_34 [i_0] = ((/* implicit */unsigned char) ((((var_10) != (-2107720879))) ? (var_8) : (((/* implicit */unsigned int) max((((/* implicit */int) max((arr_21 [i_3] [i_1] [(unsigned char)9] [i_0] [i_0]), ((signed char)-120)))), ((-(((/* implicit */int) (unsigned short)34267)))))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (int i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            arr_41 [i_0] [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_9] [19U] = ((/* implicit */long long int) arr_22 [i_0 - 3] [19] [i_3] [i_9] [(short)5] [(short)5]);
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((unsigned char) (signed char)6)), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) arr_22 [16ULL] [i_1] [(_Bool)1] [(signed char)4] [(_Bool)1] [i_0 - 2]))))))))) / (((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (9223372036854775807LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 18; i_11 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_37 [i_9] [i_1] [(short)18] [(short)18] [(short)18] [i_11]))));
                            var_25 = ((/* implicit */unsigned long long int) arr_15 [i_0] [(short)3] [i_3] [i_9] [i_0]);
                            var_26 *= ((/* implicit */signed char) ((int) 16776704U));
                        }
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) 
                        {
                            arr_46 [i_0] [i_1] [i_12] [i_9] [i_9] [7U] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_0 - 3] [i_1 + 1] [i_3] [i_3 + 2]))));
                            arr_47 [i_0 + 1] [i_1] [i_3] [i_9] [i_0] = ((/* implicit */short) var_0);
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_12] [(_Bool)1]))));
                        }
                        for (long long int i_13 = 2; i_13 < 19; i_13 += 4) 
                        {
                            arr_51 [i_3] [i_1] [i_1] [i_0] [i_13 - 1] [i_13] = ((/* implicit */unsigned char) ((min((var_10), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (unsigned char)73))))))) + ((((+(((/* implicit */int) (unsigned char)178)))) & (((((var_10) + (2147483647))) >> (((var_10) + (2035357795)))))))));
                            var_28 = ((/* implicit */unsigned long long int) ((signed char) ((var_8) <= (((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_28 [i_0]))))));
                        }
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [(unsigned short)17] [i_0] [2] [2]))))) ? (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)87))) + ((-9223372036854775807LL - 1LL)))) >= (((/* implicit */long long int) 4278190592U))))) : (((/* implicit */int) var_6))));
                        var_30 *= ((/* implicit */unsigned char) min((var_10), ((-(((/* implicit */int) ((((/* implicit */int) arr_45 [i_0 - 3] [i_3] [i_3 + 3] [i_0 - 3] [i_0 - 3])) > (var_10))))))));
                    }
                    var_31 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (unsigned char)151))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1] [i_3] [(short)7])) ? (var_10) : (arr_35 [i_0] [(signed char)9] [i_0] [i_3] [i_3] [i_0 + 1]))))))) > (((/* implicit */int) (unsigned char)14))));
                }
                for (signed char i_14 = 0; i_14 < 21; i_14 += 1) 
                {
                    arr_54 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_14] [i_14])) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)137))) : (var_2)))), (max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 + 1] [i_1 + 1])), (4440371413940970087ULL)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 3; i_15 < 18; i_15 += 1) 
                    {
                        var_32 = ((/* implicit */short) (((+(((((/* implicit */int) (signed char)0)) * (((/* implicit */int) var_1)))))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [i_1 + 1])) || (((/* implicit */_Bool) var_10)))))));
                        arr_58 [i_0 - 2] [i_0] = ((/* implicit */signed char) min(((~(((var_8) / (((/* implicit */unsigned int) var_10)))))), (((/* implicit */unsigned int) arr_52 [i_0] [i_0] [i_0]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_16 = 0; i_16 < 21; i_16 += 3) /* same iter space */
                        {
                            arr_62 [i_0] [i_0] [i_1] [(short)1] [i_15 - 2] [(short)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_10)) + (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)52)) % (((/* implicit */int) arr_23 [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0 + 2] [i_0]))))) ? (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))))) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) * (-31))))))));
                            var_33 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_6))))) * (((((((/* implicit */unsigned int) var_10)) - (16776704U))) | (arr_28 [i_1])))));
                        }
                        for (unsigned short i_17 = 0; i_17 < 21; i_17 += 3) /* same iter space */
                        {
                            arr_65 [i_1] [i_0] = ((/* implicit */unsigned char) min((min((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (var_8))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)5)) <= (((/* implicit */int) arr_59 [i_0]))))))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_9)))))))));
                            arr_66 [i_0] [i_1] [i_14] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_7);
                            var_34 = ((/* implicit */long long int) (-(var_10)));
                        }
                        arr_67 [i_0] [i_0] [(signed char)4] [i_0] = ((/* implicit */short) 820603579U);
                        arr_68 [i_0] [i_1] [i_14] [i_15 - 3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)240))))))) * (((((((/* implicit */int) (unsigned short)22669)) <= (((/* implicit */int) (signed char)-12)))) ? (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_0] [i_15])) : (max((((/* implicit */long long int) (_Bool)1)), (var_0)))))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        arr_72 [i_0] [i_0] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((arr_0 [i_0]), (((/* implicit */unsigned int) (signed char)19))))) & (min((((/* implicit */long long int) arr_40 [i_0] [i_0 + 2] [i_0])), (max((((/* implicit */long long int) var_9)), (var_2)))))));
                        arr_73 [i_0] [4ULL] [i_1 + 1] [i_14] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) max((max((8856184670772970307LL), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) var_10))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_14] [(unsigned short)17])))));
                    }
                    var_35 = ((/* implicit */short) ((((/* implicit */int) ((short) (_Bool)1))) | (((/* implicit */int) var_4))));
                    arr_74 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_15 [i_0 - 2] [i_0] [i_0 - 1] [17] [i_1 + 1]);
                }
                var_36 = var_4;
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 1) 
    {
        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_56 [i_19] [(unsigned char)10] [i_19] [i_19]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_1)) ? (((unsigned int) var_5)) : (min((((/* implicit */unsigned int) var_7)), (arr_20 [1] [i_19] [i_19] [i_19] [i_19] [i_19])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_20 = 0; i_20 < 20; i_20 += 3) 
        {
            var_38 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_59 [(unsigned short)6])) ? (((/* implicit */int) arr_59 [4U])) : (((/* implicit */int) arr_59 [12ULL]))));
            var_39 = ((/* implicit */short) ((unsigned int) ((((arr_11 [i_19] [(short)14] [i_19]) + (9223372036854775807LL))) >> (((var_8) - (2453492440U))))));
        }
        for (unsigned char i_21 = 0; i_21 < 20; i_21 += 4) 
        {
            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)9075)) << (((((var_0) + (2226788670571301349LL))) - (21LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_22 [i_21] [i_21] [i_19] [i_19] [i_19] [i_19])))) : (((((/* implicit */_Bool) (short)511)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_80 [i_19])))))));
            arr_84 [i_19] [i_21] = max((((unsigned char) ((unsigned char) var_8))), (var_4));
        }
    }
    for (int i_22 = 0; i_22 < 21; i_22 += 2) 
    {
        /* LoopNest 2 */
        for (short i_23 = 0; i_23 < 21; i_23 += 3) 
        {
            for (unsigned long long int i_24 = 0; i_24 < 21; i_24 += 2) 
            {
                {
                    arr_93 [i_22] [i_23] [i_23] [i_24] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_4))))))), (((unsigned long long int) max((var_9), (var_1))))));
                    arr_94 [2] [i_22] [i_23] [i_24] = arr_27 [i_23] [i_23];
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_25 = 0; i_25 < 21; i_25 += 2) 
                    {
                        arr_98 [i_22] [i_23] [(short)10] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_2)))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-7719))) % (arr_57 [i_22] [i_22]))) : (var_0)));
                        var_41 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15476)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)12)))))) ? (((((/* implicit */_Bool) arr_15 [i_22] [i_22] [i_22] [i_22] [i_22])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_48 [i_22] [i_23] [i_23] [i_24] [i_22] [i_22]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (0) : (var_10)))));
                        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) 20))));
                    }
                    var_43 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_95 [i_22] [(unsigned char)9] [i_24] [i_24])) ? (16378931208217061862ULL) : (((/* implicit */unsigned long long int) arr_20 [i_24] [i_23] [i_24] [(signed char)9] [(signed char)9] [i_23]))))) || (((/* implicit */_Bool) ((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) (unsigned short)22668)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)12141)))))));
                    arr_99 [i_22] [i_22] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_39 [i_22] [i_23] [i_24] [i_24] [i_22] [i_24]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_39 [i_22] [i_22] [i_22] [i_23] [i_23] [i_22]))))) ? ((-(((/* implicit */int) arr_39 [(short)15] [i_24] [i_24] [i_24] [(short)5] [i_24])))) : (((arr_39 [i_23] [i_23] [i_24] [i_23] [i_23] [i_22]) ? (((/* implicit */int) arr_39 [i_22] [i_24] [i_24] [i_24] [i_22] [i_24])) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        var_44 = ((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)11))))) % (((((/* implicit */_Bool) (short)-11109)) ? (var_2) : (((/* implicit */long long int) arr_7 [i_22] [i_22] [i_22] [(short)8]))))))));
    }
    for (unsigned char i_26 = 3; i_26 < 18; i_26 += 3) /* same iter space */
    {
        arr_104 [i_26] = ((/* implicit */long long int) (+(min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_53 [i_26])) : (((/* implicit */int) var_9)))), (753229946)))));
        /* LoopNest 3 */
        for (unsigned int i_27 = 0; i_27 < 19; i_27 += 1) 
        {
            for (unsigned char i_28 = 1; i_28 < 18; i_28 += 1) 
            {
                for (unsigned char i_29 = 0; i_29 < 19; i_29 += 3) 
                {
                    {
                        var_45 = ((/* implicit */signed char) min((min((arr_88 [i_26 - 2] [i_28 - 1]), (arr_88 [i_26 + 1] [i_28 - 1]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_88 [i_26 - 2] [i_28 - 1])))))));
                        var_46 = ((/* implicit */unsigned char) arr_71 [i_27] [i_27] [i_27] [i_28]);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_30 = 3; i_30 < 18; i_30 += 3) /* same iter space */
    {
        arr_116 [i_30] [i_30] = ((/* implicit */unsigned long long int) (short)-32767);
        arr_117 [i_30] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) * (arr_85 [i_30])))) ? (((/* implicit */long long int) var_8)) : ((-9223372036854775807LL - 1LL)))) + (((/* implicit */long long int) ((/* implicit */int) (short)10956)))));
        var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) ((((/* implicit */int) var_7)) > (arr_44 [i_30 - 1] [i_30 - 3] [i_30 - 2] [i_30] [i_30]))))));
        arr_118 [i_30] [i_30] = ((/* implicit */short) var_9);
        var_48 = ((/* implicit */unsigned char) arr_31 [i_30] [i_30 - 3] [8ULL] [i_30] [(unsigned short)10]);
    }
    var_49 = ((/* implicit */short) 4);
}
