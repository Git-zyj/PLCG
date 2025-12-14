/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213265
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
    var_14 *= ((/* implicit */short) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((/* implicit */int) (signed char)127)) - (125)))));
    var_15 = var_13;
    var_16 -= ((/* implicit */signed char) var_12);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) max((var_17), ((~(((/* implicit */int) ((signed char) arr_3 [i_0] [i_0] [i_0])))))));
                arr_6 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)(-127 - 1))))) >> (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (1252260328))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)1121)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))) + (155)))));
                var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)106))))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)21552)) ? (((/* implicit */int) var_13)) : (((int) (short)1792))));
            }
        } 
    } 
}
