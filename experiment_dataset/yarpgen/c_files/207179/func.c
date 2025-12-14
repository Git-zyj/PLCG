/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207179
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0] [i_1 - 2]))))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((~(3101626965567560866LL))) : (((/* implicit */long long int) 4294967283U)))), (9223372036854775807LL)));
                arr_8 [i_0] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_4 [i_0]), (((/* implicit */unsigned int) arr_0 [i_1 + 1] [i_1 + 2]))))) ? (((long long int) var_13)) : (arr_1 [i_0] [i_0])))) : (max((arr_5 [i_1 + 1] [i_1]), (((/* implicit */unsigned long long int) (short)20082))))));
            }
        } 
    } 
    var_17 *= ((/* implicit */_Bool) var_5);
}
