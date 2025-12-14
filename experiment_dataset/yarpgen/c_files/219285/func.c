/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219285
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_7)))))) ? (((int) ((var_7) || (((/* implicit */_Bool) (short)4095))))) : ((+(((/* implicit */int) ((unsigned char) -8LL))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_6))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)32756)) - (((/* implicit */int) (unsigned short)0)))))));
                arr_5 [i_0] [i_0] [i_1 - 1] = (+(((long long int) var_6)));
            }
        } 
    } 
}
