/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220374
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
    var_17 = ((/* implicit */long long int) ((((max((-3616563792600029489LL), (((/* implicit */long long int) var_15)))) * (((/* implicit */long long int) (~(((/* implicit */int) var_3))))))) > (((/* implicit */long long int) ((/* implicit */int) max((var_1), (var_1)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [(signed char)1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_1])) << (((((/* implicit */int) (signed char)67)) - (63)))))) ? (((var_15) / (((/* implicit */int) (signed char)-84)))) : ((~(((/* implicit */int) arr_2 [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_14))))) ? (((/* implicit */long long int) ((int) var_11))) : (min((((/* implicit */long long int) (signed char)-82)), (var_2))))) : (((/* implicit */long long int) var_9))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - (arr_3 [i_0] [i_1])))) ? (((((/* implicit */int) (signed char)-64)) ^ (2095104))) : (((int) 1026922482U)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24576)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13336))) : (var_2)))) ? (-1838273557) : (((/* implicit */int) (unsigned short)15))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)106)) && (((/* implicit */_Bool) var_14))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2097151)))))) != (max((1148417904979476480LL), (var_2))))))));
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)16701))));
            }
        } 
    } 
}
