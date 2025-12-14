/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34311
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((18446744073709551615ULL) + (18446744073709551615ULL))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_14 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((var_2) != (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 - 1])))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_13 [(unsigned char)12] [i_1] [i_1] [i_4] = arr_2 [i_1] [(unsigned char)19];
                                var_15 = ((/* implicit */long long int) arr_7 [i_0 - 1] [i_0] [i_0 - 1] [i_1]);
                                var_16 += (((_Bool)1) ? (((arr_4 [i_2] [i_2] [i_2]) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) : ((~(arr_7 [i_0 - 1] [i_1] [i_3] [i_3]))))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [(signed char)3] [i_3] [i_4])) >= (((((/* implicit */_Bool) 16024622021171780047ULL)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_9))))) ? (((var_0) + (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))))), (((/* implicit */long long int) ((short) var_6)))));
}
