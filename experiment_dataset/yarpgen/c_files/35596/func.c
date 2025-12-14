/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35596
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
    var_20 = ((/* implicit */short) var_12);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_21 *= ((/* implicit */unsigned long long int) ((int) ((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))));
        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_16))) >= (((/* implicit */long long int) (~(var_15))))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */int) var_8);
        var_23 = ((/* implicit */unsigned char) var_18);
    }
}
