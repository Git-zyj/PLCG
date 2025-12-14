/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205409
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */int) (short)-13268);
                var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_0 [i_0] [i_1])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4)))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) (short)5070)) > (((/* implicit */int) (short)-13268))))), (3223265953U))))))));
}
