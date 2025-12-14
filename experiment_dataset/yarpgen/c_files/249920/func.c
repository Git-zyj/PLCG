/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249920
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
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_12 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))), (arr_0 [i_0])));
        var_13 = ((/* implicit */int) max((arr_0 [(unsigned char)8]), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_14 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) > (max((((/* implicit */unsigned int) arr_3 [i_1])), (arr_2 [i_1]))));
        var_15 = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [1ULL])) | (((/* implicit */int) arr_3 [i_1]))))) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [5ULL]))))) : (min((((/* implicit */unsigned int) arr_3 [i_1])), (((arr_2 [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_2 = 1; i_2 < 18; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((((arr_9 [i_2] [14] [i_3]) >= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3]))) : (arr_9 [i_4] [i_3] [i_2]))) % (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_2 + 1]), (arr_8 [i_2 - 1]))))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [(unsigned char)4] [i_6])) ? (((/* implicit */int) arr_4 [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1])))) * (((((/* implicit */_Bool) 4294967274U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [(unsigned char)0] [i_2] [i_2])) ? (((/* implicit */int) arr_13 [i_2] [i_3] [i_6])) : (((/* implicit */int) arr_4 [i_2] [i_3]))))) ? (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_7 [i_2] [i_3] [i_3])))) : (((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_3])) : (((/* implicit */int) var_7)))))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2 + 2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (arr_12 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [(short)4]) : (arr_12 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2])))) ? (((((/* implicit */_Bool) (-(arr_14 [i_2] [i_3])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (arr_11 [i_3] [i_4] [i_5] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_2]), (((/* implicit */short) arr_10 [i_3] [i_4] [7ULL])))))))) : (((/* implicit */unsigned long long int) arr_14 [i_3] [i_3])))))));
                                var_20 = ((/* implicit */short) ((((arr_15 [i_2] [i_2 + 2] [i_2] [i_2 + 2]) - (arr_15 [i_2] [i_2 + 1] [i_2] [i_2 + 2]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2 + 1])) ? (((/* implicit */int) max((((/* implicit */short) arr_7 [i_2] [i_5] [i_4])), (var_6)))) : (((/* implicit */int) arr_7 [i_2] [i_2] [19U])))))));
                                var_21 = arr_7 [i_2 + 1] [i_3] [i_2];
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (arr_15 [i_2] [i_2] [i_2 + 1] [(signed char)11]) : (arr_15 [i_2] [i_2] [i_2 + 2] [i_2]))) / (((arr_15 [i_2] [i_2] [i_2 + 1] [i_2]) * (arr_15 [i_2] [i_2] [i_2 - 1] [i_2])))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (((((((/* implicit */int) var_6)) + (2147483647))) >> (((((/* implicit */int) var_8)) - (15142)))))))) || (((((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) >= (((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (var_4))))))));
}
