/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37664
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
    var_15 = ((/* implicit */int) (unsigned short)50906);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) (+(var_7)));
                var_17 = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0] [i_0]))), (((var_10) >> (((arr_0 [i_0]) + (281001893712612038LL))))))));
            }
        } 
    } 
}
