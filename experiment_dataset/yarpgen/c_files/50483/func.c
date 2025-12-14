/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50483
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
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 4079771430U))))) >> (((((((/* implicit */_Bool) 6480590817331022824ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))) : (2899597795U))) - (4294967223U)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_1]))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]);
                var_16 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0 + 1])))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((_Bool) var_8));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) var_11))), (((long long int) 11966153256378528791ULL))))) ? (6480590817331022824ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
}
