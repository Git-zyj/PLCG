/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45570
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
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 + 1])), (((unsigned long long int) 978120856168010478LL))));
                var_15 = ((/* implicit */_Bool) var_13);
            }
        } 
    } 
    var_16 *= min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775788LL)) && (((/* implicit */_Bool) var_10)))))) : (7994679781979512890ULL))));
    var_17 = ((/* implicit */unsigned long long int) var_10);
}
