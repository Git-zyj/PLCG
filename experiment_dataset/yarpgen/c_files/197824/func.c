/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197824
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] = max((max((((/* implicit */unsigned short) var_7)), (arr_2 [i_0]))), (max((arr_2 [i_0]), (arr_2 [i_0]))));
        arr_5 [i_0] = (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))));
    }
    var_13 = ((/* implicit */int) var_3);
    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
}
