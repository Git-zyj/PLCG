/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24956
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((0U), (310424414U))) < (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) & (var_10))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) var_5);
        var_18 = max((min(((-(var_10))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)57))) * (2026884594U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (!(var_14))))))));
    }
    var_19 -= ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_13))), (var_0))), (((/* implicit */unsigned long long int) var_7))));
}
