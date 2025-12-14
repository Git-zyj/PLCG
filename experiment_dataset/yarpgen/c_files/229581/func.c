/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229581
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
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_7 [i_0 - 2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_0 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 2147483647)))) : (var_8)));
                arr_8 [i_0] [i_1] = ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]);
                var_11 += ((/* implicit */short) ((_Bool) ((_Bool) ((int) arr_4 [i_0] [i_0]))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) var_6);
    var_13 = ((/* implicit */unsigned short) ((long long int) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)111)))) : (var_8))));
}
