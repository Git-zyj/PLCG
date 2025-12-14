/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236249
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
    var_19 = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (4294967295U)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((3511233139U) > (((/* implicit */unsigned int) arr_2 [i_0] [i_1 - 2])))))) > (((long long int) ((((/* implicit */int) (unsigned char)134)) >> (((-1183064960) + (1183064985))))))));
                arr_4 [10U] [i_1] |= ((/* implicit */unsigned short) var_13);
                var_21 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) arr_2 [i_1 - 3] [i_1])) & (var_0)))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (-3290756290574427038LL)))) ? (((/* implicit */long long int) var_13)) : (-9223372036854775805LL))));
}
