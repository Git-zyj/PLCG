/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246273
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
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
        var_15 ^= ((/* implicit */_Bool) arr_1 [i_0 - 2]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) var_7);
        var_16 ^= var_8;
    }
    for (signed char i_1 = 4; i_1 < 8; i_1 += 2) 
    {
        var_17 ^= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned short)35858)) + (((/* implicit */int) (_Bool)1)))));
        var_18 += ((/* implicit */signed char) ((_Bool) max((31U), (((/* implicit */unsigned int) (unsigned char)6)))));
        var_19 = ((/* implicit */unsigned int) ((_Bool) ((unsigned int) arr_7 [i_1 - 1] [i_1 + 2])));
    }
    var_20 += ((/* implicit */int) ((short) (short)-9667));
    var_21 = ((/* implicit */short) max((var_21), (var_8)));
}
