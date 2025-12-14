/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246092
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */long long int) var_7);
                    var_11 = (-((+(((/* implicit */int) (short)30458)))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) (short)-30458);
    var_13 = ((/* implicit */_Bool) max((((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) == (-949247727957111642LL))))), ((+(((((/* implicit */int) var_7)) & (((/* implicit */int) (signed char)127))))))));
}
