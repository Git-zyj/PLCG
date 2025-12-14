/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33406
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
    var_10 *= ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((((/* implicit */int) arr_1 [(short)16] [i_1 - 3])) <= (((/* implicit */int) min((arr_2 [0] [i_1]), (arr_2 [0ULL] [(unsigned char)16])))))) ? (((/* implicit */int) ((var_5) >= (((/* implicit */long long int) ((/* implicit */int) (short)-18436)))))) : (((/* implicit */int) (_Bool)1)))))));
                arr_4 [i_0] = (short)-18453;
                var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (1521865459))) : ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                var_13 = ((/* implicit */int) 2342264656U);
            }
        } 
    } 
}
