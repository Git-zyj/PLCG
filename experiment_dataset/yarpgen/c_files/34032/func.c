/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34032
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) arr_0 [i_0]));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_14 -= ((unsigned int) var_4);
        var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((5431511833767198496ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) ((_Bool) var_5)))));
    }
    var_16 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_12)))) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (4192256ULL))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (short)-28070)) : (((/* implicit */int) var_10)))))));
}
