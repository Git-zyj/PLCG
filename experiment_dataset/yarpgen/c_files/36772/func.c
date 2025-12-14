/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36772
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
    var_18 = ((/* implicit */unsigned short) max((((((/* implicit */int) (signed char)87)) | (((/* implicit */int) (unsigned short)56433)))), (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_19 = var_15;
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */signed char) var_14);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)61947))));
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) * (((/* implicit */int) (signed char)-108))));
}
