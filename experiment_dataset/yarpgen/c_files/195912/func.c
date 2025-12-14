/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195912
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
    var_18 += ((/* implicit */int) ((short) var_6));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_19 = min((((/* implicit */unsigned long long int) var_1)), (min((((/* implicit */unsigned long long int) arr_7 [10ULL] [i_1] [i_2] [i_0])), (0ULL))));
                        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((signed char) arr_6 [i_3] [i_1] [i_2] [i_3] [i_3])))));
                        arr_8 [i_0] [i_0] [i_0] [i_2] [i_3] = max((((/* implicit */long long int) (-(arr_1 [i_0])))), (arr_2 [i_1]));
                        arr_9 [i_0] [i_1] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_0])) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((int) arr_1 [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30827))) * (var_11))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */unsigned int) min((((/* implicit */int) (short)-30821)), (arr_5 [i_0] [i_1] [i_0])))) & (max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2])))))))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 15; i_4 += 4) 
                    {
                        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) var_8))) * (((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) << (((((unsigned long long int) 9223372036854775807LL)) - (9223372036854775776ULL)))))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (unsigned char)26)), (var_10)))))) ? (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_2])) : (((((/* implicit */_Bool) arr_5 [i_4 - 1] [i_4 - 1] [(signed char)15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_4 + 1] [i_4 + 1] [(unsigned char)6]))) : (arr_6 [i_0] [i_0] [i_2] [i_2] [i_4 - 2])))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_12 [i_0] [i_2] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)30820)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48368))) : (arr_0 [i_0] [i_1])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) 708425967U)) : (18446744073709551613ULL)))));
                        var_25 = ((/* implicit */signed char) ((var_1) - (((/* implicit */int) (signed char)-105))));
                    }
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((signed char) (((!(((/* implicit */_Bool) (unsigned short)42555)))) || (((/* implicit */_Bool) (-(arr_2 [i_0]))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 12; i_6 += 1) 
                    {
                        for (int i_7 = 4; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_27 *= ((/* implicit */short) ((((((/* implicit */int) var_0)) != (((/* implicit */int) arr_7 [i_1] [i_6 + 3] [i_6] [(unsigned short)8])))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) min((arr_11 [(signed char)4] [i_1] [i_2] [i_2] [i_7 - 3]), (((/* implicit */unsigned short) (short)30802)))))));
                                arr_19 [i_0] [i_2] [i_6 + 1] [i_0] = ((/* implicit */_Bool) var_15);
                                var_28 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) (unsigned char)0))))) ? (((/* implicit */int) arr_7 [i_6 + 1] [(_Bool)1] [i_6 + 1] [4])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [(unsigned short)2]))) >= (arr_0 [i_0] [i_0]))))))), ((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) : (var_11)))))));
                                arr_20 [i_0] [i_1] [i_0] [i_6] [i_1] [(unsigned char)13] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    arr_23 [i_0] [9LL] [9LL] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)-30820)) : (((/* implicit */int) (short)30820)))));
                    arr_24 [i_0] [i_0] [i_0] = arr_4 [i_0];
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [(unsigned char)1])) ? (arr_3 [i_0] [i_1] [(unsigned short)14]) : (arr_3 [i_0] [i_1] [i_9])));
                    /* LoopSeq 3 */
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        var_30 = ((/* implicit */int) ((((/* implicit */unsigned int) -2112493033)) ^ (arr_31 [i_0] [i_1] [i_1] [(unsigned char)1])));
                        var_31 = ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_9] [i_0])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-17931))))) : (((unsigned long long int) arr_6 [i_0] [i_1] [i_9] [i_0] [(unsigned short)13])));
                        var_32 = ((/* implicit */_Bool) var_13);
                        arr_33 [14LL] [i_10] [(short)5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-94)) ? (((((/* implicit */_Bool) arr_29 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_14))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16128)))));
                    }
                    for (short i_11 = 2; i_11 < 14; i_11 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_0] [i_1] [i_9])) >= (var_14)))) + (arr_3 [i_11 + 2] [i_11 + 2] [2ULL])));
                        var_34 = ((/* implicit */short) (+(((((/* implicit */int) var_6)) ^ (((/* implicit */int) (_Bool)1))))));
                        var_35 *= ((/* implicit */unsigned char) (-(((int) -8706984940252016864LL))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned char) (short)-30814);
                            var_37 *= ((17130791398457946423ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68))));
                            arr_40 [i_0] = 1881749207;
                        }
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
                        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((long long int) arr_13 [14])))));
                        var_40 = ((/* implicit */signed char) ((short) arr_13 [i_0]));
                        arr_43 [i_0] [i_1] [i_9] [i_9] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_0])) ^ (-2112493033)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_2)))))));
                        arr_44 [i_0] [12U] [i_1] [i_9] [i_0] = ((/* implicit */unsigned short) (signed char)-98);
                    }
                    var_41 = ((unsigned short) (short)20);
                    var_42 = ((/* implicit */unsigned char) (signed char)27);
                }
                arr_45 [i_0] [i_0] [i_0] = (~(max((((/* implicit */unsigned long long int) 2)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL))))));
                arr_46 [i_0] = ((/* implicit */short) ((unsigned char) max((((/* implicit */long long int) arr_14 [i_0] [i_0])), (-9223372036854775801LL))));
            }
        } 
    } 
}
