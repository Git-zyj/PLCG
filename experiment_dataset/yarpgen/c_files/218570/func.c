/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218570
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (short)28201)) + (((/* implicit */int) (short)-28201))))))) ? (((((/* implicit */int) ((unsigned char) var_1))) >> (((var_13) - (1032672451))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) var_2))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1])) ? (arr_2 [i_0] [i_1] [(short)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28200)))));
                    var_17 = ((/* implicit */short) max((((((var_4) + (2147483647))) >> ((((~(((/* implicit */int) var_7)))) + (55))))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-28201)))))));
                }
            } 
        } 
    } 
}
