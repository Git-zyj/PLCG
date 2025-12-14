/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193017
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
    for (signed char i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        var_16 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (arr_0 [i_0 + 3])))) ? (((/* implicit */unsigned long long int) arr_0 [i_0 - 2])) : (((unsigned long long int) arr_2 [i_0]))))));
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) (short)-23647)))) / (((arr_0 [i_1]) << (((((((/* implicit */int) arr_8 [i_1] [i_2] [i_3])) + (28906))) - (8)))))))) ? (((/* implicit */int) (unsigned char)250)) : (max((((/* implicit */int) var_7)), (var_2)))));
                        arr_12 [i_0] [i_0 + 1] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)205)) >> (((/* implicit */int) ((((/* implicit */int) (short)-23647)) < (((/* implicit */int) (signed char)-27)))))))));
                        arr_13 [i_0] [i_0] [i_1 + 2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) (short)7688))))) ? ((-(((/* implicit */int) arr_5 [i_0] [i_1 - 1])))) : (((/* implicit */int) (short)0)))), (((/* implicit */int) (unsigned char)6))));
                    }
                } 
            } 
            arr_14 [i_0] [i_1] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_2) : (((/* implicit */int) (short)6918))))), (arr_7 [i_0] [i_0] [i_0 - 4] [i_1])))));
        }
        for (short i_4 = 2; i_4 < 21; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 2; i_5 < 24; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    for (signed char i_7 = 2; i_7 < 24; i_7 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (unsigned char)0))))) ? (((int) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (11580609792815873698ULL)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0])) ? (11580609792815873700ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) (short)-6792)) ? (((/* implicit */int) arr_21 [i_7] [i_6] [i_5] [i_4] [i_0 - 4])) : (((/* implicit */int) (short)-19)))) : ((+(((/* implicit */int) var_9))))))));
                            var_19 ^= ((/* implicit */int) arr_21 [i_0 + 2] [i_4] [i_5] [i_6] [i_7]);
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) min((max((((arr_7 [i_0] [i_4] [i_4] [i_5 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_18 [i_0]))))))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_4])) ? (((/* implicit */int) (unsigned char)0)) : (3)))))));
            }
            arr_27 [i_4] [i_0] = ((/* implicit */signed char) 0);
            arr_28 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((arr_0 [i_4 + 3]) / (arr_0 [i_4 - 1])))) ^ ((~(0ULL)))));
        }
        for (int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            arr_33 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)13969)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))) < (((((/* implicit */_Bool) arr_22 [i_8] [i_0] [i_0 - 4] [i_8])) ? (((/* implicit */unsigned long long int) arr_22 [i_8] [i_0 - 3] [i_0] [i_8])) : (var_13)))));
            /* LoopSeq 1 */
            for (unsigned char i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((1524708901566765472ULL), (((/* implicit */unsigned long long int) arr_19 [i_0 + 4]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)6))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 1; i_10 < 24; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 4; i_11 < 23; i_11 += 2) 
                    {
                        {
                            var_22 *= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 6866134280893677915ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)48))))) ? (min((((/* implicit */unsigned long long int) var_6)), (7645734395290287735ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165))))), (((/* implicit */unsigned long long int) arr_32 [i_0])));
                            arr_40 [i_0] [i_8] [i_0] = ((/* implicit */unsigned long long int) -1181329659);
                            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_8])) + (((/* implicit */int) ((((/* implicit */int) arr_6 [i_9])) != (((/* implicit */int) (unsigned char)90))))))))));
                            arr_41 [i_0 + 3] [i_8] [i_9] [i_10] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-5)) & ((((+(((/* implicit */int) var_9)))) ^ (((/* implicit */int) min(((short)10324), ((short)-23647))))))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)199)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 25; i_12 += 1) 
                {
                    var_25 = ((((/* implicit */_Bool) max((((((/* implicit */int) (short)23646)) & (((/* implicit */int) (unsigned char)43)))), (((/* implicit */int) (short)5266))))) ? (arr_9 [i_0 - 2] [i_8] [i_9] [i_12]) : (((/* implicit */unsigned long long int) (+(-2036548474)))));
                    arr_44 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_13)))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_3))))) : (((/* implicit */int) ((14887573100534819552ULL) != (arr_2 [i_9]))))))) ? (arr_9 [i_0 + 3] [i_0] [i_0] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)11)))))));
                    arr_45 [i_12] [i_8] [i_8] = ((((/* implicit */_Bool) var_11)) ? (1181329633) : (((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) (unsigned char)252)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        arr_48 [20ULL] [i_8] [i_9] [i_12] [i_13] &= ((/* implicit */int) (+(max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102))) : (3ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_13])))))))));
                        arr_49 [i_13] [i_8] [i_9] [i_8] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((-1216230219) != (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned char)246))))))) * (((((/* implicit */_Bool) min((var_15), (((/* implicit */short) arr_5 [i_8] [i_9]))))) ? (((((/* implicit */int) (signed char)28)) * (((/* implicit */int) var_14)))) : (((/* implicit */int) min((((/* implicit */short) arr_24 [i_0] [i_8] [i_13] [i_12] [i_8] [i_9] [i_9])), ((short)-14310))))))));
                        var_26 = ((/* implicit */short) var_10);
                    }
                    /* LoopSeq 4 */
                    for (unsigned char i_14 = 4; i_14 < 24; i_14 += 1) 
                    {
                        arr_52 [i_0] [i_8] [i_9] [i_12] [i_14] [i_8] = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) arr_24 [i_14 - 2] [i_8] [i_9] [i_12] [i_8] [i_0] [i_8])) * (((/* implicit */int) (short)27)))));
                        var_27 += ((/* implicit */short) ((((/* implicit */_Bool) (-(18446744073709551614ULL)))) && (((/* implicit */_Bool) (+(11120831773254694745ULL))))));
                        arr_53 [i_0] [i_8] [i_8] [i_12] [i_14] = ((/* implicit */unsigned char) var_8);
                        arr_54 [i_0] [i_8] [i_8] [i_8] [i_12] [i_12] [i_14 - 1] = ((/* implicit */unsigned char) (~(min(((-(((/* implicit */int) (short)-11428)))), (max((((/* implicit */int) (unsigned char)250)), (arr_0 [i_14])))))));
                        var_28 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26660)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) (unsigned char)250))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18658))) : (23ULL))), (((/* implicit */unsigned long long int) (unsigned char)249))));
                    }
                    for (short i_15 = 0; i_15 < 25; i_15 += 1) 
                    {
                        arr_58 [i_0 - 1] [i_15] [i_8] [i_12] [i_12] [i_0] [i_12] = ((/* implicit */signed char) ((int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (unsigned char)76))))), (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (7325912300454856854ULL))))));
                        arr_59 [i_0] [i_8] [i_9] [i_9] [i_8] [i_12] [i_15] = ((((/* implicit */_Bool) var_8)) ? ((~(0))) : (((((/* implicit */int) ((((/* implicit */_Bool) -2060864827)) || (((/* implicit */_Bool) var_13))))) & (((/* implicit */int) (unsigned char)159)))));
                        var_29 ^= ((/* implicit */signed char) 18446744073709551612ULL);
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)126)) * (((/* implicit */int) (short)2411))));
                    }
                    for (int i_16 = 1; i_16 < 22; i_16 += 2) 
                    {
                        arr_64 [i_0] [i_8] [i_8] [i_12] [i_16] = ((/* implicit */int) (unsigned char)172);
                        arr_65 [i_0] [i_8] [i_8] [i_12] [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_0] [i_8] [i_9] [i_12] [i_16]))) / (18446744073709551597ULL)))) ? (0ULL) : (23ULL))))));
                        var_31 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-709))));
                        arr_66 [i_8] [i_9] = ((/* implicit */signed char) ((unsigned long long int) 3ULL));
                    }
                    for (short i_17 = 0; i_17 < 25; i_17 += 1) 
                    {
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) ((18446744073709551600ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27868)))))) ? (((((/* implicit */_Bool) arr_6 [i_12])) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) % (((/* implicit */int) (short)-2411))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */int) (short)5651)) : (((/* implicit */int) max(((unsigned char)98), (((/* implicit */unsigned char) var_9)))))))))))));
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (unsigned char)159))));
                        arr_71 [i_8] [i_9] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15)))))));
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_67 [i_8] [i_8]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_0 + 2] [i_8] [i_0 - 2] [i_12])) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 - 4] [i_0 + 3] [i_0 - 1])))))));
                        var_35 = ((/* implicit */signed char) arr_9 [i_0] [i_8] [i_9] [i_12]);
                    }
                }
            }
            arr_72 [i_0] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_32 [i_0 + 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_8])) ? (0) : (((/* implicit */int) (unsigned char)150))))))) ? (((/* implicit */int) ((short) max((var_7), (((/* implicit */short) (unsigned char)248)))))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) var_10)))))))));
        }
        arr_73 [i_0] &= ((/* implicit */unsigned long long int) max(((-(arr_38 [i_0 + 4] [i_0 + 4] [i_0] [i_0 - 3] [i_0]))), (((/* implicit */int) arr_3 [i_0] [i_0]))));
        arr_74 [i_0] [i_0 + 3] = ((/* implicit */unsigned char) ((short) 6));
    }
    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned char)92), (((/* implicit */unsigned char) ((signed char) 9)))))) || (((/* implicit */_Bool) max(((~(((/* implicit */int) var_5)))), (((/* implicit */int) var_7)))))));
    var_37 = ((/* implicit */int) ((var_13) + (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-2541)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (unsigned char)183)))), (((/* implicit */int) min((((/* implicit */short) (signed char)3)), (var_15)))))))));
}
