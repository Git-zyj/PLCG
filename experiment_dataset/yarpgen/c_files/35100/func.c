/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35100
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) : (min((((/* implicit */long long int) arr_1 [i_0])), (-1324572914508335455LL))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_8))))) > (min((var_5), (((/* implicit */unsigned long long int) arr_2 [i_0])))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_13 = var_1;
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [9U] [i_3] [i_0])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)125)))) >> (((((/* implicit */int) arr_5 [i_3] [i_3])) >> (((((/* implicit */int) arr_9 [i_2] [i_0])) - (142)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)114)))) : (((/* implicit */int) min(((unsigned char)113), (arr_9 [i_3] [i_3]))))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4]))) : (var_6)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    arr_16 [i_0] [i_0] = (signed char)109;
                    arr_17 [i_0] [(signed char)3] [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_5 [i_1] [i_5]), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))) ? (min((((/* implicit */int) max((((/* implicit */short) arr_1 [(unsigned short)14])), (var_8)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_1])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-120)), ((unsigned char)122))))) == (12388000217981158664ULL))))));
                }
                for (signed char i_6 = 1; i_6 < 20; i_6 += 1) 
                {
                    arr_21 [i_0] [i_6 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_10)))))))) == (((/* implicit */int) var_4))));
                    arr_22 [i_0] [i_1] [i_6] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_19 [i_0] [i_0] [7] [i_6 + 1])))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_0]))))) && (((var_3) >= (var_6)))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 3; i_7 < 18; i_7 += 3) 
                    {
                        for (signed char i_8 = 1; i_8 < 19; i_8 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-120)) == (((/* implicit */int) (signed char)-123))))), ((unsigned char)152)))) ? (6058743855728392951ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
                                var_17 = ((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */int) arr_23 [i_0] [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_8])) == (((/* implicit */int) (unsigned char)63))))), (arr_23 [i_0] [i_8 + 1] [i_8 + 1] [i_8 - 1] [11U])));
                                arr_27 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0])) & (max((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])), (6058743855728392921ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) arr_15 [i_6] [i_6] [i_0]))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) var_8)))))));
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_11 [i_8])), (var_0)))) * (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_6 + 1]))) == (var_3)))), (min((((/* implicit */unsigned char) arr_18 [i_6] [i_6] [i_6] [i_1])), (var_4)))))))))));
                                var_19 = ((/* implicit */signed char) min((min((var_7), (((/* implicit */unsigned int) (signed char)99)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((var_3) ^ (var_11)))))) ? (((/* implicit */unsigned long long int) min((max((arr_13 [i_6] [i_0] [i_6] [i_0] [i_0]), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) var_4))))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (arr_10 [i_0] [i_1] [i_6] [4LL] [i_6] [i_6])))), (min((var_6), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_0]))))))));
                }
                for (signed char i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    var_21 = ((/* implicit */short) max((((((/* implicit */int) max((var_2), (((/* implicit */unsigned short) (_Bool)0))))) & (((/* implicit */int) arr_0 [i_9])))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_8)) : (225672966)))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) arr_5 [i_1] [i_11]);
                                arr_35 [i_0] [0ULL] [i_9] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_25 [i_0] [i_1] [i_9] [i_10] [i_10] [i_11] [i_11])) : (((((/* implicit */_Bool) -5771402555071686716LL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_8))))))) ? (((((/* implicit */int) arr_8 [i_0] [i_1] [i_0])) / (((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_25 [19U] [i_1] [(unsigned short)11] [i_1] [i_9] [i_1] [i_11]))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_23 += ((/* implicit */_Bool) var_6);
    var_24 = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (var_5))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 12388000217981158664ULL)) || (((/* implicit */_Bool) var_2)))))))) | (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (signed char)(-127 - 1))))), ((+(((/* implicit */int) var_1)))))))));
    var_25 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_4)), (max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) (signed char)70)) - (70)))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_7)) : (var_5)))))));
}
