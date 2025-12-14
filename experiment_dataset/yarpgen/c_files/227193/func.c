/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227193
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) arr_5 [i_0] [(short)9]);
                var_13 &= ((/* implicit */signed char) ((((/* implicit */_Bool) -1104325006)) ? (663739175) : (((/* implicit */int) arr_2 [i_0]))));
                var_14 = ((/* implicit */unsigned char) arr_5 [i_0] [i_1]);
            }
        } 
    } 
    var_15 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) % (((/* implicit */unsigned long long int) var_9))))) || (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)216)) - (206)))))) : ((~(1116480258807994275LL))))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) - (var_8)))) ? (((((/* implicit */long long int) 663739195)) + (-3699127016272493677LL))) : (((/* implicit */long long int) 663739168))))) : (((((/* implicit */unsigned long long int) var_3)) * (min((((/* implicit */unsigned long long int) var_3)), (var_2)))))));
    var_17 ^= ((/* implicit */unsigned char) var_9);
}
