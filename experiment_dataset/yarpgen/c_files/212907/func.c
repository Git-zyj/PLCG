/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212907
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
    var_11 = ((/* implicit */long long int) (-(11783669274682630984ULL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) arr_1 [i_0] [i_0]))));
                var_13 ^= ((((((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (signed char)-6)))) + (2147483647))) << (((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0])) || (((/* implicit */_Bool) var_4)))))) - (1))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) 4206857646783213407LL);
}
