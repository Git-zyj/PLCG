/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217172
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
    var_18 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((unsigned long long int) (short)-32760))) ? (var_9) : (((unsigned long long int) var_9))))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_8))));
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */long long int) var_7)) : (var_5))) - ((-9223372036854775807LL - 1LL)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) -625252622);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [4] [11ULL])) > (var_7)));
    }
}
