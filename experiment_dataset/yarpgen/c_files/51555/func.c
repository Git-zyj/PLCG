/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51555
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))))) ? (var_2) : (((/* implicit */unsigned int) max((var_3), (var_4))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (var_2) : (((/* implicit */unsigned int) arr_1 [i_0] [i_1 - 3])))) / (((/* implicit */unsigned int) max((arr_3 [i_1 + 1] [i_0]), (arr_2 [i_1]))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_12 -= ((/* implicit */unsigned int) var_7);
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)88)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (signed char)46))));
                }
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)65454)), (min((arr_2 [i_1]), (((/* implicit */int) var_8))))));
                                var_15 = ((/* implicit */int) var_7);
                                var_16 = ((/* implicit */_Bool) (+(var_3)));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [i_1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)65466), (((/* implicit */unsigned short) (_Bool)1))))))))));
                    var_18 = max(((~(min((-346207985), (1245929499))))), (((/* implicit */int) var_5)));
                    arr_15 [i_1] [i_1 + 3] [(unsigned char)4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1046556552)) ? (((((/* implicit */_Bool) var_6)) ? (6727302885060412483ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))))) : (((/* implicit */unsigned long long int) -553481394))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30071))) : (2473225014U)));
                }
                for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_6] [i_1] [11])) ? (arr_7 [i_7] [i_1 + 4] [i_6] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-35))))), (arr_18 [i_1 - 1] [i_1 - 3] [i_1] [i_1 + 1] [i_1 + 4] [i_1 - 3])))));
                        var_20 = ((/* implicit */short) arr_0 [i_1 + 3]);
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) (+(arr_9 [(short)2] [i_1] [i_6] [(signed char)16] [i_8])));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            arr_26 [i_1] [i_1] [i_6] [i_8] [i_9] = (~(((/* implicit */int) arr_12 [i_1 - 2] [i_9])));
                            var_22 -= ((/* implicit */unsigned int) arr_22 [22] [i_1] [(unsigned char)5] [i_8]);
                            var_23 ^= ((/* implicit */unsigned short) arr_20 [i_8] [i_8]);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            var_24 = ((/* implicit */long long int) var_5);
                            var_25 = ((/* implicit */int) var_2);
                            arr_29 [1ULL] [i_1] [10] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (arr_7 [i_1] [i_6] [i_1 - 1] [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_14 [(signed char)4] [i_1] [i_6] [i_8] [i_1] [i_10]) : (((/* implicit */int) arr_16 [i_8] [(unsigned char)22] [i_1])))))));
                        }
                    }
                    arr_30 [i_1] [i_6] [i_6] = ((/* implicit */int) arr_28 [i_0] [i_1 - 1] [i_1] [i_1] [8LL]);
                }
                /* LoopNest 3 */
                for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    for (unsigned char i_12 = 3; i_12 < 21; i_12 += 2) 
                    {
                        for (signed char i_13 = 2; i_13 < 22; i_13 += 3) 
                        {
                            {
                                arr_38 [i_1] [i_1] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [6LL] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (arr_32 [i_1] [i_11] [i_1] [(short)5])))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_1])) ? (arr_32 [i_13 + 1] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) var_2)))) : (max((12141784241184099066ULL), (((/* implicit */unsigned long long int) (signed char)111)))))));
                                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_6))));
                                var_27 = min((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */signed char) arr_8 [(_Bool)1] [(signed char)19] [i_11] [i_1] [i_13 - 1]))))), (min((((/* implicit */unsigned long long int) 1084972880)), (arr_32 [i_1 + 2] [i_1] [i_1] [i_13 + 1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
