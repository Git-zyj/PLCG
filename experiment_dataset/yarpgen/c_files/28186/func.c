/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28186
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) var_8))));
    var_11 |= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((((/* implicit */int) (signed char)32)) > (((/* implicit */int) var_3))))))) | (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 += ((/* implicit */int) min(((!(((/* implicit */_Bool) (~(8934068143676690643ULL)))))), (((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) -1495082605))))));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_7))));
    }
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (((+(((((/* implicit */int) var_3)) * (((/* implicit */int) var_2)))))) != (((((((/* implicit */int) var_8)) % (var_4))) << ((((+(6270127415077542998ULL))) - (6270127415077542991ULL))))))))));
}
