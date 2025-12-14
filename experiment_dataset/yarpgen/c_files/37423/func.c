/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37423
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned short) max((var_1), (((/* implicit */unsigned int) ((((1848375683766705639LL) % (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))))) != (((/* implicit */long long int) (~(arr_2 [i_0] [i_1])))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_0] [i_0] [7U])) ? (max((786432ULL), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)29974)) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146))))))))) ? (max((((((/* implicit */_Bool) (short)17628)) ? (4719549220554804547ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17628))))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2])))) : (((/* implicit */unsigned long long int) var_14)));
                                arr_12 [i_1] [i_3] = ((/* implicit */unsigned char) (-(min((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (unsigned short)19617))))), (arr_10 [i_0 - 2])))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((var_8) > (((/* implicit */long long int) ((/* implicit */int) var_5))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)19617)) ^ (((/* implicit */int) arr_5 [i_1] [i_3])))))))))))));
                                arr_13 [i_0] [i_0 + 1] [i_0] [i_1] [i_2] [i_3] [i_0 + 1] = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [6]))) : (arr_9 [(short)8] [(short)8] [(unsigned char)17] [i_4])))) ? (((/* implicit */int) arr_5 [i_1] [i_3])) : ((~(((/* implicit */int) (short)-17629)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_12))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) var_11);
    var_23 = ((/* implicit */unsigned char) var_15);
}
