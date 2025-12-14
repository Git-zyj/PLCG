/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46435
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
    for (int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_2 [i_0]) > (((/* implicit */int) (short)(-32767 - 1)))))) * (((/* implicit */int) var_19))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (arr_0 [i_0 + 1]) : (arr_1 [i_0 - 2] [i_0 - 2])));
    }
    var_21 |= ((/* implicit */unsigned int) var_11);
}
