/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197895
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_8);
                arr_6 [i_0] [i_1] |= ((/* implicit */long long int) max(((-(1010197589U))), (((/* implicit */unsigned int) (short)-15588))));
                arr_7 [i_1] = ((/* implicit */unsigned char) ((-998821611) + (((((/* implicit */_Bool) var_0)) ? (1871711172) : (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) ((var_1) >> (((((/* implicit */_Bool) max((2170682305U), (2170682328U)))) ? (min((((/* implicit */int) (unsigned char)0)), (var_4))) : (2097151)))));
    var_13 = ((/* implicit */signed char) ((max((var_9), (((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) (short)0)) : (1677430049))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 12260697618976662064ULL)))))));
}
