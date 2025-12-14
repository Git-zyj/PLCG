/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221654
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-26427)) + (2147483647))) >> (((arr_1 [i_0]) - (417166056U)))))))))));
        var_12 = ((/* implicit */unsigned int) max((var_12), (((((/* implicit */_Bool) arr_0 [i_0])) ? (min(((((_Bool)0) ? (arr_0 [(unsigned char)9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))) : (arr_1 [i_0])))));
        var_13 += ((/* implicit */_Bool) (+(arr_1 [i_0])));
    }
    var_14 = ((/* implicit */_Bool) ((unsigned char) var_8));
}
