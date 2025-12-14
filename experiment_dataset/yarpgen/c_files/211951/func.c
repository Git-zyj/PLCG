/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211951
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_16 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                arr_7 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_4 [i_0]), (arr_0 [i_0])))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((var_2), (((/* implicit */short) var_13))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((var_17), (var_5)));
    var_18 = ((/* implicit */int) (((_Bool)1) ? (15701493539358474427ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)52)))));
}
