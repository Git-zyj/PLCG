/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197447
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) (short)-24841)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned long long int) (+((+(((((/* implicit */long long int) ((/* implicit */int) (signed char)16))) / (-3947198144386005258LL)))))));
                                var_21 = ((int) arr_2 [i_0]);
                                var_22 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned short) arr_12 [i_0] [i_1] [(short)7] [i_3] [i_4] [i_1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (268435452)))) : ((~(arr_6 [i_0] [i_0] [i_0] [i_0]))))), ((~(max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (var_5)))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((arr_5 [i_1] [i_1] [i_1] [i_1]) << (((var_7) - (1386731468))))) : (((/* implicit */unsigned int) 2147483647))))), (min((var_9), (((/* implicit */unsigned long long int) arr_11 [i_2] [i_1] [i_1] [i_0]))))));
                    arr_16 [i_0] [i_0] [(short)13] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [(short)5])), (((((/* implicit */_Bool) var_17)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [6ULL] [6ULL] [i_1] [6ULL] [6ULL] [i_0])))))))) ? (max((((((/* implicit */int) (signed char)127)) >> (((((/* implicit */int) arr_3 [i_1] [i_1])) - (163))))), (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [4LL] [i_0] [i_0] [i_0] [(unsigned char)1])) > (1386855972)))))) : (((/* implicit */int) ((unsigned short) (short)-14821)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) ((short) min((min((((/* implicit */unsigned long long int) (short)2085)), (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483634)) ? (var_19) : (((/* implicit */unsigned int) -1386855972))))))));
}
