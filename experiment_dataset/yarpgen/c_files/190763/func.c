/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190763
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
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 |= ((/* implicit */_Bool) max((min((var_19), (((/* implicit */int) ((short) arr_3 [i_0 - 1] [i_1] [i_0]))))), (max((((((/* implicit */_Bool) 1943351594U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (short)25713))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)1922))));
    var_23 = ((/* implicit */_Bool) min(((signed char)-44), (min((((/* implicit */signed char) ((_Bool) (unsigned short)49260))), (var_15)))));
    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (unsigned short)23071))));
}
