/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230379
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
    var_13 = ((/* implicit */int) var_5);
    var_14 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_12)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (-25) : (((/* implicit */int) var_12)))) : ((((_Bool)0) ? (((var_2) ? (arr_5 [i_0] [i_1] [i_0]) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((_Bool) var_2)))))));
                arr_7 [i_0] = ((/* implicit */int) 0U);
                arr_8 [i_0] [i_0] = arr_1 [i_0];
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) (signed char)0);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */signed char) var_0))))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) >= (var_4))))))) : (((unsigned int) (signed char)-1))));
}
