/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51206
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_5) : (((/* implicit */long long int) 0))))))) + (var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                var_13 -= ((/* implicit */long long int) arr_2 [i_0] [i_0] [(_Bool)1]);
                var_14 = ((/* implicit */signed char) arr_0 [i_1 - 4]);
                var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
                var_16 &= ((/* implicit */unsigned short) var_5);
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_3);
}
