/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219213
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
    var_12 = ((/* implicit */signed char) var_7);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) arr_1 [(unsigned char)4]);
        var_14 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned char) (_Bool)1)));
        var_15 = ((/* implicit */signed char) min((arr_1 [i_0]), (((arr_1 [i_0]) || (((((/* implicit */int) (unsigned char)251)) < (((/* implicit */int) arr_1 [i_0]))))))));
        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)255))));
    }
    var_17 = min((1063047980U), (min((127U), (((/* implicit */unsigned int) (_Bool)0)))));
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (signed char)113))));
}
