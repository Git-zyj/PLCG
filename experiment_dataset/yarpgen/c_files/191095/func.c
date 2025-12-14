/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191095
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
    var_20 = ((/* implicit */int) min((306514098U), (((/* implicit */unsigned int) (signed char)46))));
    var_21 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned long long int) var_16))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) min((max((8625787708953523523LL), (7069250704407851797LL))), (((((/* implicit */_Bool) 5245554452293405965LL)) ? (5245554452293405965LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))));
                arr_6 [(unsigned char)17] = ((/* implicit */unsigned char) arr_0 [i_0]);
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
}
