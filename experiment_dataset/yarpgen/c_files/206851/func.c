/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206851
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) << (((arr_0 [i_0] [i_0]) + (7030978541992504158LL)))));
        arr_2 [i_0] [i_0] &= ((/* implicit */_Bool) ((int) arr_1 [i_0]));
        var_11 = ((/* implicit */long long int) var_2);
        arr_3 [(_Bool)0] [i_0] &= ((/* implicit */unsigned short) ((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    }
    var_12 = ((/* implicit */int) var_6);
    var_13 = ((/* implicit */unsigned char) var_1);
}
