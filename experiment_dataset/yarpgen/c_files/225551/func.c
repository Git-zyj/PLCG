/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225551
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
    var_12 ^= ((/* implicit */int) var_9);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_13 ^= max((((/* implicit */long long int) max((2912391006U), (((/* implicit */unsigned int) -2147483646))))), (((long long int) 16253388224151886030ULL)));
        arr_2 [14LL] &= ((/* implicit */unsigned int) max((16253388224151886029ULL), (((/* implicit */unsigned long long int) ((var_11) / (((/* implicit */long long int) -334967586)))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_14 += ((/* implicit */unsigned int) ((int) (~((-(var_2))))));
        arr_5 [i_1] &= ((/* implicit */unsigned int) arr_0 [i_1] [2U]);
    }
    var_15 += max(((~((~(var_0))))), (((/* implicit */unsigned int) (-(0)))));
}
