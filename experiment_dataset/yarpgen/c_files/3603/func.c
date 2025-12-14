/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3603
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
    var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 7217728205742466891LL)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) / (var_19)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = (~(((int) var_6)));
        arr_4 [i_0] = (~(((/* implicit */int) (_Bool)1)));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)3)) && (((_Bool) var_19))));
        var_21 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_5))))))));
    }
}
