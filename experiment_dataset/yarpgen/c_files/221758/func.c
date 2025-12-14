/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221758
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (unsigned short)42797))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (4257850900U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))))) ? ((+(arr_2 [i_0]))) : (((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) (short)15089)) - (15059)))))));
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned int) (signed char)19)) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55181)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)40873), ((unsigned short)0))))) : (((arr_3 [(signed char)9] [i_1]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0]) : (((/* implicit */int) (signed char)-19)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
}
