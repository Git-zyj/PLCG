/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44294
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_18 -= ((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) var_4))))), (arr_1 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : ((+(((/* implicit */int) var_4))))))));
        var_19 = ((/* implicit */unsigned int) var_9);
    }
    var_20 = ((/* implicit */long long int) var_16);
    var_21 = ((/* implicit */short) var_15);
    var_22 += ((/* implicit */_Bool) (+(var_6)));
}
