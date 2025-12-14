/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227465
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
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_10 *= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0 + 3] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 3] [i_0 + 1]))) : (4294967295U)))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_11 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_6))))) ? (arr_0 [i_0] [i_0 - 1]) : (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_8))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned char) (_Bool)1);
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_0 [i_0] [i_0])))) ? ((~(((/* implicit */int) arr_4 [13ULL] [i_1] [i_2])))) : (((((arr_0 [i_0] [i_3]) + (2147483647))) << (((/* implicit */int) arr_4 [i_3] [i_3] [i_3]))))));
                        arr_12 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) max((((((arr_3 [i_1]) + (9223372036854775807LL))) >> (((arr_3 [i_3]) + (9129837612436600332LL))))), (((/* implicit */long long int) (short)-23884))));
                    }
                    var_14 = ((/* implicit */_Bool) arr_5 [i_0 + 3] [i_0] [i_0 + 3] [i_0]);
                    var_15 = ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65509)))))) : (max((((/* implicit */unsigned long long int) var_5)), (var_4)))))));
                    var_16 = ((/* implicit */_Bool) arr_0 [i_0] [i_1]);
                }
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 20; i_4 += 4) 
                {
                    for (short i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_0] [i_0]))));
                            var_18 = ((/* implicit */int) min(((+(((arr_6 [i_0 + 2]) / (((/* implicit */unsigned long long int) var_0)))))), (((((/* implicit */_Bool) ((arr_8 [21] [i_1] [21] [i_5] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_0] [i_1])))) ? (((arr_13 [i_0] [i_1] [i_4] [i_5]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_4] [i_5]))))) : (arr_1 [i_0])))));
                            arr_17 [i_5] [i_4] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                            /* LoopSeq 1 */
                            for (unsigned int i_6 = 1; i_6 < 20; i_6 += 4) 
                            {
                                var_19 += ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_4 + 1])) : (((/* implicit */int) arr_9 [i_4 - 1]))));
                                arr_20 [i_0] [i_0] = (~(max((((/* implicit */long long int) arr_19 [i_0 - 4] [(_Bool)1] [(_Bool)1] [i_0])), (var_2))));
                            }
                            arr_21 [i_0 - 3] [i_1] [i_4 + 2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) : (arr_18 [i_5] [i_0] [i_4 - 1] [i_1] [i_0] [i_0])))) ? (((unsigned int) arr_9 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_6)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_9)) * (((/* implicit */int) var_9))))))), (var_4)));
    /* LoopSeq 1 */
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        arr_24 [13LL] [i_7] &= ((/* implicit */long long int) arr_6 [i_7]);
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            for (int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(((/* implicit */int) (signed char)14)))))));
                                var_22 += ((/* implicit */unsigned short) ((unsigned long long int) var_2));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_10 [i_8] [i_8] [i_8] [i_8] [i_11])), (9329995839067959970ULL))), (((/* implicit */unsigned long long int) (signed char)15))))) ? (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_11 [13ULL] [i_8] [i_9] [i_9])) ? (((/* implicit */int) arr_2 [i_8] [i_9] [i_8])) : (((/* implicit */int) (signed char)-2)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7] [i_9] [i_10])) ? (((/* implicit */int) (unsigned short)65522)) : (((/* implicit */int) var_6))))) ? (((((var_0) + (9223372036854775807LL))) << (((((/* implicit */int) var_8)) - (88))))) : (((/* implicit */long long int) ((int) var_9)))))));
                                var_24 &= arr_25 [i_7] [i_8] [i_9];
                                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) var_8))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 4) 
                    {
                        for (signed char i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            {
                                var_26 = min((((/* implicit */short) ((signed char) 493039963))), (min(((short)-23878), (((/* implicit */short) (_Bool)1)))));
                                arr_42 [i_13] [i_12 + 2] [i_8] [i_8] [i_8] [i_7] = ((/* implicit */int) (_Bool)1);
                                var_27 = ((/* implicit */unsigned int) var_2);
                            }
                        } 
                    } 
                    arr_43 [i_7] [i_8] [i_9] = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) arr_38 [i_7] [i_8] [i_9] [i_9] [i_8]))), (max((arr_22 [i_9]), (((/* implicit */int) var_1))))));
                    arr_44 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) 15498461208291429499ULL);
                }
            } 
        } 
        arr_45 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) var_9)))) ? (((/* implicit */int) ((arr_27 [i_7] [i_7] [i_7] [i_7]) > (arr_27 [i_7] [i_7] [i_7] [i_7])))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        /* LoopSeq 2 */
        for (short i_14 = 2; i_14 < 20; i_14 += 4) 
        {
            arr_48 [i_7] [i_14] [i_14 + 1] &= ((/* implicit */short) arr_28 [i_14 - 2]);
            var_28 = ((((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_31 [i_14 - 1] [i_14] [i_7] [i_14] [i_14] [i_14]))))) != (var_3));
            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_7] [0ULL] [i_7] [i_7])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_14])) ? (arr_10 [i_14] [i_7] [i_7] [i_14 - 2] [i_14]) : (((/* implicit */int) (_Bool)1))))) ? ((+(arr_13 [i_7] [i_7] [i_14 - 1] [i_14]))) : (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) arr_36 [i_7]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_7] [i_7])))));
        }
        for (signed char i_15 = 2; i_15 < 20; i_15 += 3) 
        {
            arr_53 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((-493039964), (((((/* implicit */_Bool) -997087396696515408LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_1))))))) == (((var_1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775796LL)) ? (((/* implicit */int) arr_40 [i_15 + 2] [i_15] [i_7] [i_15] [i_15])) : (((/* implicit */int) arr_31 [i_15] [i_15] [i_15] [i_15] [i_15] [(signed char)11]))))) : (max((var_2), (((/* implicit */long long int) arr_0 [i_15] [i_15 + 1]))))))));
            /* LoopSeq 2 */
            for (signed char i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 1) 
                {
                    var_30 &= ((/* implicit */signed char) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_17])) || (((/* implicit */_Bool) 134217728U))))), (((((/* implicit */_Bool) (signed char)-126)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_7] [8LL] [i_17]))))))) % (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-17157)) : (((/* implicit */int) var_6))))), (var_3)))));
                    arr_58 [i_7] [i_7] [i_15] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)125)) + (((/* implicit */int) (short)-32763))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_7] [i_15] [i_17] [i_17] [i_17])) ? (var_3) : (var_2)))) : (arr_37 [i_7] [i_7] [i_15 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(arr_50 [i_15] [i_15 + 2] [i_16])))) || (arr_4 [i_15] [i_15 - 1] [i_16])))) : (((/* implicit */int) ((_Bool) max((var_3), (var_2)))))));
                    var_31 &= ((_Bool) (-(((/* implicit */int) arr_35 [i_7] [i_15 - 2] [i_15] [(short)6] [i_15 - 2]))));
                }
                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (+(((/* implicit */int) arr_35 [i_7] [i_7] [i_16] [2] [i_15 + 2])))))));
            }
            for (unsigned int i_18 = 0; i_18 < 22; i_18 += 2) 
            {
                /* LoopSeq 3 */
                for (short i_19 = 0; i_19 < 22; i_19 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_68 [i_15] [i_15] = ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_66 [i_7] [i_15 - 1] [i_18] [i_19] [i_20])), (arr_56 [i_15] [i_15] [i_15 + 1])))) ? (((long long int) min((((/* implicit */long long int) arr_51 [i_7] [i_15 + 1] [i_15 + 1])), (var_7)))) : (((/* implicit */long long int) ((/* implicit */int) var_8))));
                        arr_69 [i_15] [i_15] [i_15] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_16 [i_7] [i_15] [i_15] [(unsigned short)16] [i_20]))))))) >= (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) - (var_4)))) ? (((/* implicit */unsigned long long int) ((var_7) - (var_2)))) : (max((144115185928372224ULL), (((/* implicit */unsigned long long int) arr_66 [i_7] [i_15] [i_18] [i_19] [i_20])))))));
                        var_33 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_8)))))))), (((((/* implicit */_Bool) ((int) arr_51 [i_7] [i_15] [i_18]))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) arr_32 [i_7] [i_15] [i_15] [i_15] [i_19] [i_19] [i_15])) ? (var_2) : (-997087396696515413LL)))))));
                    }
                    var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) max((((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_15 + 1] [i_18] [i_15 + 1]))))), (((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_9)))))))));
                }
                /* vectorizable */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    arr_73 [i_15] [i_18] [i_15] = (+(var_0));
                    var_35 = ((/* implicit */unsigned short) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 2147483630)))) : (var_4)));
                    var_36 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_62 [i_18] [i_18] [i_18] [i_18])) ^ (var_0)))) ? ((-(arr_13 [i_7] [i_15] [10ULL] [i_21]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_15 - 2] [i_15] [i_15 + 1] [i_15 - 1] [i_15 - 1])))));
                    var_37 = ((/* implicit */int) arr_52 [i_15 - 2] [i_15] [i_15]);
                }
                for (long long int i_22 = 0; i_22 < 22; i_22 += 1) 
                {
                    var_38 &= ((/* implicit */short) arr_41 [i_22] [i_18] [i_18] [i_15 - 2] [i_15 - 2] [i_18] [i_7]);
                    /* LoopSeq 1 */
                    for (signed char i_23 = 0; i_23 < 22; i_23 += 4) 
                    {
                        var_39 &= ((/* implicit */short) (-(min((var_2), (((/* implicit */long long int) ((arr_51 [i_7] [i_7] [i_22]) >> (((((/* implicit */int) var_8)) - (76))))))))));
                        var_40 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_70 [i_15 - 1] [i_15 + 1] [i_15 + 1] [i_15])) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_14 [i_23] [i_23])) + (2147483647))) >> (((var_7) + (4891959922260904437LL)))))) : (((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                        arr_79 [i_23] [i_15] [i_7] [i_18] [i_18] [i_15] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_50 [i_15] [i_22] [i_23])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16316))) ^ (arr_13 [i_23] [i_18] [i_15] [i_7]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_23 [i_22] [i_15 + 1])) : (((/* implicit */int) (unsigned short)34044)))))))) ? (var_4) : (((/* implicit */unsigned long long int) arr_28 [i_22]))));
                    }
                }
                arr_80 [i_7] [i_15] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)152))))) && (((/* implicit */_Bool) arr_64 [i_15] [i_15]))));
            }
            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((var_7), (((/* implicit */long long int) var_5)))) % (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_7] [i_15] [i_7]))) : (var_2)))))) ? ((~((+(arr_72 [i_7] [i_7] [i_7] [i_7] [i_15] [i_15]))))) : (arr_67 [i_15 + 1] [i_15 - 2] [i_15 - 1] [i_7])));
            /* LoopNest 2 */
            for (unsigned short i_24 = 4; i_24 < 21; i_24 += 3) 
            {
                for (int i_25 = 1; i_25 < 21; i_25 += 2) 
                {
                    {
                        arr_85 [i_15 + 1] [i_15 + 1] [i_15] [i_25 + 1] [i_7] [i_15] = ((/* implicit */long long int) (~(((int) 1158868414))));
                        var_42 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) var_0)) + (((arr_37 [i_7] [i_15] [i_15]) + (var_4))))), (((/* implicit */unsigned long long int) var_3))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            arr_90 [i_15] [i_25] [i_24] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_82 [i_25 - 1] [i_15 - 2] [i_24 - 2] [i_25]))) / (arr_89 [i_7] [i_15] [i_24] [i_25] [i_7] [i_7] [i_26])));
                            arr_91 [i_7] [i_15] [i_15] [i_25] [i_26] [i_15 + 2] [i_15] = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) arr_46 [i_25] [i_26])) : (((/* implicit */int) (signed char)126))))));
                        }
                        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) arr_32 [i_7] [i_7] [i_15] [i_7] [i_24] [i_24] [(unsigned short)4]))));
                        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (max((((var_1) ? (((/* implicit */int) arr_23 [i_15] [i_25 - 1])) : (((/* implicit */int) arr_36 [i_7])))), (((((/* implicit */_Bool) arr_0 [i_15] [i_15])) ? (((/* implicit */int) arr_19 [i_7] [i_15] [i_24 - 2] [i_15])) : (((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) arr_63 [i_7] [i_15] [i_25 + 1])) ? (((/* implicit */int) arr_63 [i_7] [i_15] [i_25 + 1])) : (((/* implicit */int) arr_63 [i_7] [i_15] [i_25 + 1]))))));
                    }
                } 
            } 
        }
    }
}
