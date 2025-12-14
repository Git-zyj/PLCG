/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191446
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
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((long long int) var_12)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) min((arr_0 [i_0]), (arr_0 [i_0]))))) || (((/* implicit */_Bool) arr_1 [i_0]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [14U] [14U] [14U])) && (var_11)));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 2] [i_1 + 1])) && (((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_11)))))));
        }
        var_24 = ((/* implicit */int) var_19);
    }
}
