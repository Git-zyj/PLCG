/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49995
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
    var_13 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_14 ^= ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((var_3) ? (3938796939U) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)21503), (((/* implicit */short) var_3))))))))));
                var_15 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-47))));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (((!((_Bool)1))) ? ((~(777495785U))) : (arr_4 [i_0 - 1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */_Bool) var_7)) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) 4294967288U)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
}
