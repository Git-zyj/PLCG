/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49148
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
    for (int i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        var_11 += ((((/* implicit */unsigned long long int) ((524287U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125)))))) ^ (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_4))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)33)))))));
        var_12 = ((/* implicit */_Bool) (-(arr_0 [i_0])));
        var_13 ^= ((/* implicit */unsigned long long int) ((unsigned int) (~(max((arr_0 [i_0]), (((/* implicit */int) arr_1 [i_0])))))));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((unsigned int) arr_1 [i_0 - 2])) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116))))))));
    }
    var_15 = ((/* implicit */long long int) ((unsigned long long int) ((long long int) (short)-753)));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((unsigned short) (((((~(((/* implicit */int) (short)23304)))) + (2147483647))) << (((((/* implicit */int) (signed char)-79)) + (79))))))));
    var_17 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
}
