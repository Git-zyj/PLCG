/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247301
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
    var_12 = ((/* implicit */int) ((long long int) (-(3267667421U))));
    var_13 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14814))))), (((unsigned int) (-(((/* implicit */int) (short)-14814)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] = var_9;
        arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
    }
}
