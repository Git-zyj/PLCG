/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37243
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
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_12 = max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-248801594753999041LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(-248801594753999041LL))))))));
                arr_4 [(unsigned short)16] [i_0 + 1] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)34198)) / (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34198))) : (-248801594753999057LL)))));
            }
        } 
    } 
    var_13 = ((((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) (unsigned short)20367)))) <= (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_9))))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121)))))) ? (((((-248801594753999026LL) + (9223372036854775807LL))) >> (((248801594753999041LL) - (248801594753999014LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
}
