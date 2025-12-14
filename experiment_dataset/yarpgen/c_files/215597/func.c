/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215597
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
    var_15 = (unsigned char)119;
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [13LL] [i_1] = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1]))) / (((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)116))) : (var_0))))), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0 + 1]))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_16 += ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_1] [i_0 - 1]);
                    arr_11 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */short) ((signed char) 18446744073709551615ULL));
                    arr_12 [i_0] [i_2] = ((/* implicit */signed char) arr_2 [i_1] [(unsigned short)13]);
                }
                for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    arr_17 [i_3] [i_0] [i_0] = ((/* implicit */signed char) 1846162761);
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                    {
                        var_17 ^= ((/* implicit */signed char) min((((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1])), (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) var_13))))));
                        arr_22 [i_0 + 1] [i_1] [i_3] [i_4] = ((/* implicit */signed char) min(((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (var_10)))))), (((/* implicit */int) ((((/* implicit */_Bool) 1409221042U)) || (((/* implicit */_Bool) ((long long int) (unsigned char)63))))))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [5ULL] [i_3] [i_4])) ? (((arr_15 [i_1]) >> (((arr_15 [i_3]) - (963813612U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [(signed char)14] [i_0] [8] [i_0] [i_4])) & (((((/* implicit */_Bool) (short)-3141)) ? (((/* implicit */int) arr_3 [i_0])) : (var_9))))))));
                        var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 - 1])) ? (((/* implicit */int) arr_10 [i_0 + 1])) : (((/* implicit */int) arr_10 [i_0 + 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0 - 1])) || (((/* implicit */_Bool) arr_10 [i_0 - 1]))))) : (((((/* implicit */_Bool) arr_10 [i_0 - 1])) ? (((/* implicit */int) arr_10 [i_0 - 1])) : (((/* implicit */int) arr_10 [i_0 + 2]))))));
                    }
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                    {
                        var_20 = (-(((((/* implicit */int) arr_2 [i_0] [i_3])) | (((/* implicit */int) arr_21 [i_0] [i_1] [(unsigned char)12] [i_5] [i_5])))));
                        var_21 += ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_7 [8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))), ((-(var_12))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_0]);
                                arr_31 [i_0] [i_7] [i_1] [i_7] [i_6] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) 23ULL)) ? (arr_26 [i_0 + 2] [i_0] [i_0] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [(unsigned short)9] [14LL] [i_7])))));
                                var_23 += 11719493784683843769ULL;
                                var_24 = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0 + 2]))));
                            }
                        } 
                    } 
                }
                var_25 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_20 [i_1])) * (((/* implicit */int) var_6))))))));
            }
        } 
    } 
    var_26 |= min((var_5), (((/* implicit */unsigned long long int) min((2875331358504610896LL), (min((var_10), (((/* implicit */long long int) var_2))))))));
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))) + (18446744073709551611ULL))), (((((/* implicit */unsigned long long int) var_9)) | (var_0)))))));
}
