/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202196
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
    var_14 = ((/* implicit */unsigned int) var_1);
    var_15 = ((/* implicit */short) var_13);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = -2;
        arr_3 [i_0] [(unsigned char)3] = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))) < (arr_0 [i_0]))))));
    }
    var_16 |= ((/* implicit */_Bool) var_12);
}
