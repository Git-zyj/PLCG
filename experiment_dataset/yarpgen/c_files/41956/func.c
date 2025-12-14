/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41956
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
    var_17 |= ((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_18 += ((/* implicit */unsigned short) arr_4 [i_0]);
                            var_19 = ((/* implicit */unsigned short) arr_9 [i_0] [(short)3] [i_0]);
                            var_20 |= ((/* implicit */unsigned short) ((-5790462830092041604LL) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1073709056LL))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] [i_1] = var_7;
            }
        } 
    } 
}
