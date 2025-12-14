/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54268
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = (-(min((((/* implicit */unsigned int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))), (min((((/* implicit */unsigned int) arr_0 [(signed char)1] [(signed char)1])), (var_10))))));
        var_14 = ((/* implicit */unsigned short) arr_1 [i_0] [(unsigned char)5]);
    }
    var_15 = ((/* implicit */signed char) ((unsigned char) ((min((2909503356U), (var_11))) < (var_10))));
}
