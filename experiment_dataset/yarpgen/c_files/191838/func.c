/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191838
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
    for (int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) min((max((((/* implicit */unsigned int) var_12)), (2848320929U))), (((/* implicit */unsigned int) arr_0 [i_0]))))) & (((((((/* implicit */long long int) arr_0 [i_0 + 1])) - (1868544516003589937LL))) / (((/* implicit */long long int) arr_0 [i_0 + 1]))))));
        var_13 = ((/* implicit */short) 2848320926U);
    }
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((((/* implicit */long long int) (+(1446646379U)))) / (var_9))) * (min((((long long int) 2848320914U)), (((/* implicit */long long int) var_5)))))))));
}
