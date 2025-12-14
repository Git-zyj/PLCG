/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35671
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)4096)) != (((/* implicit */int) arr_1 [i_0]))))))));
        var_14 ^= ((/* implicit */unsigned char) (((~(((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [(signed char)4]))))))) << (((arr_2 [i_0]) - (15409439716332563419ULL)))));
    }
    var_15 = ((/* implicit */unsigned char) var_3);
}
