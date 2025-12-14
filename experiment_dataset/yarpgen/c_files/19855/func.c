/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19855
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
    var_19 = ((/* implicit */int) var_14);
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */signed char) min((((((/* implicit */int) (short)18829)) > (((/* implicit */int) var_5)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (3314581400594988637ULL)))))), (var_18)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) var_18))));
        var_21 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_2 [i_0])) << (((((/* implicit */int) arr_1 [i_0])) - (103))))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) (-((-((+(((/* implicit */int) arr_3 [i_0]))))))));
    }
}
