/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194515
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
    var_15 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_11)), (var_9)))) : ((~(var_14))))), (((/* implicit */long long int) max((39105539U), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((var_7), (((/* implicit */long long int) (_Bool)1)))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (5793702530512132347LL)))))) ? (min((3671428900581533249ULL), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((int) var_9)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned int) (+(var_3)));
                var_17 = max((var_7), (((/* implicit */long long int) arr_3 [i_0])));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (-1) : (((/* implicit */int) (_Bool)1))))) : (var_3))) : (((/* implicit */unsigned long long int) var_14))));
}
