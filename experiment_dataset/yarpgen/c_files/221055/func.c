/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221055
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)62)) * (((/* implicit */int) (signed char)7))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) + (2251799813685246ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16705))))) * (((/* implicit */unsigned long long int) var_16))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1 - 3]))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) (+(((/* implicit */int) var_6))));
    var_20 = ((/* implicit */int) var_8);
}
