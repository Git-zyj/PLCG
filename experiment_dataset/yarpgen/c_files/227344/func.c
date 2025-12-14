/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227344
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */unsigned short) var_1);
        arr_3 [(_Bool)1] = ((/* implicit */unsigned char) (~(((unsigned long long int) arr_2 [i_0]))));
        var_19 = ((/* implicit */unsigned int) (+(((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8500)))))));
    }
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((short) var_14)))));
}
