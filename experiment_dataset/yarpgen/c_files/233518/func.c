/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233518
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209))) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_6)) : ((~(var_0)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                var_11 = ((unsigned long long int) ((arr_2 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1 - 3]))) : (arr_3 [i_0] [i_0])));
                var_12 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 2253677501U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)5085)))))) : (((((/* implicit */_Bool) (signed char)127)) ? (5659210089236108891ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
