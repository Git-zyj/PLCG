/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19112
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
    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) >= (max((1106406867U), (((/* implicit */unsigned int) (unsigned char)172))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) -1);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) arr_0 [i_0]))));
    }
}
