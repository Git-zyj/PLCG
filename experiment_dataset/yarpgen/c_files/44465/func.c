/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44465
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) arr_1 [i_0 + 2]))));
                var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_13)))), ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2]))) | (arr_4 [i_0] [i_1] [i_1])))))));
                arr_5 [i_0] [i_0 - 1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(arr_4 [i_1] [i_1] [i_0])))) ? (((/* implicit */int) var_9)) : (((var_1) * (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_12)) != (var_1)))) ^ (((/* implicit */int) var_0))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (((var_5) * (((/* implicit */unsigned int) var_1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_1))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)3108))))))))));
}
