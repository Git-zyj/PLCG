/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228644
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
    var_18 = ((/* implicit */long long int) (~(((var_0) * (((/* implicit */unsigned long long int) ((int) -1455108292407101474LL)))))));
    var_19 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((short) var_14))) ? (((/* implicit */int) ((unsigned char) (_Bool)0))) : (((/* implicit */int) var_8)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */_Bool) ((((_Bool) var_2)) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [(short)19] [i_0])) : (((/* implicit */int) var_15))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) 1410607395);
    }
}
