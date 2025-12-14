/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31645
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
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_16)) : (var_5))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_0)), (var_6)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(signed char)14] [1U] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) ((var_19) < (var_10))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (((arr_2 [i_0]) ? (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])) : (((long long int) arr_5 [i_0] [10])))));
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (-2147483640) : (arr_4 [(unsigned char)11] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */short) (+(var_8)));
}
