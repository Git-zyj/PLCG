/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210715
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
    var_17 = ((/* implicit */short) ((((/* implicit */int) ((short) (-(((/* implicit */int) (short)-27990)))))) - (((/* implicit */int) min((((short) var_13)), (min((var_2), ((short)-17337))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) max((max((((/* implicit */int) max((var_12), ((short)-1)))), (((((/* implicit */_Bool) (short)28)) ? (((/* implicit */int) (short)-4)) : (((/* implicit */int) (short)-1)))))), (((/* implicit */int) ((short) arr_4 [i_0 + 1])))));
                var_19 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), ((+(((/* implicit */int) arr_0 [i_0 + 1]))))));
            }
        } 
    } 
    var_20 |= ((short) var_13);
}
