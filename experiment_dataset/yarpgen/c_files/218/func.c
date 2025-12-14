/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((_Bool) min((((((/* implicit */int) arr_3 [2U] [i_0] [i_1])) / (((/* implicit */int) var_6)))), (((/* implicit */int) ((unsigned short) arr_1 [i_0])))))))));
                arr_6 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_4 [i_1] [i_0] [i_0]), (arr_4 [i_1] [(_Bool)1] [(_Bool)1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((signed char) (unsigned short)62240));
}
