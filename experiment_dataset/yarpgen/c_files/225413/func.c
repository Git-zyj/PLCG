/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225413
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 |= ((/* implicit */unsigned short) (((+(((((/* implicit */long long int) 2147483647)) / ((-9223372036854775807LL - 1LL)))))) - (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)116)) || (((/* implicit */_Bool) -1878252470273463739LL))))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)18772)) % (((/* implicit */int) (signed char)127))));
            }
        } 
    } 
    var_13 |= ((/* implicit */unsigned long long int) (~(((((var_9) && (var_11))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (var_1)))) : (((/* implicit */int) var_0))))));
}
