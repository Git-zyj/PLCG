/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203568
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
    var_11 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))), (min((((/* implicit */unsigned long long int) (signed char)-13)), (1877053588710612607ULL))))), (((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) (short)32760)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_12 += ((/* implicit */long long int) var_5);
                var_13 = ((/* implicit */signed char) (~(max(((+(var_0))), ((~(((/* implicit */int) var_5))))))));
                var_14 -= min((((min((((/* implicit */unsigned long long int) var_10)), (var_3))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (var_6))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)28594))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_7);
}
