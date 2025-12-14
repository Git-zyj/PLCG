/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50563
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
    var_10 = ((/* implicit */unsigned long long int) (unsigned char)204);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] [(unsigned char)10] = min((((int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -7755096196872645912LL)) ? (1352126536) : (((/* implicit */int) arr_0 [i_0])))))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) 1692173833))))))));
    }
    var_11 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (var_1))), (((/* implicit */unsigned long long int) (unsigned char)138))));
}
