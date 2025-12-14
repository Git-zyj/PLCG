/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47193
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
    var_19 = (!(var_14));
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)95)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [i_1] &= ((/* implicit */short) ((_Bool) (((~(((/* implicit */int) arr_3 [i_1])))) ^ (((/* implicit */int) arr_2 [i_0] [(short)21] [i_0])))));
                var_21 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                var_22 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) max((arr_3 [i_0]), (((/* implicit */unsigned char) (_Bool)0))))), (((short) var_5)))))) + (var_17)));
                var_23 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_0]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) ? (max((((/* implicit */unsigned long long int) var_13)), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((unsigned long long int) var_16)) : (min((var_2), (((/* implicit */unsigned long long int) var_6))))));
}
