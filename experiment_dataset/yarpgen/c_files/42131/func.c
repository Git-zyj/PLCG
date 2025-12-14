/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42131
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)5))));
        var_18 = (unsigned short)65530;
    }
    /* LoopSeq 1 */
    for (short i_1 = 3; i_1 < 9; i_1 += 2) 
    {
        var_19 = max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20345))))), (((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_2)))));
        var_20 = ((/* implicit */short) var_0);
        var_21 = ((/* implicit */short) var_4);
    }
    var_22 = ((/* implicit */long long int) ((var_0) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))) : ((~(((/* implicit */int) var_2))))));
}
