/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29784
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
    var_15 = ((/* implicit */unsigned short) (~(((var_11) ^ (((/* implicit */unsigned long long int) ((int) 1947981958U)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-29720)) ^ (((/* implicit */int) (short)-14145))))) ? (max(((-(arr_0 [i_0]))), (((int) (unsigned short)34124)))) : (max((((/* implicit */int) var_13)), (((int) 2721102041U)))))))));
        var_17 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    var_18 = ((/* implicit */unsigned long long int) var_12);
}
