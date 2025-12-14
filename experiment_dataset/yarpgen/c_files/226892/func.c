/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226892
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) | (max((((/* implicit */unsigned long long int) (signed char)44)), (3617455563238766275ULL)))));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 16777215))))) : (var_8))))))));
                var_14 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (var_8)))), (var_1)));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
    var_16 = ((/* implicit */signed char) var_6);
    var_17 -= ((/* implicit */unsigned long long int) var_7);
}
