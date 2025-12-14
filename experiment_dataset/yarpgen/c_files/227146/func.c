/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227146
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)75))) > (4611686018427387903LL)));
                var_14 = ((/* implicit */long long int) min((var_14), ((((-(arr_2 [i_0] [(short)6]))) - (min((arr_4 [i_0]), (((/* implicit */long long int) (short)-31072))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_9);
    var_16 += ((/* implicit */long long int) var_12);
}
