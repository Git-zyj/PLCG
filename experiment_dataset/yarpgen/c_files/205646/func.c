/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205646
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = var_16;
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */short) (~(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))));
            arr_5 [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_1])) + (2147483647))) << (((((var_9) + (1528672672))) - (13)))));
            var_19 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_1]))));
            arr_6 [i_1] [(short)22] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
        }
        arr_7 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
    var_21 = var_2;
}
