/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219845
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
    var_18 = ((/* implicit */unsigned int) min((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (4294967295U) : (var_12))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3551407983567527030LL)) ? (-5620225873054641226LL) : (((/* implicit */long long int) 3485585011U)))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((arr_1 [i_0 + 1]) >= (arr_1 [i_0 - 1])));
    }
}
