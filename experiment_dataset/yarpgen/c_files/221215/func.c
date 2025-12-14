/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221215
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
    var_17 = ((/* implicit */unsigned char) min((var_17), ((unsigned char)248)));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        arr_2 [i_0] = arr_0 [i_0];
        var_18 = min((((/* implicit */int) (unsigned char)31)), (max(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) var_10)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((var_15), (var_11)))) ? (((((/* implicit */_Bool) 956023846)) ? (207806236) : (((/* implicit */int) (unsigned char)40)))) : (min((((/* implicit */int) arr_1 [i_0])), (var_4)))))));
    }
}
