/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237937
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
    var_15 = ((/* implicit */_Bool) min(((unsigned char)127), ((unsigned char)192)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) 1666717739);
                    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 + 2] [i_1 - 2] [i_1 - 2])) ? (arr_7 [i_1 + 1] [i_1 + 2]) : (var_9))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1 - 2] [i_1 - 2] [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned char)192)))))));
                }
            } 
        } 
    } 
    var_18 = ((((/* implicit */_Bool) 1908502304U)) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)127)) - (1371834634)))) * (var_12)))));
}
