/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41616
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
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (unsigned short)48719))));
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)16817)))))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) max(((~((-(var_2))))), (((/* implicit */unsigned long long int) ((short) (unsigned short)39887)))));
                var_14 -= ((/* implicit */signed char) max((min((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)16822)))), (((/* implicit */int) (unsigned short)39887)))), ((+(((/* implicit */int) (unsigned char)236))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_1 [i_2]))));
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */int) arr_7 [i_2])) << (((((/* implicit */int) arr_8 [i_2] [i_3])) - (38500))))))));
            arr_11 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_4))) ? (((var_7) / (((/* implicit */unsigned int) 869388490)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2])))));
        }
        /* LoopSeq 4 */
        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            arr_15 [i_4] [i_4] [i_4] = ((/* implicit */int) arr_13 [i_2] [i_2] [i_4]);
            arr_16 [i_4] = ((/* implicit */short) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_4]))))), (max((((/* implicit */unsigned int) (-(arr_10 [i_2])))), (arr_3 [i_2])))));
            arr_17 [i_4] [4ULL] [i_4] = ((/* implicit */unsigned long long int) ((unsigned char) arr_12 [i_4] [i_4]));
        }
        for (short i_5 = 1; i_5 < 7; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_6 = 1; i_6 < 8; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    var_17 += ((/* implicit */unsigned long long int) ((short) ((int) arr_0 [i_2])));
                    arr_25 [i_2] [2U] [i_2] [i_2] [i_5] = max((((/* implicit */long long int) max((arr_7 [i_5 - 1]), (arr_7 [i_5 - 1])))), (((((/* implicit */_Bool) (~(arr_3 [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5 + 4] [i_5 - 1] [i_5 + 4] [i_5 + 4]))) : (min((((/* implicit */long long int) arr_12 [i_2] [i_5 + 2])), (arr_22 [6LL] [(_Bool)0] [i_6] [6LL]))))));
                    var_18 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (+(var_3)))))));
                }
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_8] [i_5 + 3] [i_6 + 1] [(unsigned char)8])) ? (((/* implicit */long long int) arr_0 [i_5 - 1])) : (((((/* implicit */long long int) arr_21 [(_Bool)1] [(_Bool)1] [i_6 - 1] [i_8])) ^ (arr_22 [i_2] [i_5] [i_2] [i_8])))));
                    /* LoopSeq 1 */
                    for (long long int i_9 = 2; i_9 < 9; i_9 += 4) 
                    {
                        arr_32 [i_2] [i_6] [i_6] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40))) : (arr_29 [(signed char)5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) (unsigned char)243)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16816)))))));
                        arr_33 [6U] = ((/* implicit */signed char) ((-1926663636) | (((/* implicit */int) (short)17560))));
                        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_19 [i_2] [i_5]) / (((/* implicit */long long int) arr_29 [i_5]))))) ? (((/* implicit */long long int) (-(var_10)))) : (arr_22 [i_2] [i_2] [i_6 + 1] [i_9 - 1])));
                        var_21 = ((/* implicit */unsigned int) 0ULL);
                        var_22 = ((signed char) arr_14 [i_5 + 2] [i_2] [i_9 - 2]);
                    }
                }
                var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)48730)) / (-941355372))), ((+(((/* implicit */int) var_4))))))) ? (max((((/* implicit */unsigned int) (unsigned short)65527)), (1731563781U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_21 [i_6] [i_5] [i_5 + 4] [i_2]))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) arr_14 [i_2] [i_2] [i_2]))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)8)) >= (((/* implicit */int) (signed char)3))))))))));
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    arr_36 [i_2] [(_Bool)1] [i_5] [i_10] [i_10] = ((/* implicit */signed char) arr_13 [i_5] [i_6] [i_10]);
                    var_24 = ((/* implicit */short) arr_21 [i_2] [i_5 - 1] [i_6] [i_10]);
                }
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_40 [i_2] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned short) arr_2 [i_2] [i_5 + 2] [i_2])), (arr_8 [i_2] [i_5]))), (((/* implicit */unsigned short) ((_Bool) arr_2 [(unsigned char)20] [i_5] [i_11])))));
                var_25 += ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) var_5)), ((~(arr_3 [(signed char)2])))))));
            }
            arr_41 [(short)4] [(short)4] = ((/* implicit */long long int) var_1);
            var_26 = ((/* implicit */long long int) arr_10 [(_Bool)1]);
            arr_42 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)48719)) || (((/* implicit */_Bool) arr_19 [i_5 + 2] [i_5 + 3]))))) : (((/* implicit */int) arr_37 [i_2] [i_2]))));
        }
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 11; i_12 += 1) 
        {
            arr_45 [i_12] = ((/* implicit */signed char) (unsigned short)12);
            /* LoopSeq 2 */
            for (signed char i_13 = 3; i_13 < 10; i_13 += 4) 
            {
                arr_48 [i_13] [i_12] [i_13] [i_13 - 1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2]))))) | (((((/* implicit */_Bool) arr_34 [i_2] [i_12] [i_13] [(_Bool)1])) ? (((/* implicit */int) var_6)) : (arr_21 [i_2] [i_2] [i_2] [i_2])))));
                arr_49 [i_13] [(unsigned char)4] [i_13 - 2] [i_13] = ((/* implicit */signed char) (unsigned short)26579);
                /* LoopSeq 3 */
                for (int i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    arr_52 [i_2] [i_12] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((arr_19 [i_12] [i_13 + 1]) != (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_13 - 1] [i_14])))));
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (unsigned char)182))));
                    var_28 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_28 [i_13 - 2] [i_13 - 2] [i_13 - 3] [(_Bool)1] [i_13 - 2] [(signed char)4]))));
                }
                for (short i_15 = 2; i_15 < 10; i_15 += 1) 
                {
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [(short)3] [i_13 - 3] [i_13 - 3] [i_15 + 1])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65522)))));
                    arr_57 [i_2] [i_13] [i_13] [i_2] = ((/* implicit */unsigned char) (-(arr_38 [(_Bool)1])));
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((long long int) (short)8176)))));
                }
                for (unsigned short i_16 = 1; i_16 < 8; i_16 += 1) 
                {
                    arr_60 [i_13] [i_13] [i_12] [i_13] [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65531))))) ? (((((/* implicit */int) var_5)) ^ (((/* implicit */int) (unsigned short)17431)))) : (((/* implicit */int) arr_46 [10U] [i_12] [i_13 - 1] [i_16]))));
                    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) var_2))));
                    var_32 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_50 [i_12])) + (2147483647))) >> (((((/* implicit */int) var_6)) - (23724)))));
                    var_33 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_59 [(short)8] [i_2] [i_13])) && (((/* implicit */_Bool) (short)-17570)))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 11; i_17 += 4) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [(short)9] [(short)9] [i_13] [i_13] [i_17] [i_17])) ? (var_2) : (((/* implicit */unsigned long long int) arr_51 [i_2] [i_2] [i_2] [i_2] [i_2]))))) ? ((-(arr_3 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_13 - 1] [i_12] [i_13]))))))));
                            arr_65 [i_2] [i_2] [i_13] [i_13] [i_13] [i_18] = ((/* implicit */unsigned char) arr_19 [i_2] [i_18]);
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)17548)) - (((/* implicit */int) ((775570275U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)23365))))))));
                            arr_66 [i_2] [i_2] [i_2] [i_2] [i_13] [i_2] [i_2] = ((/* implicit */unsigned int) arr_4 [i_2]);
                        }
                    } 
                } 
            }
            for (unsigned char i_19 = 0; i_19 < 11; i_19 += 4) 
            {
                var_36 = ((/* implicit */unsigned short) min((var_36), ((unsigned short)12)));
                arr_70 [i_12] [(short)2] [i_19] = ((/* implicit */unsigned long long int) arr_3 [i_12]);
                var_37 -= ((/* implicit */unsigned int) ((_Bool) arr_0 [i_12]));
            }
            arr_71 [i_2] [(short)7] [i_12] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (unsigned short)16817))) ? (((unsigned int) arr_50 [i_2])) : (((/* implicit */unsigned int) (-(arr_10 [i_12]))))));
            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) 6LL))));
        }
        for (int i_20 = 3; i_20 < 10; i_20 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (unsigned char i_22 = 1; i_22 < 10; i_22 += 1) 
                {
                    {
                        arr_81 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) arr_2 [i_2] [i_2] [i_2]);
                        var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((long long int) ((long long int) arr_13 [i_2] [i_2] [i_20 - 3]))))));
                    }
                } 
            } 
            arr_82 [i_2] [8] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) arr_51 [i_2] [i_2] [i_2] [i_20 - 2] [i_2])))));
        }
    }
    for (long long int i_23 = 0; i_23 < 20; i_23 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_24 = 0; i_24 < 20; i_24 += 4) 
        {
            for (unsigned char i_25 = 0; i_25 < 20; i_25 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        arr_92 [i_23] [i_23] [i_26] [0ULL] = ((/* implicit */unsigned int) arr_85 [19ULL]);
                        var_40 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (short)8159)), (((((/* implicit */_Bool) arr_88 [i_23] [i_23] [i_26])) ? (1146113005U) : (((/* implicit */unsigned int) arr_88 [i_25] [i_25] [i_25]))))));
                        var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((((/* implicit */int) arr_86 [i_24] [i_25] [i_26])) - (79)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-8177))) != (var_7)))) : (((((/* implicit */_Bool) arr_91 [i_23] [i_23] [i_23] [i_25] [i_26])) ? (((/* implicit */int) arr_86 [i_23] [i_24] [i_25])) : (((/* implicit */int) arr_86 [i_23] [i_25] [i_26]))))));
                    }
                    var_42 = ((/* implicit */unsigned char) var_8);
                }
            } 
        } 
        arr_93 [3] [i_23] = ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (unsigned short)48114)) : (((/* implicit */int) (unsigned short)5)));
        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65511)) ? (((/* implicit */int) (short)17569)) : (((/* implicit */int) (unsigned short)37318))))) ? ((~((~(arr_88 [i_23] [i_23] [17U]))))) : (((/* implicit */int) max((arr_83 [i_23]), (arr_83 [i_23]))))));
    }
    var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (-((~(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (short)-17569))))))))))));
    var_45 = ((/* implicit */_Bool) (-(63)));
}
