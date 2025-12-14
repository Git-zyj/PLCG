/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51271
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (short)-1))));
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0] [16ULL])) : (((/* implicit */int) arr_0 [i_1] [i_0]))))) ? ((+(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) arr_0 [i_0] [i_1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (signed char)-127)))), (((/* implicit */int) ((((/* implicit */int) var_12)) <= (var_7)))))) & (((/* implicit */int) var_10))));
    var_22 = ((/* implicit */unsigned long long int) max(((short)32750), ((short)-32750)));
}
