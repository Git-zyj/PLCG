/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239365
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_7) : (var_3)))) ? (var_5) : (567520532U)))) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (3727446764U) : (567520532U)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((((/* implicit */_Bool) ((unsigned int) 3727446766U))) ? ((~((+(arr_3 [i_1] [i_0]))))) : ((+(var_3)))))));
                var_15 = ((((unsigned int) 3071114791U)) / (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_2 [i_0] [i_0]) & (arr_1 [i_0]))) != (arr_1 [i_1 - 1]))))));
            }
        } 
    } 
    var_16 *= ((unsigned int) 3349882585U);
    var_17 = (((!(((/* implicit */_Bool) (~(var_10)))))) ? (var_10) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (var_2)))) ? ((~(var_6))) : ((-(0U))))));
}
