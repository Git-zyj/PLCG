/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230374
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
    var_15 = ((/* implicit */_Bool) min((4294967295U), (906104346U)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_16 += ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) : (max((15U), (((/* implicit */unsigned int) (signed char)-1)))));
                arr_5 [i_0 + 2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 16670373524443746232ULL)) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) var_0))))))) > (9223372036854775807LL)));
            }
        } 
    } 
}
