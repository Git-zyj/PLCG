/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229187
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
    var_16 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((short) var_14))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (var_6))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_14)) >= (((((/* implicit */_Bool) 3988274921330600419ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)12))))))) >= (((/* implicit */int) arr_1 [i_1 + 1] [i_2]))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((arr_0 [i_0 - 1]) | (((/* implicit */int) (_Bool)1))))) & (max((arr_5 [i_0 - 1]), (((/* implicit */long long int) arr_0 [i_0 - 1]))))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_2 [i_0] [i_1]))));
                }
            } 
        } 
    } 
}
