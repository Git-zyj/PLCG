/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24481
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
    var_11 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(unsigned char)4] &= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) <= (var_10))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(9223372036854775807LL)))) || (((/* implicit */_Bool) var_4)))))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */long long int) (~((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (var_2)))))));
            }
        } 
    } 
}
