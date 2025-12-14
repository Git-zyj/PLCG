/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243841
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_17 = ((/* implicit */short) (-(((/* implicit */int) ((arr_2 [i_0]) != (((/* implicit */unsigned long long int) 1766219846U)))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2089742489883264279ULL)) ? (16357001583826287360ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21)))))) ? (((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))) != (arr_1 [i_0]))))));
    }
    var_19 |= ((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))));
    var_20 = ((/* implicit */short) (~(2147483647)));
}
