/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216384
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [14LL] = ((/* implicit */int) (!(max((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) 8U)))), (((((/* implicit */_Bool) arr_0 [(signed char)0])) && (((/* implicit */_Bool) arr_0 [i_0]))))))));
        var_13 = (!(((/* implicit */_Bool) arr_0 [i_0])));
    }
    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 10567895331629937128ULL)))), (((((/* implicit */_Bool) (unsigned char)212)) || (((/* implicit */_Bool) 31U))))))), (((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((((/* implicit */int) var_4)) * (((/* implicit */int) var_6)))) : (var_5)))));
}
