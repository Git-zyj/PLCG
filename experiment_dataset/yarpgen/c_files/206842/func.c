/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206842
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
    var_10 = (-((+(var_0))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
                {
                    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((13036045936622533333ULL) - (((/* implicit */unsigned long long int) -5133375840546833207LL))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_1] [i_1]))))) : (min((var_0), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0]))))))) ? (min(((~(var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5410698137087018279ULL)) && (((/* implicit */_Bool) 13036045936622533329ULL))))))) : ((-(((5347123351268801016ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))))))));
                    var_12 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-5076)) && (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) max(((short)21576), (((/* implicit */short) (unsigned char)65))))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
                {
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) arr_10 [i_0 - 2] [i_1] [i_1]))));
                    arr_11 [i_0] [i_1] [i_1] = arr_2 [i_0 + 1];
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_14 |= ((/* implicit */_Bool) arr_12 [0LL] [i_1] [(short)14] [i_4]);
                        arr_14 [i_0 + 2] [i_1] [i_0] [0LL] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-21576)) + (arr_1 [i_0 + 3])));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_0] [(short)13] = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_1] [i_0 + 3] [i_0 - 1]))));
                        arr_20 [i_0] [(short)12] [i_1] [i_1] = ((/* implicit */signed char) (-(-2958287318920673094LL)));
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)165)) ? ((-(13099620722440750583ULL))) : (((14339102638983071393ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_0 - 2] [i_0] [i_0 - 2] [i_1] [i_0] [i_0]))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (+(18446744073709551603ULL))))));
                            var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) (+(arr_3 [i_0] [i_0 - 2])))) ? ((~(-1523132945))) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 2] [i_0 - 2]))))));
                            arr_26 [i_0] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_7])))))));
                            arr_27 [i_1] [(unsigned short)4] = ((/* implicit */unsigned short) (((+(var_6))) >> (((var_6) - (1119551459)))));
                        }
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_3])))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)63))) : ((~(-8128015827643835243LL))))))));
                    }
                }
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
                {
                    arr_30 [i_0] [i_0 + 1] [1] [i_1] = ((/* implicit */signed char) ((unsigned int) (((!(((/* implicit */_Bool) (short)21578)))) ? (((var_9) / (((/* implicit */unsigned int) var_2)))) : (arr_12 [i_0] [i_0] [i_0] [(short)13]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        var_20 = ((/* implicit */int) (signed char)(-127 - 1));
                        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)3584)) ? (arr_4 [i_0] [i_9]) : ((-(((/* implicit */int) var_7))))));
                    }
                    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [i_1]))))), ((-(7485837533135359253ULL))))))));
                    var_23 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_25 [i_0] [14LL] [14LL] [i_1] [i_8])))) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((((/* implicit */int) arr_9 [i_0] [i_1] [i_8])) & (((/* implicit */int) (short)5083)))))))));
                    var_24 = ((/* implicit */signed char) (unsigned char)81);
                }
                for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
                {
                    arr_36 [i_1] [2U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (~(((/* implicit */int) arr_25 [i_0 + 3] [i_0 + 3] [i_0] [i_1] [(_Bool)1])))))) * ((~((-(((/* implicit */int) (unsigned char)71))))))));
                    arr_37 [(unsigned char)1] [i_1] [i_1] [i_1] = (short)-19819;
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_11 = 2; i_11 < 13; i_11 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_12 = 1; i_12 < 13; i_12 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned char) ((unsigned long long int) arr_16 [0U] [i_1] [i_11 - 1] [i_11 - 2]));
                        arr_44 [i_0] [i_0] [6ULL] [i_1] = ((/* implicit */unsigned long long int) (~(837577502U)));
                        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_11] [i_11] [i_12] [i_1] [i_12 + 2] [i_12]))));
                    }
                    for (unsigned int i_13 = 1; i_13 < 13; i_13 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6110778571044442387ULL)) ? (-6292437041124360945LL) : (((/* implicit */long long int) -419329638))))) && (((/* implicit */_Bool) (short)25529))));
                        arr_47 [i_0] [i_0] |= ((/* implicit */unsigned char) arr_4 [i_0] [i_13]);
                    }
                    for (unsigned int i_14 = 1; i_14 < 13; i_14 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 1; i_15 < 13; i_15 += 4) 
                        {
                            var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
                            arr_56 [i_1] [i_1] [i_1] [(short)4] [i_1] [i_14 + 1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_11 - 1] [i_11] [i_11 - 1] [i_1] [i_11 - 1] [i_11 - 2]))) | (((((/* implicit */_Bool) arr_51 [i_11] [i_11] [5] [i_1])) ? (arr_42 [i_15] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25101)))))));
                        }
                        arr_57 [i_0] [3LL] [i_1] [i_14] = ((/* implicit */unsigned int) arr_8 [i_14 + 1] [i_1]);
                        var_29 = ((/* implicit */long long int) max((var_29), ((((!(((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0] [i_11] [10LL])))) ? (arr_48 [i_11] [i_0 + 3] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_0] [i_0] [(unsigned char)5] [i_0] [(unsigned char)5] [i_0]))))))))));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */long long int) var_2)) == (arr_42 [i_0 - 2] [i_14 + 1]))))));
                        arr_58 [0ULL] [i_11] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((var_2) + (2012365038)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)63))));
                    }
                    arr_59 [i_0] [i_1] [i_1] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (short)-23700))));
                }
                var_31 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (_Bool)1))))) ? (((long long int) arr_24 [i_0] [i_0] [(signed char)6] [i_0] [i_1] [i_1])) : ((~(-2851819638641591164LL))))))));
                var_32 &= ((/* implicit */unsigned short) min((((((/* implicit */int) (!(((/* implicit */_Bool) 6800644944755591218LL))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)2] [i_0]))))))), (max((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_51 [i_0 + 2] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_24 [i_0] [i_0 + 1] [i_0] [i_0] [(signed char)10] [i_0 + 1])))), (((int) 6332395485614851356ULL))))));
                arr_60 [8U] [8U] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_0] [(signed char)9] [i_0] [i_1] [i_0] [i_1]))) : (((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64)))))))) ? (min((arr_33 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [(_Bool)1]), (arr_33 [i_0 + 3] [i_0 - 1] [i_0] [i_0 + 3] [i_0]))) : (((/* implicit */unsigned long long int) max(((~(arr_12 [i_0] [i_0 + 2] [i_0] [(unsigned char)10]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_1]))))))))));
            }
        } 
    } 
    var_33 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10)))))));
}
