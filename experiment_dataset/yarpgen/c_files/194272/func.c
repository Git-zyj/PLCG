/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194272
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
    var_16 = ((/* implicit */_Bool) ((signed char) ((short) min((((/* implicit */int) var_7)), (-1146294029)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) arr_1 [i_1]);
                var_18 = ((/* implicit */short) ((signed char) (~(((/* implicit */int) min(((signed char)99), ((signed char)-111)))))));
                var_19 *= ((/* implicit */unsigned short) var_5);
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((min((1146294011), (((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) var_2))))))), (((int) max((var_1), (((/* implicit */signed char) var_11)))))));
}
