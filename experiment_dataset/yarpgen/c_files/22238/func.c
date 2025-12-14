/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22238
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
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) max((var_11), (var_5))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_7 [i_2]) >> (((var_4) - (4149059158U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)109)))) : (max((arr_7 [i_0]), (var_8)))));
                    arr_9 [i_0] [i_1] = max((((/* implicit */unsigned int) ((unsigned char) (unsigned char)27))), (((arr_7 [i_0]) - (arr_7 [i_1]))));
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (arr_2 [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)45)) ? (((var_0) | (((/* implicit */long long int) 1650722700U)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 7; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
                        {
                            var_14 ^= ((/* implicit */signed char) ((((max((arr_3 [i_0]), (((/* implicit */long long int) (unsigned char)50)))) == (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_2] [i_1] [(unsigned char)10]))))) ? (max((arr_2 [i_0]), (((/* implicit */unsigned int) (unsigned short)42553)))) : (arr_12 [i_0] [i_2] [0LL] [i_4])));
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_2] [i_3]))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_1] [i_2] [i_5] [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5]))) / (max((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned char)4]))) | (arr_13 [i_0] [i_0] [i_2] [(unsigned short)6] [(unsigned char)5]))), (arr_3 [i_3 + 3])))));
                            var_16 = ((/* implicit */unsigned int) var_1);
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3 + 3] [i_3 + 2])) ? (((/* implicit */int) arr_0 [i_3 + 2])) : (((/* implicit */int) ((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6]))))))));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0] [4U] [i_2])) * (((/* implicit */int) arr_5 [i_0] [i_0] [3U])))))));
                            arr_22 [i_6] [i_3] [i_2] [i_6] = arr_20 [i_6] [i_3] [i_2] [i_1] [i_0];
                            var_19 = arr_18 [i_0] [9U] [i_2] [(unsigned char)3] [i_3];
                            var_20 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [10U] [i_3 - 2]))) * (arr_14 [i_3] [i_1] [i_2] [i_3 + 4] [i_6]));
                        }
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_17 [10LL] [i_1] [i_2] [(unsigned char)6] [i_2])) / (arr_3 [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) > (var_11)))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3])))) : (((/* implicit */int) (unsigned char)3))));
                        var_22 = ((/* implicit */unsigned short) ((((arr_10 [i_0] [i_0] [i_0] [i_0]) == (var_5))) ? (max((((/* implicit */long long int) max((arr_11 [i_0] [i_1] [i_0] [i_3]), (arr_7 [i_2])))), (((((/* implicit */long long int) arr_17 [i_0] [i_1] [i_1] [i_2] [1LL])) | (var_3))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)211))) ^ (arr_11 [i_3 + 4] [i_3] [i_3 + 2] [i_3 + 1]))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 + 2])))))) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) arr_1 [i_3 + 3]))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 2; i_7 < 8; i_7 += 3) /* same iter space */
                        {
                            arr_25 [i_0] [i_0] [i_7] [i_0] [i_0] [i_0] [(unsigned short)10] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)211)) > (((/* implicit */int) (unsigned char)233)))))) * (arr_13 [i_3 + 1] [i_7 + 2] [i_7 + 1] [i_7 + 1] [i_7 + 3])));
                            var_24 |= ((/* implicit */signed char) (unsigned char)252);
                            var_25 += ((/* implicit */unsigned short) ((unsigned char) arr_5 [i_3] [i_3] [i_3]));
                            var_26 = ((/* implicit */signed char) arr_21 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
                        }
                        for (unsigned int i_8 = 2; i_8 < 8; i_8 += 3) /* same iter space */
                        {
                            var_27 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_23 [i_3 + 4] [i_3] [i_2] [2U] [i_0] [i_8 + 3])))));
                            var_28 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)47)) && (((/* implicit */_Bool) (unsigned char)142)))))) == (((unsigned int) max((((/* implicit */long long int) (unsigned char)81)), (var_0))))));
                        }
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)197)) ^ (((/* implicit */int) (signed char)-116))))), (((arr_14 [i_0] [i_0] [(unsigned short)1] [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0])))))));
        var_30 ^= ((/* implicit */signed char) (-(((arr_18 [i_0] [(unsigned char)1] [i_0] [i_0] [i_0]) * (((((/* implicit */_Bool) arr_15 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(unsigned char)2] [i_0]))) : (var_2)))))));
        arr_28 [(unsigned short)2] [(unsigned char)9] = ((/* implicit */unsigned int) (unsigned char)62);
    }
    for (unsigned short i_9 = 3; i_9 < 8; i_9 += 2) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) var_1))));
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            var_32 = max((arr_27 [i_9 + 1] [i_9 - 2]), (((unsigned short) arr_6 [i_9] [i_9 - 2] [i_10] [7LL])));
            var_33 *= ((/* implicit */unsigned char) max((arr_27 [i_9] [i_10]), (max((arr_27 [i_9 - 2] [i_10]), (arr_27 [i_9 + 2] [i_10])))));
        }
    }
    /* vectorizable */
    for (unsigned short i_11 = 3; i_11 < 8; i_11 += 2) /* same iter space */
    {
        arr_37 [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_11 + 1])) ? (var_4) : (arr_30 [i_11 + 2])));
        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_11 - 2] [i_11]))) : (((((/* implicit */_Bool) arr_17 [i_11] [i_11] [i_11 - 3] [i_11] [i_11])) ? (659623944U) : (var_11))))))));
    }
    var_35 += ((/* implicit */long long int) var_8);
}
