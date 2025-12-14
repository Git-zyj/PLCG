/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217120
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
    var_18 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) (_Bool)0)), (((((/* implicit */long long int) 1479448424U)) % (var_5)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((unsigned short) 5798971624069644028ULL)), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((5798971624069644028ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) && (((/* implicit */_Bool) ((var_9) << (((/* implicit */int) var_16)))))))))))));
        var_20 *= ((/* implicit */unsigned short) ((arr_0 [i_0] [i_0 + 1]) << (((arr_0 [i_0] [8U]) - (2178323219U)))));
    }
    var_21 = ((/* implicit */_Bool) max((var_21), (var_14)));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) << ((((~(((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) - (2039969928U)))));
}
