/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238763
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
    var_11 = ((/* implicit */_Bool) var_3);
    var_12 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((-1157919747) | (-2047180708)))) ? (((((/* implicit */_Bool) -1157919740)) ? (((/* implicit */unsigned int) 1157919739)) : (4215995334U))) : (((/* implicit */unsigned int) 1963945369)))) > (((/* implicit */unsigned int) min((1157919761), (var_6))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) var_10);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3423293232548875026LL)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) var_0))))) ? (((int) arr_0 [i_0])) : (((int) -1157919775))));
        arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned short)4722)) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (1157919761) : (arr_2 [i_0]))) : (((((/* implicit */int) (short)13055)) / (arr_2 [i_0]))));
    }
    var_14 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) (~(1157919740)))) & (2941932967U))), (((/* implicit */unsigned int) var_8))));
}
