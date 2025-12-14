/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209456
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0 - 1] [i_1 - 3]);
                arr_6 [i_0] = ((long long int) (!(((/* implicit */_Bool) ((long long int) (unsigned char)138)))));
                var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)18216)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
    var_15 -= ((/* implicit */int) var_0);
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_12)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) (unsigned char)118))))))) / (var_3)));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)38)) || ((_Bool)0)));
}
