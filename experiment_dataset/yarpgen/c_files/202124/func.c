/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202124
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
    var_13 = ((/* implicit */short) ((((/* implicit */int) var_12)) != (((/* implicit */int) ((((/* implicit */_Bool) (signed char)72)) || (((/* implicit */_Bool) (short)15059)))))));
    var_14 = (short)0;
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_15 |= ((/* implicit */short) max((((((/* implicit */int) (signed char)98)) >> (((((/* implicit */int) (short)-15038)) + (15062))))), (((/* implicit */int) (short)0))));
                var_16 += ((short) (short)15059);
                var_17 += ((/* implicit */short) ((((/* implicit */int) (short)4)) <= (((/* implicit */int) ((((/* implicit */_Bool) (short)15059)) && (((/* implicit */_Bool) (short)-4117)))))));
            }
        } 
    } 
}
