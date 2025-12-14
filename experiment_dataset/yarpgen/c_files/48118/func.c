/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48118
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_17 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_2] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (25))) / (((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (-2147483644) : (((/* implicit */int) arr_6 [i_1] [i_1]))))));
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (var_8))) * (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))) ? (((unsigned long long int) min((((/* implicit */short) arr_0 [i_1])), ((short)-2218)))) : (((/* implicit */unsigned long long int) var_0)))))));
                }
            } 
        } 
    } 
    var_19 = ((var_2) | ((~(((/* implicit */int) var_13)))));
    var_20 = (((~(var_15))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)10)) : (25)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-2235)) || (((/* implicit */_Bool) 25))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))));
}
