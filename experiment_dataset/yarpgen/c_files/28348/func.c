/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28348
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
    var_10 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
    var_11 = ((/* implicit */signed char) (((+(((/* implicit */int) (signed char)-98)))) & (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32256)))))));
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) min((((((/* implicit */int) (unsigned short)32377)) - (((/* implicit */int) arr_0 [i_1] [i_1])))), (((/* implicit */int) arr_2 [i_0])))))));
            }
        } 
    } 
}
