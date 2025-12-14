/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246756
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
    var_10 = ((/* implicit */unsigned long long int) var_7);
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((unsigned long long int) 2190180192U)))));
    var_12 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 5ULL)) ? (-6812383460491129924LL) : (1023LL))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned char)55))))))));
    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(var_3)))) ? (((((/* implicit */_Bool) var_8)) ? (6991251410904461615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2288))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) << (((((5ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) - (18446744073709551522ULL)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] = (signed char)-56;
                /* LoopSeq 3 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    var_14 = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2 - 1])))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)71)) << (((2257064136U) - (2257064127U)))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_3]))))), (18446744073709551611ULL)))));
                        arr_12 [i_0] [(unsigned char)0] [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0] [(signed char)3]) : (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)55)))) : ((~(((/* implicit */int) (signed char)-79)))))), (((/* implicit */int) (unsigned char)200))));
                    }
                    arr_13 [5LL] [1ULL] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) (-(-9154840551020561992LL)))))));
                    arr_14 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((((/* implicit */int) arr_10 [i_2] [i_0] [i_1] [i_1] [i_0] [i_0])) + (2147483647))) << (((9154840551020561992LL) - (9154840551020561992LL)))))) ? (((arr_2 [i_0] [i_0]) >> (((((/* implicit */int) arr_10 [i_0] [i_0] [(signed char)9] [i_0] [i_0] [5])) + (32))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))))), (((/* implicit */unsigned long long int) var_8))))) : (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((((((/* implicit */int) arr_10 [i_2] [i_0] [i_1] [i_1] [i_0] [i_0])) - (2147483647))) + (2147483647))) << (((9154840551020561992LL) - (9154840551020561992LL)))))) ? (((arr_2 [i_0] [i_0]) >> (((((/* implicit */int) arr_10 [i_0] [i_0] [(signed char)9] [i_0] [i_0] [5])) + (32))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))))), (((/* implicit */unsigned long long int) var_8)))));
                    arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) min((arr_6 [i_0] [i_2 + 1] [(signed char)2]), (arr_6 [(unsigned char)12] [i_2 - 1] [(signed char)8]))));
                }
                for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    var_16 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-77)) % (((/* implicit */int) arr_16 [i_4] [i_4] [i_4] [i_4]))))))) || ((!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)201)), (var_2))))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_25 [(signed char)12] [i_1] [i_0] [i_0] [(signed char)7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)79)) ? (5ULL) : (((/* implicit */unsigned long long int) 1715739402U))))) ? (((((((/* implicit */int) var_0)) + (2147483647))) << (((((((/* implicit */int) arr_7 [i_1])) + (1592))) - (8))))) : (((/* implicit */int) min((arr_0 [i_0]), (arr_10 [i_4] [i_0] [i_4] [i_4] [i_4] [(signed char)0]))))))), (((18446744073709551596ULL) << (((/* implicit */int) ((((/* implicit */_Bool) (signed char)5)) && (((/* implicit */_Bool) var_2)))))))));
                                var_17 = ((/* implicit */unsigned int) ((unsigned long long int) ((var_3) << (((((min((var_4), (((/* implicit */long long int) arr_16 [i_0] [i_1] [8LL] [(unsigned char)11])))) + (2755113824610946272LL))) - (9LL))))));
                                arr_26 [i_0] [11LL] [7LL] [7LL] [i_0] = min((((/* implicit */unsigned long long int) (signed char)-51)), (arr_1 [i_0]));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    var_18 = ((/* implicit */short) 18446744073709551602ULL);
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 10; i_9 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) (unsigned char)201);
                                arr_35 [i_0] [4LL] [11U] [3LL] [i_0] = var_7;
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_11 = 1; i_11 < 11; i_11 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            var_20 = ((/* implicit */signed char) arr_43 [(signed char)2] [1ULL] [i_11 + 1] [i_11 + 2] [i_11 + 1] [3] [(unsigned char)5]);
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [3] [2LL] [6LL] [i_10] [5LL] [i_10] [i_12])) || (((/* implicit */_Bool) (+(18446744073709551596ULL))))));
                        }
                        for (signed char i_13 = 1; i_13 < 11; i_13 += 3) 
                        {
                            var_22 = ((/* implicit */long long int) arr_0 [i_0]);
                            arr_47 [(unsigned char)8] [i_0] [i_0] [(unsigned char)8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) << (((((var_3) >> (((arr_6 [i_0] [0] [i_11]) - (4800732931952911054ULL))))) - (11021)))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            arr_51 [i_0] [5] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (signed char)120)) ? (arr_45 [i_0] [i_11 + 2] [i_11] [i_11 + 2] [i_11] [i_11 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)55))) : (0LL)))));
                            var_23 = ((/* implicit */unsigned long long int) arr_31 [i_0] [i_0]);
                        }
                        for (long long int i_15 = 2; i_15 < 10; i_15 += 3) 
                        {
                            arr_54 [i_0] [i_0] [i_0] [i_0] [(signed char)6] [6U] = ((/* implicit */unsigned long long int) arr_28 [i_11] [(signed char)8] [i_10] [i_10]);
                            arr_55 [i_0] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_50 [i_15 - 2] [i_15 - 2] [i_15 - 1] [i_15 + 3] [i_15] [(signed char)11])) ? (((/* implicit */int) arr_50 [i_15 - 2] [i_15] [i_15 + 3] [i_15 + 3] [i_15] [i_15])) : (((/* implicit */int) (signed char)-120))));
                            arr_56 [i_0] [i_0] [i_0] [5U] [12] [i_0] [(signed char)4] = var_0;
                            var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)5))));
                            var_25 = (signed char)127;
                        }
                        var_26 = (unsigned char)201;
                    }
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132))) + (19ULL)))) ? (((((/* implicit */_Bool) (unsigned char)201)) ? (((((/* implicit */_Bool) 3584842031U)) ? (((/* implicit */unsigned long long int) 7734188057748301112LL)) : (18446744073709551607ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)11682)) - (((/* implicit */int) (unsigned char)132))))))) : (((((/* implicit */_Bool) ((-9154840551020561992LL) - (((/* implicit */long long int) arr_22 [0U] [9U] [i_10]))))) ? (arr_45 [i_0] [7LL] [2] [i_10] [9ULL] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-27721))) - (1822873636774831879LL))))))));
                    arr_57 [2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)38)) ? (7854017873024664216ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 9154840551020562004LL)))) : (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [(unsigned char)12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(short)5] [i_0] [(short)5] [0]))) : (611689397U))))))));
                }
            }
        } 
    } 
}
