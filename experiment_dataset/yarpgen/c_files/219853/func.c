/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219853
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_15 = var_13;
        var_16 = -1;
    }
    /* LoopSeq 1 */
    for (short i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */short) max((((arr_6 [i_1 + 1]) | (arr_6 [i_1 + 1]))), (((/* implicit */unsigned long long int) var_7))));
        var_17 = ((/* implicit */int) max((var_17), (-30)));
        var_18 = var_8;
        var_19 = ((/* implicit */_Bool) var_3);
    }
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (+(((/* implicit */int) var_9)))))));
}
