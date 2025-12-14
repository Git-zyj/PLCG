/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46156
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
    var_14 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) 0LL))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)255)), (var_12)))), (0LL))) >> (((/* implicit */int) ((((/* implicit */long long int) var_13)) != (2LL))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_8);
}
