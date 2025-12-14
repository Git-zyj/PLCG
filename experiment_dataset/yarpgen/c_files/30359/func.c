/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30359
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
    var_20 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((unsigned int) var_10))) / ((-(8254126437404884739LL))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (short)-23878)))))));
    var_21 = (short)-23878;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_1 [i_1] [i_0]);
                arr_7 [i_0] [i_0] [(short)4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23878)) ? (((((/* implicit */long long int) 1)) & (7009786753458823820LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-23887)))))) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)237)) && (((/* implicit */_Bool) var_16)))))))));
            }
        } 
    } 
}
