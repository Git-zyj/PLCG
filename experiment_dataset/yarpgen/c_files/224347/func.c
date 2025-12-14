/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224347
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) arr_1 [(unsigned short)10]))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                            {
                                var_13 = min((((/* implicit */long long int) 733759289U)), (-8592547184105552383LL));
                                arr_12 [i_0] [i_1] [i_1] [i_1] [i_4] [i_0] [i_1] = ((((((/* implicit */int) (unsigned char)239)) != (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_6))))));
                            }
                            /* vectorizable */
                            for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                            {
                                arr_16 [i_0] [i_3] [i_2] [i_3] [i_5] [6U] [i_3 + 1] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (arr_3 [i_3 + 1] [i_2 - 1] [i_2])));
                                arr_17 [i_0] [i_1] [i_2] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */int) 4503599627370492LL);
                                var_14 = ((/* implicit */unsigned char) (+(var_2)));
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */_Bool) -4884417965315363467LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171))) : (939524096U))) - (162U)))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3] [i_3] [5ULL] [i_3 + 2] [i_3])) ? (1046393697U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3])))));
                            }
                            /* vectorizable */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_15 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 3561208000U)))))));
                                var_16 |= ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)109))));
                            }
                            arr_22 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) var_11);
                            arr_23 [i_0] [(_Bool)1] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) (+(var_4)));
                            var_17 = ((/* implicit */long long int) arr_21 [i_0]);
                            var_18 = ((/* implicit */short) min((max((var_9), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)137)))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((var_8) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [6LL])) ? (((((/* implicit */_Bool) (short)-20908)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-90))) : (511310076U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)61)))))))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_7 = 2; i_7 < 9; i_7 += 3) 
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)237)) * (((/* implicit */int) arr_10 [i_0] [4ULL] [i_0])))))))));
                    var_21 = ((/* implicit */_Bool) var_0);
                    var_22 = ((/* implicit */unsigned long long int) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
                    arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_7])) ? (var_5) : (((/* implicit */int) arr_15 [i_1 + 2] [i_1] [i_7] [i_7 - 2]))));
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    arr_29 [i_0] [(unsigned char)10] [i_0] [(unsigned short)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)21346)) ? (((/* implicit */int) (unsigned short)50147)) : (((/* implicit */int) (signed char)90))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 733759271U)) & (((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50127))))))))));
                    arr_30 [i_0] [i_0] = arr_5 [i_1 - 2] [i_1 - 1] [i_1 + 1];
                }
                for (short i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) min((-509355896), (((/* implicit */int) (unsigned char)128)))))));
                    arr_35 [i_0] = ((/* implicit */unsigned char) var_2);
                    arr_36 [i_0] [i_0] [i_9] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */int) (short)-13952)), (-1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)7]))) : (max((((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))), (733759240U))));
                    arr_37 [i_0] = ((((((/* implicit */long long int) ((/* implicit */int) var_11))) - (arr_13 [i_1] [i_1] [i_0] [i_1] [i_1] [i_1 - 2] [i_9]))) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
                    var_25 ^= ((/* implicit */unsigned long long int) (((~(arr_3 [i_1 + 1] [i_1] [i_1]))) > (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                }
                for (short i_10 = 2; i_10 < 10; i_10 += 3) 
                {
                    var_26 = max((((((/* implicit */_Bool) arr_13 [i_10 + 1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_3 [i_0] [i_1 - 1] [i_10])) : (arr_13 [i_0] [i_1 - 2] [i_0] [i_0] [i_0] [i_0] [(signed char)9]))), (((/* implicit */long long int) arr_3 [i_1 - 2] [i_1] [i_10])));
                    var_27 = ((/* implicit */int) max((((((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0])) ? (4503599627370511LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) << (((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_1 + 2] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) : (1046393697U))))), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_6 [i_0] [(unsigned short)9] [i_0] [i_10])), (max((var_3), (((/* implicit */unsigned short) var_7)))))))));
                    var_28 ^= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_33 [i_10 + 1] [i_10 - 2] [i_1 + 1] [i_1 - 2])) ? (((/* implicit */int) (unsigned short)12501)) : (arr_25 [(_Bool)1] [(_Bool)1])))));
                }
            }
        } 
    } 
    var_29 ^= ((/* implicit */short) var_6);
    var_30 |= ((/* implicit */_Bool) ((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    var_31 = ((/* implicit */_Bool) var_6);
}
