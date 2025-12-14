/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199068
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
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (4294967282U)));
                arr_4 [(short)10] [(short)10] = ((/* implicit */long long int) (~((~(((2147483647) % (2147483647)))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */short) ((((/* implicit */int) (signed char)124)) / (((/* implicit */int) var_11))));
}
