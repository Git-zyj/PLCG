/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210520
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
    var_19 = ((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (signed char)-6)))))));
    var_20 = ((/* implicit */_Bool) (-(max((((((/* implicit */_Bool) (signed char)-106)) ? (-1241558860) : (((/* implicit */int) var_13)))), ((+(var_18)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_21 *= ((/* implicit */unsigned int) ((var_16) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((var_10) >> (((((/* implicit */int) arr_1 [i_1 + 2])) - (84))))))));
            var_24 |= ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (signed char)-106)));
        }
    }
    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_17)))))));
    var_26 -= ((/* implicit */short) ((((/* implicit */long long int) var_12)) < (var_9)));
}
