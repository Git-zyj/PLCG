/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34228
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_1 [i_0]))))));
        var_19 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))));
    }
    var_20 = ((/* implicit */signed char) max((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)10721)) && (((/* implicit */_Bool) 861300921385409439ULL)))) && (((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_14))))))), (((((/* implicit */int) var_2)) - (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
}
