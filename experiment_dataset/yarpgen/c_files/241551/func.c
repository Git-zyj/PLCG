/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241551
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0]);
                var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [(unsigned short)5]))));
                var_21 *= ((/* implicit */short) (((((+(arr_1 [i_1]))) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1]))))) - (((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [(unsigned short)4]))))) ? (arr_1 [i_0 + 2]) : (arr_1 [i_1])))));
            }
        } 
    } 
    var_22 *= ((/* implicit */short) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (((var_15) % (var_15)))))));
    var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_7)))) ? ((+(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) (short)2048))))))) * (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5)))));
}
