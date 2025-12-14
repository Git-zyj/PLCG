/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247167
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [4] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)45056)) >= (-82871621)));
        arr_4 [i_0] = ((/* implicit */unsigned short) var_4);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12; i_1 += 1) 
    {
        var_12 = ((int) arr_0 [i_1] [i_1]);
        arr_8 [i_1] = ((/* implicit */int) arr_7 [i_1]);
    }
    var_13 = ((min((((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_6)))) ^ (((/* implicit */int) var_9)));
}
