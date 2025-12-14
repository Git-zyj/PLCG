/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213821
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
    var_12 = min(((((~(var_1))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_6)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) && (((/* implicit */_Bool) 32505856))))));
    var_13 &= ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)104)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */int) (signed char)8);
                var_15 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((var_9) + (((/* implicit */int) (unsigned char)161))))) == (arr_0 [i_0] [i_1 + 1]))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))) : (min((((/* implicit */unsigned int) min((((/* implicit */int) var_3)), (var_10)))), (((arr_4 [i_1]) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13365)))))))));
                var_16 = ((/* implicit */unsigned char) ((int) ((unsigned int) (_Bool)1)));
            }
        } 
    } 
}
