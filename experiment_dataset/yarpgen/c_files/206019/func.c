/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206019
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
    for (short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_17 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_4 [(_Bool)1]), (arr_4 [(signed char)0]))))))), (min((((/* implicit */unsigned int) ((unsigned short) arr_1 [i_0] [i_1]))), (max((2068667834U), (((/* implicit */unsigned int) var_4))))))));
                var_18 += ((/* implicit */short) max(((-(((/* implicit */int) ((((/* implicit */int) (signed char)28)) <= (((/* implicit */int) (signed char)125))))))), (((/* implicit */int) (signed char)28))));
            }
        } 
    } 
    var_19 *= ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_15)))), (((((/* implicit */_Bool) (signed char)-29)) || (((/* implicit */_Bool) (unsigned short)63969)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15))))))))));
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6)))))));
}
