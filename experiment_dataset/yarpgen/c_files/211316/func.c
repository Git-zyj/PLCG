/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211316
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
    var_10 = ((/* implicit */int) (+(((var_7) ? (max((var_2), (((/* implicit */long long int) (unsigned short)55712)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_7))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [(unsigned char)5] [i_1] = ((/* implicit */int) (+(576460751229681664LL)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            var_11 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)29)))) & ((-(arr_10 [5ULL] [11] [i_3 + 2] [i_3])))));
                            var_12 += ((/* implicit */signed char) (-((+(((/* implicit */int) arr_1 [i_0]))))));
                        }
                        for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            arr_15 [(unsigned char)13] [5LL] [i_1] [(unsigned char)13] [5LL] [i_5] [5ULL] = (+(((/* implicit */int) ((signed char) arr_11 [(signed char)10] [0] [(signed char)10] [(signed char)10] [i_1] [i_5]))));
                            var_13 ^= arr_13 [i_0];
                            arr_16 [12] [12] [i_1] [12] [i_3] [(unsigned char)5] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) max((arr_13 [i_1]), (((/* implicit */short) arr_1 [i_2])))))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 1; i_6 < 13; i_6 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 3459213684539801795ULL)) ? (3459213684539801795ULL) : (((/* implicit */unsigned long long int) -540477358)))));
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min(((+(((/* implicit */int) arr_3 [i_1 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 1]))))))))));
                            arr_20 [i_1] [(signed char)6] [9] [11ULL] [i_6 + 2] = ((/* implicit */short) (~(((unsigned int) (~(arr_12 [(unsigned short)12] [i_1 - 1] [3U] [i_1 - 1] [i_6 + 1]))))));
                            arr_21 [i_1] [11] [4] [(short)9] [i_1] = ((/* implicit */_Bool) arr_3 [i_0]);
                        }
                        for (unsigned char i_7 = 1; i_7 < 13; i_7 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((short) 259347316)))));
                            var_17 = (!((!(((/* implicit */_Bool) arr_17 [i_1] [i_1 + 1] [9] [13LL] [i_1 - 1])))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_9 [i_1] [(unsigned char)11] [i_1 + 1] [i_7 + 2] [i_1])))) ? ((~(((/* implicit */int) (signed char)-58)))) : (min((((/* implicit */int) arr_1 [i_0])), (((arr_19 [i_0] [i_0] [14] [i_3] [2] [i_1]) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (signed char)1))))))));
                            var_19 = ((/* implicit */int) (unsigned char)91);
                            arr_24 [i_1] [i_1] [i_1] = ((/* implicit */short) max((max((arr_12 [(short)0] [(short)0] [i_1 + 1] [i_1 + 1] [(signed char)3]), (((/* implicit */unsigned long long int) arr_2 [i_7 + 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [(signed char)8] [i_7 + 2] [i_3 - 1] [i_1 - 1])) ? (-4194304LL) : (((/* implicit */long long int) arr_17 [(short)9] [i_1 + 1] [4] [i_7 - 1] [2LL])))))));
                        }
                        for (unsigned char i_8 = 1; i_8 < 13; i_8 += 1) /* same iter space */
                        {
                            arr_28 [4ULL] [i_1] [6ULL] [(unsigned char)7] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((int) arr_2 [i_0]))) ? (((/* implicit */int) max((arr_27 [0] [5LL] [12ULL] [i_3 - 3] [(unsigned char)12]), (((/* implicit */unsigned char) arr_19 [(short)11] [(short)11] [i_2] [i_3] [i_3 - 2] [i_3 - 1]))))) : (((/* implicit */int) ((signed char) arr_25 [(short)14] [i_1] [(signed char)11] [i_3] [i_3] [(signed char)6]))))) >> (((max((((/* implicit */int) (signed char)-64)), (-538641324))) + (85)))));
                            var_20 &= ((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-14125))))), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 743799446U)))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 3; i_9 < 14; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned char) arr_25 [12ULL] [12U] [i_2] [i_9 - 3] [i_9 - 1] [i_10]);
                                arr_34 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)21886)) ? (538641338) : (2000043656)));
                            }
                        } 
                    } 
                    arr_35 [i_1] = min((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_1 [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [(short)5] [11] [i_0] [i_1])))))))), (min((arr_12 [(signed char)1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]), (arr_12 [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (var_2))))));
    var_23 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_4)) != (min((((/* implicit */int) (signed char)65)), (var_5))))))));
}
