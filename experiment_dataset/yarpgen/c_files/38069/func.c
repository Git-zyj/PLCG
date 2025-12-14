/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38069
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
    var_10 = ((((/* implicit */_Bool) ((unsigned int) 976804673U))) ? (((((unsigned int) 4034110532U)) + (var_6))) : (var_1));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_11 = ((unsigned int) ((((/* implicit */_Bool) ((unsigned int) 4231556991U))) ? (((unsigned int) 3040936364U)) : (((unsigned int) 1889060912U))));
                var_12 = ((/* implicit */unsigned int) ((2405906388U) < (2494763873U)));
                var_13 = ((/* implicit */unsigned int) max((var_13), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_1 [i_1]) : (((((/* implicit */_Bool) 3318162622U)) ? (2405906374U) : (3139959787U)))))) ? (((unsigned int) ((unsigned int) arr_2 [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_1 [i_1]) : (1800203423U)))))));
            }
        } 
    } 
}
