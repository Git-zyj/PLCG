/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2562
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                arr_6 [i_0] [10LL] = ((/* implicit */_Bool) var_2);
                var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((_Bool) var_6)))) ? (((/* implicit */unsigned long long int) (+(572807089)))) : (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (arr_0 [i_0] [(_Bool)0])))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_7);
}
