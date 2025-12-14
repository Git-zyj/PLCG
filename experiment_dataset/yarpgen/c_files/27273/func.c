/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27273
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (_Bool)0)))));
                var_17 = min((((/* implicit */int) var_8)), (((((/* implicit */int) (short)2196)) << (((((/* implicit */int) (signed char)(-127 - 1))) + (138))))));
            }
        } 
    } 
    var_18 -= ((/* implicit */int) ((((min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-66))))), (((var_11) + (((/* implicit */long long int) var_15)))))) + (9223372036854775807LL))) >> (((min(((+(((/* implicit */int) (unsigned char)255)))), (((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) (short)-15450)) : (((/* implicit */int) (unsigned short)55088)))))) + (15510)))));
}
