/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194018
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
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) 373995125)))));
    var_14 |= ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59076))) >= (min((((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))), (min((((/* implicit */unsigned long long int) (signed char)108)), (14884339679085940148ULL)))))));
                var_16 = (~(((/* implicit */int) ((_Bool) ((unsigned int) var_1)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((int) var_6)) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (var_7)))))), (((((/* implicit */_Bool) ((3562404394623611461ULL) * (14884339679085940148ULL)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_8))) : (var_10)))));
    var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((14884339679085940155ULL) ^ (14884339679085940155ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59092))))), (((/* implicit */unsigned long long int) var_5))));
}
