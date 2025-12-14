/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29177
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */_Bool) ((var_1) | (var_11)))) ? (min((((((/* implicit */_Bool) 3140846685U)) ? (2844702359U) : (3567896995U))), (2964316299U))) : (((unsigned int) (~(var_6))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((unsigned int) ((arr_3 [i_0 + 2] [17U]) != (arr_3 [i_0 + 2] [i_1])));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_17)))))));
                arr_9 [i_0] [i_0] = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 12U)) ? (var_9) : (var_15)))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
            }
        } 
    } 
    var_20 *= min((((var_8) | (((((/* implicit */_Bool) var_0)) ? (var_2) : (var_17))))), (((((/* implicit */_Bool) ((var_12) + (var_4)))) ? (((unsigned int) 12U)) : (min((var_12), (var_17))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), ((-(var_7)))));
}
