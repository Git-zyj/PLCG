/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191263
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
    for (signed char i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */short) 31149970);
                arr_5 [i_1 - 2] [i_0 - 4] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) var_0)))), (-31149970)));
            }
        } 
    } 
    var_13 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)50584))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) -1130353820))))))) : (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) (unsigned char)137))))) ? (((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) var_9)) : (-31149970))) : (((((/* implicit */_Bool) (unsigned short)15)) ? (var_10) : (((/* implicit */int) var_5))))))));
}
