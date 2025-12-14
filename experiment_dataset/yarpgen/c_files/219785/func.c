/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219785
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
    var_14 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) var_9);
                var_16 *= (((-(((/* implicit */int) var_10)))) / ((+((+(((/* implicit */int) var_2)))))));
                arr_5 [0LL] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_1] [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_1] [i_0])) - (242)))))), (max((((/* implicit */unsigned long long int) arr_1 [(unsigned char)8])), (var_5))))));
                arr_6 [i_0] = ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (signed char)91)));
            }
        } 
    } 
    var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_0), (var_4)))), (min((((/* implicit */int) var_9)), (var_13)))))) ? (((/* implicit */int) (short)26140)) : (((/* implicit */int) var_10))));
    var_18 = ((/* implicit */short) max((var_5), (var_5)));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) max((var_12), (((/* implicit */short) var_11))))) << (((((min((var_3), (((((/* implicit */int) var_11)) - (var_3))))) + (1598502543))) - (12)))));
}
