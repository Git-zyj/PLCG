/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37078
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
    var_19 &= ((/* implicit */unsigned char) ((((var_17) >= (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) - (((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((var_17) << (((var_7) - (7969493169810209614LL))))) * (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_6)))))));
    var_20 = var_6;
    var_21 = ((/* implicit */unsigned short) ((var_6) * (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) * (var_1)))) ? (((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_17)))))));
    var_22 += ((/* implicit */_Bool) var_15);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_1] [i_3])) ? (((/* implicit */int) arr_7 [i_2] [i_3])) : (((/* implicit */int) arr_2 [i_1] [i_1])))) <= (arr_3 [i_1] [i_1] [i_3]))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [1U]))) & (arr_8 [i_1])))));
                        var_24 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_1] [i_0]) & (((/* implicit */int) arr_0 [i_3]))))) ? (((/* implicit */unsigned int) arr_3 [i_0] [i_1 + 1] [(unsigned char)2])) : (((arr_9 [i_2] [i_1] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))))) <= (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_5 [i_0])))) % (arr_8 [i_3])))));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 2; i_5 < 10; i_5 += 1) 
                        {
                            arr_14 [i_1] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_2 + 2] [i_2 + 2] [i_5])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_2] [i_2])) | (((/* implicit */int) arr_10 [i_1 + 1] [(short)2]))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1] [i_2 + 1])) ? (arr_9 [9] [(signed char)1] [(short)10]) : (((/* implicit */unsigned int) arr_4 [i_2] [(unsigned char)8])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) || (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [10LL] [i_0]))))))))) : (((((arr_5 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) + (((/* implicit */long long int) ((arr_4 [i_2] [i_4]) << (((arr_3 [i_1] [i_1] [i_2]) - (1829718282))))))))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)2] [i_1]))) % (arr_8 [i_2])));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            arr_18 [i_1] [i_6] = ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((((/* implicit */int) arr_10 [i_0] [i_1 + 1])) + (((/* implicit */int) arr_17 [i_6] [i_4 + 1] [i_2] [i_1 + 1] [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_4 + 1])) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1])))));
                            var_26 = ((/* implicit */signed char) arr_9 [i_0] [i_2] [(signed char)9]);
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0 + 1] [5LL]))))) > (((((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_6])) ^ (arr_6 [i_0])))));
                            var_28 = ((/* implicit */unsigned char) ((((arr_15 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0]) <= (arr_4 [i_4 + 1] [i_6]))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_16 [i_0])) : (arr_3 [i_1] [i_1] [7U]))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 2] [11ULL]))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_7])) || (((/* implicit */_Bool) arr_12 [i_2 + 2] [i_2] [i_2] [i_2] [i_2])))) || (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_1] [i_7]))));
                        arr_22 [(unsigned short)7] [i_1] [i_2 + 1] [i_7 + 1] [i_1 - 1] [i_7 + 1] = ((/* implicit */unsigned long long int) arr_20 [i_1] [i_1]);
                    }
                    var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0 + 1] [i_0 + 1] [i_2 - 1])) ? (arr_12 [i_2] [i_1 + 1] [i_1 + 1] [i_0 + 1] [i_0 + 1]) : (arr_5 [i_1 - 1])))) ? (((arr_6 [(unsigned short)9]) / (arr_13 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_0])) ? (arr_3 [i_1] [(unsigned char)0] [3U]) : (((/* implicit */int) arr_16 [i_2 + 2]))))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_0])) * (((/* implicit */int) arr_7 [i_0] [i_2]))))) < (((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_12 [4LL] [i_2 - 1] [i_1 - 1] [i_0 - 1] [i_0]) : (((/* implicit */long long int) arr_9 [i_2 + 2] [i_2] [i_2]))))))))));
                }
            } 
        } 
    } 
}
