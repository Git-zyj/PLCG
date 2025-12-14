/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19651
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
    var_20 = ((/* implicit */unsigned long long int) var_12);
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (short)2099))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_22 &= ((/* implicit */int) ((unsigned char) 8415541640811786770ULL));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(short)6])) ? (((/* implicit */int) ((((/* implicit */int) (short)-2099)) >= (((/* implicit */int) (short)-2099))))) : (((/* implicit */int) arr_0 [i_0]))));
    }
}
