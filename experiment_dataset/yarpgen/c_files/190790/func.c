/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190790
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    var_19 = ((/* implicit */short) ((max((((/* implicit */int) arr_3 [i_2 + 1] [i_2 - 1])), ((~(((/* implicit */int) (short)-24792)))))) - (((/* implicit */int) ((short) var_11)))));
                    var_20 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (9198342932440383902ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24792)))))))) ? (((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_3 [i_1] [(_Bool)1])))))) : (((/* implicit */int) (short)-24792))));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    var_21 = ((/* implicit */int) arr_3 [(signed char)17] [i_1]);
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (short)-24792)) ? (4294967295U) : (4228921572U)))));
                    var_23 = ((/* implicit */long long int) (signed char)-123);
                }
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 4; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */int) ((unsigned int) ((short) var_16)));
                                var_25 = ((/* implicit */signed char) var_11);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (short)4579)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -7031518868546232672LL)))))) : (max((6761806817330837476ULL), (((/* implicit */unsigned long long int) arr_6 [i_4]))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        arr_22 [i_0] [i_0] [i_1] [15] [i_7] = ((/* implicit */_Bool) (+((~(arr_2 [i_4])))));
                        arr_23 [(short)14] [i_1] [i_4] [i_4] [(short)12] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_17 [i_0] [i_1] [i_1] [i_7]) << (((arr_17 [i_0] [i_1] [i_0] [i_7]) - (783502848)))))) ? (((/* implicit */int) (short)24791)) : (((/* implicit */int) ((signed char) min((arr_9 [i_0] [i_4] [i_7]), (var_8)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_27 = max((7105447703180990778ULL), (((/* implicit */unsigned long long int) (unsigned char)143)));
                            var_28 = ((/* implicit */signed char) (~(arr_7 [i_0] [i_0])));
                        }
                        var_29 = ((/* implicit */int) max((var_29), ((((_Bool)0) ? ((((+(((/* implicit */int) var_3)))) * (((/* implicit */int) ((4267383704U) == (((/* implicit */unsigned int) 1073741824))))))) : (((/* implicit */int) ((arr_2 [i_0]) < (arr_2 [i_0]))))))));
                        var_30 *= ((/* implicit */short) min(((~(((/* implicit */int) (short)-1)))), (min((((/* implicit */int) (unsigned char)201)), (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_4])) ? (((/* implicit */int) (short)4558)) : (((/* implicit */int) arr_3 [i_1] [i_1]))))))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        arr_29 [i_4] [i_1] [i_4] = ((/* implicit */long long int) ((signed char) arr_1 [i_1]));
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (+(var_5)))) : (((unsigned long long int) arr_15 [i_0] [i_4] [i_0] [i_0] [(short)12])))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 4) 
                        {
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((unsigned char) var_9)))));
                            arr_33 [i_10] [i_9] [i_4] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [4] [4] [i_9] [(short)12] [i_1])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (unsigned short)45558)) : (((/* implicit */int) (!((_Bool)1))))));
                            var_33 = ((/* implicit */unsigned char) ((((arr_19 [i_0] [i_10]) << (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) - (30862))))) << (((((int) (unsigned short)45540)) - (45479)))));
                        }
                        var_34 = ((/* implicit */unsigned long long int) (signed char)-104);
                        var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)143))));
                    }
                }
                var_36 = ((/* implicit */short) arr_8 [i_1]);
                var_37 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) (unsigned short)45512)) ? (((/* implicit */int) arr_15 [i_1] [i_0] [i_0] [i_0] [i_0])) : (arr_28 [i_1] [i_1]))))) + (2147483647))) << (((((139043016) << (((((/* implicit */int) ((short) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]))) - (11224))))) - (278086032)))));
                arr_34 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_12 [0ULL] [i_1] [i_1] [0ULL])), (((unsigned long long int) (+(var_12))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
    {
        for (signed char i_12 = 1; i_12 < 8; i_12 += 4) 
        {
            {
                var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((_Bool) ((arr_18 [i_11] [(short)6] [i_12] [i_11] [i_11]) ? (((/* implicit */int) arr_18 [i_11] [4] [i_12] [i_12] [i_11])) : (var_5)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    arr_42 [i_12] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_24 [i_12 + 1] [i_12 + 2] [i_12 - 1] [i_12 + 1] [i_12 + 2]) : (arr_24 [i_12 + 2] [i_12 + 2] [i_12 + 1] [i_12 - 1] [i_12 + 1])));
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_12 + 2] [i_12 + 1])) && (((/* implicit */_Bool) var_7))));
                    var_40 = ((/* implicit */short) (((-(var_4))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
                    var_41 = ((/* implicit */int) max((var_41), (((((((/* implicit */int) arr_11 [i_12 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_11 [i_12 + 1])) + (111))) - (17)))))));
                }
                /* vectorizable */
                for (short i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    arr_45 [i_12] = ((/* implicit */short) arr_36 [i_12 - 1] [i_12 - 1]);
                    var_42 |= ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_11)) : (arr_10 [i_11] [i_11])))) || (((/* implicit */_Bool) 16980801904708778546ULL))));
                }
            }
        } 
    } 
    var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) var_10))));
}
