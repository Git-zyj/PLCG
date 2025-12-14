/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245159
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) 5575227252307798835ULL);
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
        var_16 = ((/* implicit */int) 5575227252307798861ULL);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) ((unsigned short) var_5));
        var_17 *= (!(((/* implicit */_Bool) arr_7 [i_1])));
        arr_9 [7ULL] = ((/* implicit */short) 5575227252307798835ULL);
    }
    var_18 = ((/* implicit */int) ((long long int) ((unsigned short) ((long long int) var_5))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_11))));
}
