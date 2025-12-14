/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202901
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
    for (unsigned char i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */long long int) arr_2 [i_0] [i_1] [i_1]);
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)216)), ((short)20917)))) ? (min(((-(3165759054451352716ULL))), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0 + 1])))) : ((+(((3165759054451352716ULL) * (15280985019258198899ULL)))))))));
                var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)9241))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (14306149604827794851ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
}
