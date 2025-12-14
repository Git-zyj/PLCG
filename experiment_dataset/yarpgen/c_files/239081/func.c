/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239081
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
    var_12 = min(((+(((/* implicit */int) var_9)))), (((/* implicit */int) (unsigned short)37239)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((arr_3 [i_0] [8]), ((+(((/* implicit */int) arr_2 [i_0] [i_1 - 1] [i_1 + 1]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1073741824)) ? ((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_2])))) : (((/* implicit */int) (short)-23208))));
                            arr_8 [i_0] [(short)17] [i_0] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 2428254133U)) ? (((/* implicit */int) (short)-23208)) : (((/* implicit */int) (short)-23208)))), (((/* implicit */int) (short)-23230))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) var_11);
}
