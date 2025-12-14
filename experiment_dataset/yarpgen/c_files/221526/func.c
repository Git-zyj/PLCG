/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221526
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
    var_12 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) ((arr_1 [i_0 + 3]) <= (((/* implicit */int) arr_3 [i_0 - 2])))))), (((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) arr_3 [i_0 - 1])))))));
        var_14 -= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (var_9)))) ? (((/* implicit */unsigned int) ((int) (_Bool)0))) : ((~(var_2))))));
        var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)28828)), (((18446744073709551595ULL) % (17458874578374399069ULL)))));
        var_16 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)16)) ? (((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-95)))) : (1608227371)))));
    }
}
