/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3850
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
    var_15 += (-(var_13));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_1)))) ? (min((((/* implicit */unsigned int) (unsigned char)204)), (var_10))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)20)))))))) : (var_8)));
    var_17 = ((/* implicit */short) max(((-(((((/* implicit */long long int) ((/* implicit */int) var_11))) + (var_2))))), (-1LL)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (unsigned short)1792))));
        var_19 = ((/* implicit */unsigned int) (((+(1758869030))) / (((/* implicit */int) (unsigned char)204))));
    }
}
