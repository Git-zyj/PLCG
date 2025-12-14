/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2602
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [0U] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] = var_3;
    }
    for (long long int i_1 = 3; i_1 < 20; i_1 += 1) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) arr_6 [i_1 + 2] [i_1]);
        arr_10 [i_1] = ((/* implicit */_Bool) arr_7 [i_1]);
    }
    var_13 = ((/* implicit */short) var_12);
    var_14 = (!(((/* implicit */_Bool) (-((~(((/* implicit */int) var_12))))))));
    var_15 &= ((/* implicit */signed char) var_4);
}
