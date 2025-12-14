/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194698
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((((signed char) max((((/* implicit */signed char) var_6)), (var_4)))), (max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))))), (var_2))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max(((-(var_18))), (((/* implicit */unsigned int) (~((+(((/* implicit */int) var_17))))))))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) / (((/* implicit */int) (signed char)-120))))))));
    }
    var_22 += ((/* implicit */short) min(((-(var_18))), (((/* implicit */unsigned int) var_9))));
}
