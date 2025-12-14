/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231700
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
    for (short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0 + 2] [(short)2])) ? (var_9) : (min((((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [(short)6] [(short)10])), (18446744073709551615ULL)))));
                                var_16 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 2] [i_0 - 2] [i_0]))) < (((18ULL) + (((/* implicit */unsigned long long int) 1597929851)))))))));
                                var_17 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_0] [i_0] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_2] [i_0 + 1]))) : (arr_3 [0U] [i_1 - 1] [i_0 - 1]))));
                            }
                        } 
                    } 
                } 
                var_18 = arr_7 [i_0] [i_0 + 2] [i_0] [16] [i_0 + 2];
                var_19 = max((((/* implicit */short) ((unsigned char) ((arr_0 [i_0]) / (((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_0] [i_0] [i_0])))))), (arr_7 [i_0 - 1] [i_0] [i_0 - 1] [i_1 - 1] [i_0]));
                var_20 = ((/* implicit */short) arr_10 [i_1] [i_1 - 1] [i_0] [i_0] [i_0]);
                var_21 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
            }
        } 
    } 
    var_22 += ((/* implicit */long long int) var_11);
}
