/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225781
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                arr_5 [9LL] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) var_13))) + (var_4)));
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_0 [i_1]))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [(unsigned char)13] [(unsigned char)13] [i_1])) % (((/* implicit */int) max((((/* implicit */unsigned char) var_12)), (var_9))))));
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-18671)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (short)-17384))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((var_11) ? (max((((var_11) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))), (((((/* implicit */int) var_13)) - (((/* implicit */int) var_12)))))) : (min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) (_Bool)1))))));
}
