/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232887
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
    var_17 = (~(var_9));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-59))) - (var_5))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)-92)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_1 [i_0]))) : (((/* implicit */long long int) var_8))))));
                var_19 &= ((/* implicit */unsigned char) var_7);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((min((((21LL) - (((/* implicit */long long int) -94713141)))), (((/* implicit */long long int) (unsigned char)191)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (1783687976) : (-1)))) : (var_12)))));
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (signed char)-48))));
}
