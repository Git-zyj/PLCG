/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220317
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
    var_19 = ((/* implicit */short) var_13);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) var_9);
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1082567513U)) ? (max((((/* implicit */unsigned long long int) var_3)), (arr_2 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775784LL)) ? (((/* implicit */unsigned long long int) 3212399783U)) : (9930515331826408824ULL)))) ? (min((((/* implicit */long long int) var_12)), (arr_0 [i_0] [i_1]))) : (((/* implicit */long long int) 3212399791U)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((unsigned long long int) var_13));
}
