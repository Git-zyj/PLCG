/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24962
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) 4489792103102433305ULL)) ? (13956951970607118311ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        var_21 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_15)))));
    }
    var_22 = ((/* implicit */unsigned char) (_Bool)1);
}
