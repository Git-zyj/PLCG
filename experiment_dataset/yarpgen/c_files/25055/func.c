/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25055
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
    var_20 = ((/* implicit */unsigned short) min((var_8), (((/* implicit */signed char) var_1))));
    var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) ((_Bool) var_19))) : (((/* implicit */int) var_0)))) >> (((((/* implicit */int) var_18)) + (26)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */_Bool) ((int) ((unsigned long long int) (short)25421)));
                arr_5 [i_0] = ((/* implicit */_Bool) var_9);
                arr_6 [(short)0] [(short)0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (arr_0 [i_0] [(signed char)18])))) ? ((+(arr_1 [i_1]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-13)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))) : (((/* implicit */int) ((unsigned char) arr_0 [i_0 + 2] [i_1])))));
            }
        } 
    } 
}
