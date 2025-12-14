/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221623
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((unsigned char) min((var_13), (((/* implicit */long long int) ((unsigned char) var_6))))))));
        var_16 = ((/* implicit */long long int) ((((var_11) + (((/* implicit */unsigned int) var_3)))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_10)))))));
    }
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (-(-7996341037048037018LL))))));
    var_18 = ((/* implicit */_Bool) var_12);
}
