/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22123
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
    var_16 = ((/* implicit */long long int) var_8);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_13)))), (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_0 [i_0])))))));
        var_18 *= ((/* implicit */long long int) (~(((/* implicit */int) min(((short)32751), (((/* implicit */short) arr_0 [i_0])))))));
        arr_2 [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((+(((((/* implicit */int) var_12)) / (var_4))))) : (((/* implicit */int) var_13))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_19 &= ((/* implicit */signed char) ((((/* implicit */int) var_14)) & (((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_1])))));
        var_20 = (-(var_10));
    }
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned int) ((_Bool) ((((((/* implicit */int) (short)-32739)) % (((/* implicit */int) (short)24011)))) % (((/* implicit */int) var_15)))));
        var_21 &= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)53293)) ^ (((/* implicit */int) var_14))))), ((~(((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_1)))))));
    }
}
