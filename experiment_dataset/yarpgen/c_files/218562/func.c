/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218562
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_14 *= ((/* implicit */short) ((unsigned short) min((((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)-37)), (arr_0 [i_0])))), ((unsigned short)37402))));
        var_15 = ((/* implicit */short) ((int) arr_0 [i_0]));
    }
    var_16 = ((/* implicit */int) var_4);
}
