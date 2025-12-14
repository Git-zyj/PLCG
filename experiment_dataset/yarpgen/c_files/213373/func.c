/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213373
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) arr_0 [i_1]);
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18083668791660937364ULL)) ? (((/* implicit */int) (unsigned short)14890)) : (((/* implicit */int) (unsigned char)255))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(var_17)))) ? (3064804545U) : (var_5))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */int) var_14))))) && (((/* implicit */_Bool) max((var_15), (var_14)))))))));
    var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)-6092)) || ((_Bool)1))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) (unsigned char)154)))), (((/* implicit */int) ((unsigned short) -18))))))));
    var_23 = ((/* implicit */int) (!(var_4)));
}
