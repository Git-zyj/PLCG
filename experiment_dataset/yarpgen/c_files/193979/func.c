/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193979
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) var_8))));
        var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50041))) % (((unsigned long long int) ((unsigned int) arr_1 [i_0])))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
    {
        arr_5 [i_1 - 1] [i_1] = ((/* implicit */int) arr_0 [i_1 - 2]);
        var_13 = ((/* implicit */unsigned long long int) ((short) (unsigned char)213));
    }
    var_14 = ((/* implicit */signed char) (+((-(((/* implicit */int) (unsigned char)204))))));
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
}
