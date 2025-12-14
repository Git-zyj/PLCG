/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235514
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) var_3)), (11846251808948646532ULL))))) * (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_10))))))));
    var_19 = var_13;
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0]))));
        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) 0)) / (9223372036854775807LL))) / (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0])))))));
    }
}
