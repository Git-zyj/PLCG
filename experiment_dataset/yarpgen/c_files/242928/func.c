/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242928
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
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) max((var_11), (((3535684602U) >> (((976883607) - (976883584)))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_8);
            }
        } 
    } 
    var_12 = ((/* implicit */int) ((3176654527U) << (((((/* implicit */int) (short)-22412)) + (22436)))));
    var_13 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (3535684602U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -989404262)))))) ? ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)25636)) : (((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) -989404292)) ? (min((((/* implicit */int) var_3)), (var_2))) : (((((/* implicit */_Bool) 801922388U)) ? (((/* implicit */int) (_Bool)1)) : (2)))))));
}
