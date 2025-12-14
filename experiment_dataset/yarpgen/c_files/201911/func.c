/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201911
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
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_7)), (((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    var_13 += ((/* implicit */_Bool) var_5);
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) max((((unsigned int) var_1)), (((/* implicit */unsigned int) var_0))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((7808507643853511976ULL) - (((/* implicit */unsigned long long int) ((int) var_9)))))));
                    var_16 = ((/* implicit */_Bool) var_3);
                }
            } 
        } 
    } 
}
