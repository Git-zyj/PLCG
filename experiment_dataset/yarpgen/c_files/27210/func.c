/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27210
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
    var_12 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_6)), (min((((/* implicit */long long int) (_Bool)1)), (var_9)))));
    var_13 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))), (max((1216095992), (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) (+(((((/* implicit */int) var_10)) + (1216095992)))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                var_15 = ((/* implicit */long long int) (+(arr_7 [i_0 + 1] [i_0 + 1] [i_2 + 3] [i_2 + 3])));
                var_16 |= ((/* implicit */unsigned short) ((arr_3 [i_0 - 2] [i_2 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                var_17 = ((((/* implicit */_Bool) 1216095984)) || ((_Bool)1));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) arr_9 [i_0 + 2] [i_0 + 1] [i_0 + 1]);
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [7] [7])) ? (1216095992) : (((((/* implicit */_Bool) 1216095992)) ? (((/* implicit */int) var_4)) : (-1216095993)))));
                        }
                    } 
                } 
            }
            for (short i_6 = 3; i_6 < 9; i_6 += 3) 
            {
                var_20 -= ((/* implicit */_Bool) ((arr_14 [i_0 + 2]) ? (((/* implicit */long long int) (-(((/* implicit */int) var_7))))) : (((arr_11 [i_0] [i_0 - 1] [i_1] [i_6]) ? (arr_3 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 9; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        {
                            arr_25 [i_0] [i_6] [i_7] [2ULL] = ((/* implicit */long long int) ((263882790666240ULL) << (((-1955876912) + (1955876951)))));
                            arr_26 [(short)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2663870233U)) ? (((unsigned long long int) 9223372036854775807LL)) : (((((/* implicit */_Bool) var_2)) ? (arr_8 [i_0 - 2] [i_0] [i_0 - 2]) : (((/* implicit */unsigned long long int) -6552393933224008959LL))))));
                        }
                    } 
                } 
                arr_27 [i_0] [i_1] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-76))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (6552393933224008959LL));
            }
        }
        for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            var_22 = ((/* implicit */short) (~(6552393933224008980LL)));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((var_0) - (((-1955876912) * (((/* implicit */int) (_Bool)1)))))))));
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    var_24 = ((/* implicit */_Bool) var_0);
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 1; i_12 < 12; i_12 += 1) 
                    {
                        arr_40 [(unsigned char)2] [i_9] [i_10] [i_10] [(unsigned char)2] [i_0 + 2] |= ((/* implicit */signed char) arr_39 [i_0] [2LL] [12] [i_0] [i_12 - 1] [6LL] [i_12]);
                        var_25 |= ((/* implicit */_Bool) (-((~(((/* implicit */int) var_5))))));
                        arr_41 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_16 [i_0 - 2] [i_0 + 2] [i_0] [(signed char)7]))));
                        var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                    }
                    var_27 &= ((/* implicit */long long int) -1216095999);
                }
                var_28 = ((/* implicit */signed char) var_0);
            }
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) 355272921)) ? (1216096017) : (((/* implicit */int) (short)32767))));
            /* LoopSeq 2 */
            for (unsigned int i_13 = 2; i_13 < 12; i_13 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    arr_47 [i_0] [i_13] [i_13] [i_14] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32767))));
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        arr_50 [(unsigned short)8] [i_13] [i_13] [i_14] [i_15] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_34 [i_0 - 2] [i_9] [i_13 - 2])))))));
                        var_30 = ((/* implicit */long long int) ((((((/* implicit */int) var_8)) <= (((/* implicit */int) var_4)))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_23 [i_15] [i_15] [i_15] [i_14] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (3795626233U)))));
                    }
                    for (int i_16 = 3; i_16 < 12; i_16 += 1) 
                    {
                        arr_54 [i_13] = ((((/* implicit */_Bool) -1955876907)) ? (2147483647) : (((/* implicit */int) arr_44 [i_13 + 1] [i_13 + 1] [i_0 - 2] [i_13 + 1] [i_14])));
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (+(arr_43 [i_0] [i_9] [i_13] [(_Bool)1]))))));
                        arr_55 [i_9] [i_13] [i_13] [i_16] = ((/* implicit */short) arr_21 [i_0] [5LL] [i_13 + 1] [10U] [i_16]);
                        var_32 ^= ((/* implicit */signed char) (-((-(((/* implicit */int) (short)32767))))));
                        arr_56 [i_0] [i_0] [i_13 - 2] [i_13] = ((/* implicit */long long int) ((((/* implicit */int) (short)-22728)) <= (((/* implicit */int) var_11))));
                    }
                }
                arr_57 [i_9] [i_9] [i_13] = ((/* implicit */unsigned short) (~(1955876923)));
            }
            for (unsigned int i_17 = 2; i_17 < 12; i_17 += 1) /* same iter space */
            {
                var_33 &= ((/* implicit */short) var_9);
                /* LoopSeq 1 */
                for (short i_18 = 0; i_18 < 13; i_18 += 1) 
                {
                    var_34 = ((/* implicit */short) ((long long int) ((arr_32 [(_Bool)1] [i_17] [i_0]) / (arr_43 [i_0] [i_18] [i_17 - 2] [i_18]))));
                    /* LoopSeq 4 */
                    for (signed char i_19 = 1; i_19 < 11; i_19 += 4) 
                    {
                        arr_64 [i_18] [i_9] [i_17 + 1] [i_17] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) < (((/* implicit */int) var_7))));
                        var_35 = ((/* implicit */int) arr_21 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_36 += ((/* implicit */short) (((+(((/* implicit */int) arr_5 [i_0 - 1] [(_Bool)1])))) / (((/* implicit */int) var_5))));
                        arr_67 [i_0] [i_9] [i_17 - 1] [i_0 - 1] [i_9] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_9] [i_17])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)252))))) ? ((+(-1955876912))) : ((+(((/* implicit */int) var_2))))));
                    }
                    for (signed char i_21 = 0; i_21 < 13; i_21 += 1) 
                    {
                        arr_70 [i_21] [i_17] [i_17] [i_0] [i_21] [i_0] [i_18] = ((((((/* implicit */int) var_7)) + (((/* implicit */int) var_6)))) * (((/* implicit */int) var_6)));
                        var_37 = (+(((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2])));
                    }
                    for (unsigned short i_22 = 3; i_22 < 12; i_22 += 2) 
                    {
                        var_38 = ((/* implicit */long long int) arr_14 [i_0]);
                        arr_73 [i_0 + 2] [i_9] [i_17] [i_18] [i_22] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 9053521037072092447LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_22 - 3] [(unsigned short)4]))) : (67106816U))) / (arr_23 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_22 - 2] [i_22])));
                    }
                    var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_6))) ? (2097151U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)252)) - (((/* implicit */int) (signed char)11)))))));
                    arr_74 [i_0] [i_0] [i_0] [i_17] = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((/* implicit */int) arr_5 [i_17 + 1] [i_0 - 2]))));
                    /* LoopSeq 4 */
                    for (long long int i_23 = 2; i_23 < 11; i_23 += 4) 
                    {
                        arr_77 [i_23] [i_9] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_71 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 1])) ? (499341062U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        var_40 = ((/* implicit */unsigned short) arr_35 [i_0] [i_9] [i_17 + 1] [i_0]);
                    }
                    for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                    {
                        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_4)) ? (arr_23 [i_0] [i_9] [i_17] [9LL] [i_24]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_75 [5U] [i_9] [i_18]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                        var_42 = ((/* implicit */int) (((~(arr_7 [i_9] [i_17 + 1] [i_18] [i_24 + 1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0))))))));
                    }
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) var_0))));
                        var_44 += ((((/* implicit */int) arr_19 [12U] [i_9] [i_9] [i_18] [i_25])) & (((((/* implicit */int) var_2)) % (var_0))));
                        var_45 = ((/* implicit */short) (signed char)-9);
                    }
                    for (int i_26 = 0; i_26 < 13; i_26 += 2) 
                    {
                        arr_86 [3LL] [i_17] [i_17 + 1] [i_9] [i_0] [i_17] [i_0] = ((/* implicit */_Bool) ((arr_5 [(short)5] [i_9]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))));
                        arr_87 [i_0] [i_0] [i_26] [(unsigned short)10] [i_0] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)11))));
                        arr_88 [i_0] [i_0] [i_9] [i_17] [i_0] = ((/* implicit */signed char) var_1);
                    }
                }
            }
        }
        for (_Bool i_27 = 0; i_27 < 0; i_27 += 1) 
        {
            var_46 = ((/* implicit */int) var_5);
            var_47 -= ((/* implicit */unsigned short) -1216095993);
            arr_93 [i_27] = (_Bool)1;
            /* LoopSeq 1 */
            for (int i_28 = 0; i_28 < 13; i_28 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_29 = 1; i_29 < 12; i_29 += 2) 
                {
                    var_48 = ((/* implicit */signed char) ((long long int) (unsigned char)3));
                    arr_98 [i_0 + 2] [i_0 + 2] [i_27] [i_27] [i_27] = var_2;
                    arr_99 [i_0] [i_27] [i_28] [i_27] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_82 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_29 - 1] [i_0 - 2]))) : (var_3)));
                }
                var_49 = ((/* implicit */unsigned int) ((arr_12 [i_27] [i_27 + 1] [i_27] [i_27] [i_27]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(var_8))))));
                var_50 = ((/* implicit */signed char) var_8);
            }
        }
        for (long long int i_30 = 1; i_30 < 9; i_30 += 4) 
        {
            arr_102 [i_0 + 2] [i_0 + 2] [(signed char)11] = ((/* implicit */unsigned char) 7913964700127483373LL);
            var_51 += ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))));
        }
        var_52 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) | (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_7))))));
    }
    var_53 = ((/* implicit */long long int) (+((+((+(((/* implicit */int) var_6))))))));
}
