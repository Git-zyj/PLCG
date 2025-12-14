/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32858
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max(((-(arr_0 [i_2 - 1] [i_1]))), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) == (2776825883U)))) ^ (((((/* implicit */_Bool) var_18)) ? (var_10) : (820996753))))))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) min((1048560), (((/* implicit */int) (unsigned short)30130))))) - (((unsigned int) (-(4294967295U))))));
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */short) ((unsigned char) -674955277));
                            }
                        } 
                    } 
                    arr_11 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((var_2) >> (((arr_5 [i_0] [i_1] [(signed char)7]) - (8044039317290565656LL)))))))) ? (((/* implicit */long long int) min((((((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 1] [1U] [i_2] [i_1])) & (((/* implicit */int) (unsigned short)35405)))), (((/* implicit */int) arr_6 [i_2 - 2] [i_1] [i_2 - 2] [i_2 - 2] [i_2] [i_2 + 1]))))) : (((long long int) arr_6 [i_2 + 1] [i_1] [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2 + 1]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        arr_15 [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) (~(arr_1 [i_2 - 2] [i_2 + 1])));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */short) ((unsigned char) var_19));
                            arr_20 [i_0] [i_1] [i_2 - 1] [(short)11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_2] [i_2 + 1] [(unsigned char)7] [i_2] [i_2 - 1])) ? (var_0) : (((/* implicit */unsigned long long int) arr_19 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1]))));
                            arr_21 [i_6] [i_1] [i_2] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) (unsigned char)232);
                        }
                        for (int i_7 = 1; i_7 < 19; i_7 += 2) 
                        {
                            arr_24 [i_0] [i_0] [i_2] [18] [i_7 + 1] [i_5] [i_1] = ((/* implicit */short) (+(var_19)));
                            var_23 = var_14;
                        }
                        var_24 += ((/* implicit */signed char) ((((678321992) >> (((arr_2 [i_5]) + (8011947084726933917LL))))) / ((-(((/* implicit */int) (unsigned short)35378))))));
                        var_25 += ((/* implicit */unsigned char) (+(((/* implicit */int) arr_14 [i_5] [0] [i_2 - 2] [0]))));
                        arr_25 [i_0] [i_1] [i_0] [i_0] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_5] [i_5] [i_5]))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 3; i_9 < 19; i_9 += 2) 
                        {
                            var_26 = ((/* implicit */short) (~(((((/* implicit */_Bool) (-(3046074786947791465LL)))) ? (((int) arr_26 [i_1] [i_8] [i_2] [i_1] [i_1])) : (-1670375006)))));
                            arr_30 [i_0] [i_1] [i_2 + 1] [i_8] [i_1] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_18)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (arr_22 [i_1] [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9 + 1] [i_9]))));
                            arr_31 [i_0] [i_1] [i_1] [i_0] [i_1] [i_8] = ((/* implicit */unsigned int) arr_14 [i_1] [i_8] [i_2] [i_1]);
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1518141421U)) | (17936860743986905410ULL)))) ? (((4241200146230558945LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-38))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_17)))))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned char) ((_Bool) var_9));
                            arr_34 [i_1] [i_1] [i_1] [10LL] [i_1] = ((/* implicit */long long int) ((unsigned int) (signed char)95));
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */unsigned int) 135377294)) : (2776825883U)))));
                            var_30 = ((-9223372036854775784LL) - (arr_1 [i_2 + 1] [i_2 - 1]));
                        }
                        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
                        {
                            arr_37 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) arr_26 [i_1] [i_8] [i_2 + 1] [i_8] [i_8])) : (min((820996744), (((/* implicit */int) (unsigned short)35406))))))));
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_0] [i_1] [i_2 - 1] [i_0] [(unsigned short)18] [i_2 - 1])) | (((/* implicit */int) (((!(((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (arr_0 [i_11] [i_0]))))))))))));
                        }
                        arr_38 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_9)) : (7051756139272046962ULL)))))) && (((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 2] [i_8] [i_8] [i_8])), (((((/* implicit */int) var_13)) - (-1299211230))))))));
                        /* LoopSeq 1 */
                        for (signed char i_12 = 2; i_12 < 18; i_12 += 4) 
                        {
                            var_32 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_17)))) ? (((/* implicit */int) (unsigned char)255)) : (((((((/* implicit */int) arr_35 [i_0] [i_0] [i_2] [i_8] [i_12])) - (820996751))) + (((/* implicit */int) arr_35 [i_1] [i_0] [i_2] [(signed char)10] [i_12 - 1]))))));
                            arr_41 [i_12 + 2] [i_1] [i_8] [i_8] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) 678321982)) ? (((/* implicit */unsigned long long int) 2147483647)) : (11394987934437504666ULL))));
                            arr_42 [i_1] [i_8] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)151)) < (((/* implicit */int) (short)-7380))));
                            var_33 = ((/* implicit */unsigned char) min((((/* implicit */int) min(((!(((/* implicit */_Bool) -1299211230)))), ((!((_Bool)1)))))), ((-(((/* implicit */int) (short)30720))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_34 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 8220454604350255897LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))), (((/* implicit */int) (signed char)-9))))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) var_6))));
}
