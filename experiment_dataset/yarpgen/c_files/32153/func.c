/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32153
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_14 ^= ((/* implicit */_Bool) ((874304646U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41141)))));
                var_15 ^= ((/* implicit */long long int) var_7);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_4)), (13LL))) | (1503461738693338382LL)))), (((((unsigned long long int) var_13)) + (((/* implicit */unsigned long long int) var_5))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_4);
}
