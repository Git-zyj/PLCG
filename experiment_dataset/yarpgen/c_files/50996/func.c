/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50996
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_17))));
    var_20 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_21 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 8627553434833796361ULL)) ? (((/* implicit */int) (unsigned short)19662)) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) var_17)) : (((var_10) % (((((/* implicit */_Bool) (unsigned short)12994)) ? (var_16) : (((/* implicit */unsigned long long int) var_18))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) 510239021U);
    }
    var_22 = var_1;
}
