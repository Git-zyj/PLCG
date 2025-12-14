/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229836
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
    var_18 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)50066)) ? (2367649240897252449LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15470)))));
        var_20 &= ((/* implicit */unsigned char) (-(((/* implicit */int) var_16))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((arr_1 [i_1]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 546133361119379147ULL)) ? (((/* implicit */int) (short)-7969)) : (((/* implicit */int) (short)23539))))) : (((((/* implicit */_Bool) (unsigned char)34)) ? (16284430320776413674ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7968)))))));
        arr_4 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */short) arr_0 [(short)5] [i_1])), (var_10)))), ((+(((/* implicit */int) arr_2 [i_1] [i_1 + 2]))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                {
                    var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_7 [i_4] [i_2 + 1]), ((unsigned char)237))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 4; i_5 < 15; i_5 += 3) /* same iter space */
                    {
                        arr_15 [i_4] = ((/* implicit */unsigned short) (~(-4351363994886912154LL)));
                        var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)18443)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned short)15495))));
                        var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19588)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)56778))))))))));
                        var_25 = ((/* implicit */short) (~(((/* implicit */int) arr_3 [7LL] [i_4]))));
                    }
                    for (unsigned short i_6 = 4; i_6 < 15; i_6 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (max((((/* implicit */long long int) var_15)), (arr_12 [i_2] [i_4] [i_4] [(unsigned short)7] [i_4])))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2 + 2] [i_3] [i_2 + 3] [i_2 + 2] [i_2])) ? (arr_12 [i_2 - 1] [i_3] [i_2 + 1] [i_2 + 1] [i_2]) : (arr_12 [i_2 + 3] [i_3] [i_2 + 2] [i_2 + 3] [i_2])))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)16)))))))));
                    }
                    for (unsigned short i_7 = 1; i_7 < 12; i_7 += 4) 
                    {
                        arr_22 [i_2] [(unsigned short)4] [(unsigned char)5] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_9 [i_2 + 1] [i_3])), (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (max((var_9), (((/* implicit */long long int) var_17))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            arr_25 [(short)2] [i_3] [(unsigned short)15] [i_7] [i_2] [7LL] [i_4] = max((arr_9 [i_2 + 2] [i_2 + 3]), (max((var_17), (arr_9 [i_2 + 2] [i_2 + 2]))));
                            arr_26 [i_2] [i_3] [i_2 - 1] [i_3] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)8768)) ? (((/* implicit */int) (short)-27533)) : (((/* implicit */int) (short)4))))))) ? (((((/* implicit */_Bool) -2367649240897252440LL)) ? ((+(12952273045524732913ULL))) : (((/* implicit */unsigned long long int) 5283414511708604003LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))));
                        }
                    }
                    arr_27 [i_4] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) max(((unsigned short)6761), ((unsigned short)27855))))));
                    arr_28 [i_4] [i_4] [i_3] [i_4] = ((/* implicit */_Bool) var_3);
                    arr_29 [i_4] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)11))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_33 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) var_11))))) ? (((((/* implicit */_Bool) (short)-17)) ? (-6285854919716280375LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))))) : (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_16 [i_2] [i_9] [i_2 + 2] [(short)0])) : (((/* implicit */int) arr_8 [i_2 + 2] [i_2])))), (((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) (short)-17)) : (((/* implicit */int) (unsigned short)1800))))))));
            var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) max((-7200103420827258841LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-17)) ? (((/* implicit */int) (unsigned short)24)) : (((/* implicit */int) (unsigned char)103))))))))));
        }
        var_29 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2 + 2] [i_2 - 1])) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (70368743915520LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-27478))))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (max((((/* implicit */unsigned long long int) var_13)), (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)224)) ? (-7250428574779126462LL) : (((/* implicit */long long int) ((/* implicit */int) (short)4597))))))));
        var_30 = ((/* implicit */unsigned char) var_16);
    }
}
