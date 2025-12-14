/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198912
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
    var_10 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) arr_2 [i_0])))))));
        var_11 = ((/* implicit */signed char) ((_Bool) max(((signed char)-117), (var_2))));
        var_12 = min((((/* implicit */long long int) var_8)), (var_1));
    }
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_0)), (var_1))), (((/* implicit */long long int) var_6))))) ? ((~(((unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
}
