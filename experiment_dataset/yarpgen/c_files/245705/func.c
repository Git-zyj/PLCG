/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245705
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned char) ((signed char) (~(var_1))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
                arr_5 [(unsigned short)15] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned long long int) var_4)));
                arr_6 [(_Bool)1] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
                var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_1 [i_1])) : (((((/* implicit */int) var_5)) % (((/* implicit */int) (_Bool)1))))))) | (9223372036854775807LL)));
            }
        } 
    } 
    var_22 -= ((/* implicit */_Bool) var_9);
    var_23 = ((/* implicit */unsigned long long int) ((((var_12) + (2147483647))) >> (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (var_15))) - (9223372036854775789ULL)))));
}
