/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243416
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
    var_10 = ((/* implicit */unsigned int) max((min((((5439611137684928658ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))))), (max((((/* implicit */unsigned long long int) var_1)), (12513101800997820459ULL))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_2) : (var_5)))), (((((/* implicit */_Bool) var_6)) ? (var_6) : (1752594908400647133ULL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)26809)) * (((/* implicit */int) arr_1 [i_0] [i_1])))) / (((/* implicit */int) arr_0 [i_0]))));
                var_11 = ((((/* implicit */_Bool) ((unsigned short) ((unsigned char) arr_0 [i_0])))) ? (((unsigned long long int) min((((/* implicit */unsigned long long int) var_5)), (15556730406711658299ULL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_3 [i_1] [i_1] [i_1 + 1]) : (((/* implicit */unsigned long long int) 3199862417U))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) arr_1 [i_3 - 1] [i_3 - 2]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    var_13 = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_2]);
                    var_14 = ((/* implicit */short) arr_2 [i_3 - 1] [i_3 + 1]);
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned char) min((var_15), (arr_0 [i_2])));
                            var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)5808))));
                            arr_18 [i_2] = ((/* implicit */short) var_8);
                        }
                        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) 3199862424U);
                            arr_22 [i_3] = arr_5 [i_5];
                            arr_23 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 3172604152273127432ULL)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (short)-30092))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned int) arr_5 [i_2]);
                            arr_27 [i_5] [i_4] [i_3] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_0 [i_4])))) > (((/* implicit */int) arr_20 [i_2] [i_3] [i_4] [i_3 - 2] [i_8]))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) (-(arr_25 [i_3 + 1] [i_3] [i_9] [i_9] [i_9])));
                            arr_30 [9ULL] [i_3 - 1] [i_3 - 1] [i_2] [i_9] [i_9] [i_5] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) 1095104878U))) & (((/* implicit */int) var_1))));
                            var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_2 [i_2] [i_3])) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_4]))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_9 [7ULL] [9ULL] [i_9]) << (((((/* implicit */int) arr_16 [i_2] [11ULL])) - (235)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned char)2)))))) : (((((/* implicit */_Bool) arr_26 [i_9])) ? (17690103920360893274ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2] [i_3] [i_2] [i_5] [11ULL])))))));
                        }
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_3] [i_3])) < (((((/* implicit */int) (unsigned char)240)) & (((/* implicit */int) arr_6 [i_2] [i_3]))))));
                        var_22 = ((/* implicit */unsigned char) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199))) | (arr_9 [i_5] [i_5] [i_5]))));
                    }
                    for (short i_10 = 2; i_10 < 11; i_10 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1296227239U)) ? (arr_25 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 + 1] [i_10 + 2]) : (arr_25 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 + 1] [i_10 + 2])));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                        {
                            arr_37 [i_2] [i_3] [i_3] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((3033072713U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_4] [i_4]))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1095104883U)) > (8790094497312195012ULL)))))));
                            arr_38 [13ULL] [i_3] [i_3] [i_3] [i_3] = (~(arr_5 [i_3 - 1]));
                            var_24 = ((/* implicit */short) (~(arr_31 [i_10 - 2] [i_10] [i_10 - 2] [i_10])));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)187))) > (3199862418U)));
                        }
                        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) (+(17204643466922667349ULL)));
                            var_27 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_12]))))) | (arr_5 [i_4]));
                            var_28 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (17690103920360893252ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15556730406711658299ULL)) ? (((/* implicit */int) arr_24 [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_28 [i_12] [i_12])))))));
                            arr_42 [i_2] [i_2] [13ULL] [i_2] [5ULL] [13ULL] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_3 - 2] [i_10 + 1] [i_12]))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 2) /* same iter space */
                        {
                            arr_45 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [(unsigned char)3] = ((/* implicit */unsigned char) (+(2420079786298379311ULL)));
                            var_29 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)141))));
                        }
                        var_30 = ((/* implicit */unsigned long long int) arr_7 [i_3 - 1] [i_3 - 2]);
                    }
                    arr_46 [i_2] [i_3] [(short)8] = ((((/* implicit */_Bool) arr_35 [i_4] [i_3] [i_3] [i_3] [i_2])) ? (((unsigned long long int) 6746647816390607230ULL)) : (((/* implicit */unsigned long long int) var_2)));
                }
                for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) 
                {
                    var_31 = ((/* implicit */unsigned long long int) ((short) ((short) max((3461423486U), (((/* implicit */unsigned int) var_1))))));
                    var_32 = arr_24 [i_14] [i_2] [i_2] [i_3] [i_2];
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), ((~(((((/* implicit */_Bool) 2300701973U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]))) : (12803064280487557996ULL)))))));
                }
                var_34 = max(((-(((arr_19 [i_3] [i_2] [i_3] [i_2] [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_2] [i_2]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])) ? (arr_31 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 + 1]) : (arr_31 [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_3 - 1])))));
            }
        } 
    } 
}
