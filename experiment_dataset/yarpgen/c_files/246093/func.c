/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246093
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
    var_18 = ((/* implicit */_Bool) max((var_9), ((~(((long long int) var_16))))));
    var_19 = ((/* implicit */long long int) var_16);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((((max((((/* implicit */long long int) (short)-23220)), (127LL))) << (((10221636874291618536ULL) - (10221636874291618515ULL))))), (((/* implicit */long long int) (-2147483647 - 1)))));
                var_21 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) -2147483640)) : (var_9))))), (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 10021620046830777893ULL))))), ((~(((/* implicit */int) var_11)))))))));
                arr_6 [i_0] = min((((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) >> (((((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) - (31564))))), (((/* implicit */int) (_Bool)1)));
                var_22 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned short) (_Bool)1))))) << (((((/* implicit */int) var_15)) - (14179)))))), (min((var_0), (((/* implicit */long long int) var_12))))));
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_1]), (arr_2 [i_0]))))) / (3590359107U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [(short)1] [i_0])))));
            }
        } 
    } 
}
