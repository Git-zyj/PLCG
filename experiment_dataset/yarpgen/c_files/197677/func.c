/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197677
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_3);
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((var_3) ? (((/* implicit */int) (unsigned char)30)) : (var_10))), (((/* implicit */int) var_13))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_5 [i_1] [i_1]))))), (var_4))))));
                arr_10 [i_0] [i_1] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) ((short) arr_3 [i_1]))) : ((-(((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */int) ((((unsigned int) arr_6 [i_0] [i_1])) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11)))))))) : (((/* implicit */int) (!(arr_1 [i_1]))))));
                arr_11 [i_1] = 1273796806U;
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_0)))), ((+(var_4))))) / (var_4)));
}
