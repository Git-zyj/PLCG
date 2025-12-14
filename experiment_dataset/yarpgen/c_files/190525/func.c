/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190525
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
    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)4341))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) (_Bool)0);
        var_19 += ((/* implicit */int) ((((/* implicit */long long int) var_15)) % (9187343239835811840LL)));
        var_20 = ((/* implicit */short) var_2);
        var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) -235307479)), (var_14)))))), (((((/* implicit */_Bool) ((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) var_10)) : (((unsigned long long int) arr_0 [(_Bool)1]))))));
    }
    var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0))));
    var_23 -= ((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (((long long int) (+(((/* implicit */int) (unsigned short)11946)))))));
}
