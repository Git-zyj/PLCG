/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38960
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
    var_12 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((min((((18446744073709551598ULL) << (((((/* implicit */int) var_9)) + (98))))), (((/* implicit */unsigned long long int) arr_2 [8U])))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [14U])) ? (((/* implicit */int) ((signed char) arr_1 [(signed char)18] [(signed char)18]))) : (((/* implicit */int) arr_0 [i_0 + 1]))))))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (18446744073709551581ULL))))));
            var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) <= (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) <= (((/* implicit */int) var_3)))))))), (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0])))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_0] [i_1]) < (((/* implicit */long long int) ((/* implicit */int) var_9)))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) 1623580761)) && (((/* implicit */_Bool) arr_4 [(signed char)4] [i_0 + 2] [i_2 - 1])))))));
                var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (var_0)))) + (((/* implicit */int) arr_2 [(signed char)8]))))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 2; i_3 < 21; i_3 += 3) 
                {
                    for (short i_4 = 2; i_4 < 21; i_4 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_12 [i_1] [i_0]) : (((/* implicit */int) arr_11 [i_3] [i_3] [i_0] [i_1 + 4] [i_0]))))) ? (arr_5 [i_0] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) != (((/* implicit */int) var_6))))))));
                            var_18 = var_7;
                            arr_15 [12LL] [i_1] [i_4] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) (signed char)-60))));
                        }
                    } 
                } 
                var_19 += ((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_2 - 1] [i_2] [i_0]);
            }
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((unsigned int) var_7)))));
        }
        for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (short i_6 = 2; i_6 < 21; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_21 = ((/* implicit */signed char) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)61280)) : (((/* implicit */int) (short)(-32767 - 1))))));
                        var_22 = ((/* implicit */signed char) (+((((!(((/* implicit */_Bool) arr_18 [i_7])))) ? (var_0) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                        var_23 = ((/* implicit */int) max((max((((((/* implicit */_Bool) arr_16 [i_0])) ? (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0])) : (18446744073709551598ULL))), (((((/* implicit */_Bool) arr_13 [i_6])) ? (((/* implicit */unsigned long long int) arr_3 [i_5 + 1] [i_6 + 1] [i_6 + 1])) : (var_2))))), (((/* implicit */unsigned long long int) ((((var_10) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_9 [19LL] [i_5] [i_6] [i_6] [16LL])) ? (arr_19 [i_5] [i_0]) : (var_7))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0 + 1] [i_0 + 1] [i_6]))) >= (18446744073709551579ULL)))))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_17 [10ULL] [i_5]))));
        }
        for (unsigned int i_8 = 3; i_8 < 21; i_8 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_27 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0] [(short)2] [i_0 - 1] [i_0]))) : (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_3 [i_0] [i_8] [i_9]) : (((/* implicit */long long int) arr_19 [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_0 + 2] [i_0] [i_0]))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_18 [i_0])))))))))));
                /* LoopSeq 2 */
                for (short i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    arr_32 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (arr_21 [i_0 - 1] [i_0] [i_9] [i_0 + 1]) : (max((((/* implicit */int) var_1)), (arr_28 [i_0]))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)156)) <= (((/* implicit */int) (unsigned short)61280))))))) : (min((min((((/* implicit */unsigned long long int) arr_11 [2] [2] [i_8] [(signed char)6] [i_8])), (var_2))), (((/* implicit */unsigned long long int) arr_26 [i_0] [i_0 + 2] [i_0 + 2]))))));
                }
                for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((var_0) > (((((/* implicit */_Bool) arr_13 [i_12])) ? (((/* implicit */int) (signed char)32)) : (((((((/* implicit */int) arr_9 [i_12] [i_0] [i_9] [i_8] [i_0])) + (2147483647))) >> (((var_2) - (6596965854237343584ULL)))))))));
                        arr_37 [i_0] [i_8] [i_8] [i_8] [i_0] [i_12] [i_12] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) arr_29 [i_0])) ? (var_8) : (arr_18 [i_12]))) : (min((((/* implicit */unsigned long long int) var_1)), (arr_18 [i_0 - 1])))));
                        arr_38 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((arr_30 [i_11]), (((/* implicit */unsigned char) var_9))))) ? (((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_8 + 1] [i_8 + 1] [i_9] [i_11] [i_12]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_8] [i_0] [i_9] [i_12] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_9] [i_12]))) : (arr_29 [i_0])))))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_8 + 1] [i_8 - 1] [i_8])) || (((/* implicit */_Bool) arr_31 [i_8 - 2] [i_8 - 3] [i_8] [i_8 - 2] [i_8 - 2])))))));
                    }
                    var_27 += ((/* implicit */unsigned long long int) var_0);
                    arr_39 [i_8] [i_0] = ((/* implicit */_Bool) min(((+(arr_7 [i_0] [i_11]))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_19 [i_0] [i_0])))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        arr_44 [(_Bool)1] [i_8] [i_0] [i_11] [i_8 - 1] [i_9] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) var_0))))) ? (arr_40 [i_0] [i_0] [i_9] [i_11] [i_13]) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_19 [i_0] [i_0])), (arr_7 [i_0] [i_11])))))), (((/* implicit */long long int) arr_36 [i_0] [i_13] [i_13]))));
                        arr_45 [i_0 + 2] [i_0] [i_9] [i_11] [i_11] [i_11] [i_13] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)27262)) && (((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 1] [(unsigned short)1] [i_0])) % (((/* implicit */int) (signed char)-24))))))))));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */int) (short)27262)) << (((18446744073709551598ULL) - (18446744073709551590ULL))))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 3) 
                    {
                        arr_48 [i_0] [i_11] [i_0] [i_8] [i_0 + 2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_6)) + (arr_21 [i_14] [i_0] [i_0] [i_8])))));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) arr_17 [8LL] [8LL]))));
                        var_30 = ((/* implicit */int) var_8);
                        var_31 = ((((/* implicit */_Bool) arr_16 [i_0])) ? (arr_8 [i_0] [i_0 + 1] [i_8] [i_11] [i_14] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_0])))))));
                    }
                    for (unsigned char i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((arr_47 [i_15] [(short)14] [(short)14] [i_9] [i_15] [i_8] [i_8]) / (((/* implicit */unsigned long long int) arr_19 [i_8] [i_15]))))));
                        arr_52 [i_8] [i_8] [i_8] [i_8] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)64)) ? (4398046511103ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))))) - (var_2)));
                    }
                }
            }
            for (unsigned short i_16 = 3; i_16 < 20; i_16 += 1) 
            {
                var_33 = (-(((/* implicit */int) ((signed char) (signed char)-60))));
                /* LoopSeq 1 */
                for (signed char i_17 = 0; i_17 < 22; i_17 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        var_34 = ((/* implicit */short) ((unsigned int) arr_18 [i_0]));
                        arr_60 [i_0] [i_0] [i_8 - 3] [i_8 - 3] [i_0] [i_18] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_29 [i_0])) : (var_8)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_18 [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_16 [i_0]), (((/* implicit */unsigned short) arr_24 [i_0] [i_0] [i_0]))))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_19 = 0; i_19 < 22; i_19 += 3) 
                    {
                        arr_64 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551595ULL)) ? (arr_35 [i_17] [i_8] [i_8] [i_17] [i_8] [i_0] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_19] [i_0] [i_16 + 1] [i_0] [i_0])))))) <= (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0]))) : (arr_40 [i_16] [i_0] [i_16] [i_16] [i_16]))))))));
                        var_35 = ((/* implicit */unsigned int) (signed char)-10);
                    }
                    for (unsigned int i_20 = 3; i_20 < 21; i_20 += 1) 
                    {
                        var_36 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0])) ? (((((/* implicit */_Bool) (short)-5154)) ? (-5526077556634279860LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32763))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_9))))))))), (min((((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */int) var_6))))), (min((var_2), (var_10)))))));
                        var_37 = ((/* implicit */signed char) ((min(((!(((/* implicit */_Bool) (short)-22623)))), ((!(((/* implicit */_Bool) var_8)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_42 [i_20]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33763)))))) != (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109)))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16384))) == (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned long long int) var_7)))))))));
                        arr_68 [i_20] [i_17] [i_0] [i_16] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((short) var_6))) ? (((((/* implicit */_Bool) var_5)) ? (arr_58 [i_0] [i_20] [i_16 - 2] [i_16 - 2] [i_8 - 2]) : (arr_3 [(_Bool)1] [i_17] [i_8]))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-44))))))), (((/* implicit */long long int) (~(arr_62 [i_0 + 2] [i_0 + 2] [i_8 - 2] [i_8 - 2] [i_16 - 2] [i_20 - 1]))))));
                    }
                }
            }
            var_38 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_0)) || ((_Bool)1))) || ((!(((/* implicit */_Bool) (short)24576)))))) ? (((/* implicit */long long int) max((arr_62 [i_8 - 3] [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0]), (((/* implicit */int) ((unsigned short) var_5)))))) : (arr_40 [i_0] [i_0] [i_8 - 1] [i_8 - 1] [i_0])));
            arr_69 [i_0] = ((/* implicit */short) ((long long int) ((((((/* implicit */_Bool) arr_17 [i_0] [i_8])) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) min((((/* implicit */signed char) var_1)), (var_3)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_0 - 1] [19LL] [i_0 - 1])) && (((/* implicit */_Bool) arr_40 [i_0 + 1] [i_0] [i_0] [i_0] [i_8]))))))));
        }
        arr_70 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 1048575U))) ? (min((((/* implicit */unsigned long long int) arr_53 [i_0] [i_0] [i_0])), (var_2))) : (((/* implicit */unsigned long long int) (~(5526077556634279838LL))))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_66 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) arr_22 [i_0] [i_0])) ? (66584576U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) max((arr_49 [i_0] [2] [(unsigned short)20] [i_0] [i_0 - 1]), (arr_29 [i_0])))))))));
    }
    var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (var_1)));
    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)27251))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((18446744073709551570ULL) > (((/* implicit */unsigned long long int) 0U)))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6211))) : (2716013454U)))))) ? (var_2) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27244)) ? (((/* implicit */int) (signed char)-42)) : (var_4)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8))) : (((/* implicit */unsigned long long int) var_0))))));
}
