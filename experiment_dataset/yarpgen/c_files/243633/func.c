/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243633
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
    var_10 &= ((/* implicit */short) var_6);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_11 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1] [0LL]))))) ? (((/* implicit */unsigned int) (((~(var_5))) - ((~(var_1)))))) : ((-((-(var_3)))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_9 [i_2] [i_2] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) (~(arr_5 [i_1] [i_1])))) ? ((~(((/* implicit */int) var_9)))) : (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_0 [i_2]))))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_1] [i_4] [i_1 + 1])))))));
                            arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) var_0);
                            var_13 = ((((/* implicit */int) var_0)) / (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (arr_1 [i_1 + 1])))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_1] [i_0] = min((min((((/* implicit */unsigned long long int) arr_15 [i_0] [(_Bool)1] [11U] [i_3] [i_3] [i_1] [i_1])), (((((/* implicit */_Bool) var_2)) ? (arr_14 [i_0] [7] [(unsigned char)8]) : (((/* implicit */unsigned long long int) arr_5 [i_3] [i_1])))))), (((/* implicit */unsigned long long int) var_6)));
                            var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_6)) ? (var_3) : (var_3))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_1])))))))) ? (((/* implicit */unsigned long long int) max((arr_5 [i_1 + 1] [i_3]), (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((arr_14 [i_2] [i_2] [i_2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [i_5] [i_1 + 1] [i_0])))))))));
                            arr_17 [i_0] [i_1] [i_2] [i_1] [i_5] = ((/* implicit */short) ((min((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */int) var_6)) < (var_1)))))) > (((((/* implicit */_Bool) var_6)) ? (var_1) : (arr_5 [i_1] [i_1])))));
                            arr_18 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(var_1)));
                            var_15 |= min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (max((((/* implicit */int) var_8)), (var_5)))))), ((~(((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                        }
                        arr_19 [i_1] [(short)4] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((min((((((/* implicit */int) arr_0 [i_2])) << (((((/* implicit */int) var_9)) - (46))))), (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_2] [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1])) : (var_5))))), (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_3] [i_2] [i_1] [i_0])) > (((/* implicit */int) arr_12 [i_1] [6ULL] [i_2] [i_3]))))), (arr_0 [i_1 + 1]))))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [1U] [i_1])) * (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_4)), (var_7))) != (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(short)10]))))))))));
                    }
                    for (short i_6 = 4; i_6 < 10; i_6 += 2) /* same iter space */
                    {
                        var_17 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (arr_14 [i_6] [i_6] [2LL])))) ? (((/* implicit */int) ((var_1) >= (((/* implicit */int) var_9))))) : (((/* implicit */int) max((arr_8 [i_0] [i_1 + 1] [i_2] [i_6]), (((/* implicit */unsigned char) var_4))))))) * (((((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_0] [i_6] [i_6 - 3] [i_6 - 3])) | ((+(((/* implicit */int) var_4))))))));
                        var_18 = ((/* implicit */unsigned short) max((max((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_0)))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (var_1)))));
                    }
                    for (short i_7 = 4; i_7 < 10; i_7 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_1 [i_7])))) | (((/* implicit */int) min((var_0), (((/* implicit */short) var_8)))))))) : (((((/* implicit */_Bool) var_9)) ? (arr_14 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))))));
                        var_20 = min((((/* implicit */int) ((((/* implicit */_Bool) ((arr_15 [i_7] [i_1] [(unsigned char)2] [i_1 + 1] [i_0] [i_1] [i_0]) / (((/* implicit */long long int) var_3))))) || (((/* implicit */_Bool) arr_5 [i_1] [i_1]))))), ((-(((/* implicit */int) arr_20 [i_0] [i_0] [7U] [(_Bool)0])))));
                    }
                    arr_24 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) max((arr_8 [i_2] [i_1] [(unsigned char)0] [(unsigned char)0]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_0 [i_2]))))))))));
                    var_21 &= ((/* implicit */int) min((((arr_3 [6U] [6U] [6U]) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_15 [i_0] [i_0] [i_0] [i_1 + 1] [i_1] [(_Bool)1] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_6)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        arr_27 [i_1] [i_1] [i_8] [i_8] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_2)), ((((~(var_7))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [(short)8] [i_8] [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_20 [i_1] [i_1] [i_2] [i_8])))))))));
                        arr_28 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_15 [i_2] [i_2] [2ULL] [i_2] [i_2] [i_1] [i_2]);
                        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
                        var_23 &= ((/* implicit */_Bool) arr_0 [i_1 + 1]);
                    }
                    for (int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            var_24 = ((/* implicit */short) (~(((((/* implicit */int) var_8)) * (((/* implicit */int) arr_32 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))))));
                            var_25 ^= ((/* implicit */short) (+(max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_2]))))))));
                            arr_34 [i_1] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_0 [i_9]))))) : (((((((/* implicit */_Bool) arr_22 [i_1] [i_1] [(_Bool)1] [(unsigned char)11])) || (((/* implicit */_Bool) var_1)))) ? (min((((/* implicit */long long int) var_0)), (arr_15 [i_0] [11] [i_2] [i_9] [i_10] [i_1] [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_1] [i_1 + 1] [4])))))));
                            arr_35 [i_0] [10] [i_0] [i_9] [i_9] [i_9] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0] [i_1 + 1] [i_9] [i_10] [i_10] [i_1 + 1] [(signed char)6])) ? (((/* implicit */int) arr_33 [i_0] [i_1 + 1] [i_9] [i_9] [6U] [i_10] [i_10])) : (var_5)))) ? (((((/* implicit */_Bool) arr_33 [i_0] [i_1 + 1] [i_9] [i_0] [i_1 + 1] [i_10] [i_9])) ? (((/* implicit */int) arr_33 [4U] [i_1 + 1] [i_9] [i_9] [i_10] [i_9] [i_9])) : (((/* implicit */int) arr_33 [i_10] [i_1 + 1] [i_9] [i_9] [i_10] [0LL] [i_0])))) : (((/* implicit */int) max((arr_33 [i_0] [i_1 + 1] [i_9] [i_0] [i_2] [i_2] [i_0]), (arr_33 [6] [i_1 + 1] [i_9] [i_2] [i_10] [i_9] [i_9]))))));
                        }
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_4)))) + (((/* implicit */int) arr_26 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1]))))) ? (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_33 [i_0] [(_Bool)1] [i_1] [i_1] [i_2] [i_2] [i_1])) : (((/* implicit */int) var_0)))), ((-(((/* implicit */int) var_9)))))) : (((/* implicit */int) var_4))));
                    }
                }
            } 
        } 
    } 
}
