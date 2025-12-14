/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30175
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
    var_10 = (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (signed char)-30)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_11 *= ((/* implicit */unsigned short) ((signed char) ((_Bool) var_4)));
        arr_2 [(unsigned char)14] = ((/* implicit */int) var_3);
        arr_3 [i_0] = var_1;
    }
    var_12 = max((((/* implicit */long long int) -1207784397)), (-1720963636928949984LL));
}
