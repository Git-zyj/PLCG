/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22543
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
    var_10 = max((-1LL), (1LL));
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) var_4))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) var_7)))))))));
        var_13 = ((/* implicit */unsigned short) ((long long int) var_7));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : ((~(0LL)))));
    }
    for (long long int i_1 = 3; i_1 < 16; i_1 += 2) 
    {
        var_15 *= ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) (unsigned short)6973)))))))), (0LL)));
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) max((((((long long int) 16LL)) >> (((((((/* implicit */_Bool) (signed char)58)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35753))))) - (5525676965185353392LL))))), (((/* implicit */long long int) (-(((/* implicit */int) (short)-8660)))))));
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -7997480682195352693LL)) ? (((((/* implicit */_Bool) (unsigned short)48815)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-116))) : (0LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1465249113U))))));
        }
    }
}
