/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215925
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
    var_16 = ((/* implicit */short) var_10);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_17 |= ((/* implicit */unsigned short) max((((long long int) arr_0 [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-13))))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) ((((/* implicit */_Bool) 11799177166915840429ULL)) && (((/* implicit */_Bool) (unsigned short)20732))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) var_11);
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_12 [i_1] [i_1]);
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4 - 1] [i_2] |= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_1] [i_0] [i_4] [i_0] [i_4] [i_4] [i_4])) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3])))))))), (-3607526616899850358LL)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_10 [i_2] [i_1] [i_0]))));
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) % (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)56093)) ? (((/* implicit */int) (unsigned char)1)) : (arr_0 [i_0]))))))) ? (min((arr_8 [i_0] [i_0] [i_2] [i_2] [i_5]), (((/* implicit */unsigned long long int) var_2)))) : (arr_8 [i_1] [i_1] [i_2] [i_2] [i_2])));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 3; i_6 < 14; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */long long int) 4155212937U)) == (arr_5 [i_1])))), (((((/* implicit */_Bool) (unsigned char)255)) ? (2910891632U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16725)))))))) & (((((/* implicit */_Bool) (-(var_9)))) ? (((long long int) 16351404511133552552ULL)) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_12 [i_0] [i_1])) : (((/* implicit */int) var_11)))))))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4294967295U)), (arr_8 [i_0] [i_1] [i_2] [i_5] [i_6 - 1])))) ? ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_12 [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_10)) ? (arr_4 [i_6] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6 + 1] [i_1] [i_5] [i_2] [i_1] [i_0]))))))) : (((((/* implicit */_Bool) (signed char)86)) ? (139754334U) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-28562)) / (((/* implicit */int) (unsigned char)201)))))))));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (var_15)));
                        }
                        for (signed char i_7 = 4; i_7 < 13; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_0] [i_7 - 2] [i_1] [i_5])) / (((/* implicit */int) arr_20 [i_0] [i_7 - 2] [i_1] [i_5]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_7 - 2] [i_1] [i_5])) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (signed char)31))))) : (max((((/* implicit */unsigned int) arr_20 [i_5] [i_7 - 3] [i_1] [i_5])), (2003836623U)))));
                            arr_22 [i_1] [i_2] [i_1] [i_1] = var_15;
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((((((/* implicit */int) (short)511)) & (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_8])))) << (((((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0] [i_5])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_1] [i_0]))))) - (18446744073709551592ULL))))) == (((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_1] [i_1] [i_8] [i_8])))))));
                            var_26 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_0] [i_0]))))) ? (((/* implicit */long long int) -123302471)) : (arr_5 [i_8])))) ? (((((((/* implicit */_Bool) arr_5 [i_0])) ? (21U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) / (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)-1410))))));
                            var_27 = (i_1 % 2 == 0) ? (((/* implicit */short) ((((((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [i_2] [i_5] [i_8])) % (var_3))) << (((((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_5])) - (75)))))) : (((/* implicit */short) ((((((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [i_2] [i_5] [i_8])) % (var_3))) << (((((((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_5])) - (75))) - (91))))));
                        }
                        for (unsigned int i_9 = 1; i_9 < 13; i_9 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((unsigned char) ((long long int) ((((/* implicit */_Bool) 3607526616899850357LL)) ? (((/* implicit */unsigned long long int) 3607526616899850358LL)) : (16351404511133552552ULL)))));
                            arr_30 [i_0] [i_0] |= ((/* implicit */long long int) (unsigned char)245);
                        }
                        for (short i_10 = 1; i_10 < 11; i_10 += 3) 
                        {
                            arr_34 [i_1] [i_5] [i_10] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((((_Bool)0) ? (arr_16 [i_1] [i_1] [i_5] [i_1]) : (var_3))) >= (((/* implicit */unsigned long long int) ((3106426020U) * (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))) - (arr_29 [i_10] [i_5] [i_1] [i_0] [i_0])));
                            var_29 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (arr_5 [i_10 + 2]))) + (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_10 + 1]))))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) max(((unsigned char)255), (arr_1 [i_0]))))) & (((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (arr_9 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10]))))));
                            var_31 = ((/* implicit */unsigned char) var_0);
                        }
                    }
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [i_2])) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) arr_20 [10] [10] [i_1] [i_2])) : (((/* implicit */int) arr_31 [12U] [i_1] [i_0] [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_2] [i_1] [i_0] [i_0]))) : (var_4)))));
                    var_33 = ((/* implicit */short) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) -3607526616899850348LL)) : (((unsigned long long int) (short)-7925)))) <= (((/* implicit */unsigned long long int) max((((-303499559) ^ (((/* implicit */int) arr_18 [i_0] [i_1] [i_0] [i_2] [i_2] [i_2])))), (303499551))))));
                }
            } 
        } 
    }
    var_34 = ((/* implicit */short) 0U);
    var_35 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (var_10)))) ? (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) 80977715U)))) : ((+(var_3))))) == (((/* implicit */unsigned long long int) var_7))));
}
