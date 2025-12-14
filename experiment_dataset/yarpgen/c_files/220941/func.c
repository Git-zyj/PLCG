/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220941
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0 + 1] = var_3;
        var_20 = ((/* implicit */short) min((var_20), (((short) var_0))));
        var_21 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-114))))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_14))));
        arr_6 [i_1] = ((int) var_14);
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((((int) var_0)), (((/* implicit */int) ((signed char) var_19)))))) && (((/* implicit */_Bool) var_9))));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) 0ULL))));
    }
}
