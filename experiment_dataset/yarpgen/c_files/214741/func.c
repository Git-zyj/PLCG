/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214741
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
    var_20 = ((/* implicit */unsigned short) var_11);
    var_21 = ((/* implicit */long long int) ((unsigned short) var_7));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        var_22 = ((/* implicit */short) ((int) (_Bool)1));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_1 [(unsigned short)7])) ? (((/* implicit */int) (unsigned short)13393)) : (((/* implicit */int) arr_1 [i_0])))))) ? (min((((int) arr_0 [i_0 + 2])), (((/* implicit */int) ((signed char) -178917117))))) : (((/* implicit */int) (unsigned short)4080))));
    }
}
