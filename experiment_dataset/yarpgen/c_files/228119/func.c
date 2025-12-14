/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228119
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
    var_19 = ((/* implicit */long long int) max((var_19), (((long long int) (unsigned char)48))));
    var_20 = ((/* implicit */long long int) ((signed char) var_13));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) ((signed char) ((unsigned int) var_12)));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((signed char) (unsigned char)139));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)106));
        var_22 ^= ((/* implicit */unsigned short) ((unsigned int) (_Bool)1));
    }
    var_23 = ((/* implicit */short) var_0);
}
