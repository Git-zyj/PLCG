/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235233
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
    var_17 -= ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_12)))) : (var_2))))));
            var_19 = ((/* implicit */long long int) (~(var_16)));
            arr_5 [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(var_16)))) + (var_14)));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_13))));
            arr_6 [i_0] = ((/* implicit */int) var_13);
        }
        var_21 = ((/* implicit */int) min((var_21), (var_15)));
    }
}
