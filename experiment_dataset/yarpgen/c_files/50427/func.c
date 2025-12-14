/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50427
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] [i_0 + 3] = min((((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)1008)));
        arr_5 [i_0] [i_0] = ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || ((_Bool)1))))) - (max((var_18), (((/* implicit */long long int) (short)-26975)))))), (max(((~(var_11))), (((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)-26975))))))));
        arr_6 [i_0] = ((/* implicit */_Bool) var_13);
    }
    var_20 = ((/* implicit */unsigned short) var_5);
    var_21 = var_16;
    var_22 = ((/* implicit */unsigned char) (short)-26964);
}
