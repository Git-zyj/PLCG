/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203758
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
    var_20 = min((((((/* implicit */_Bool) var_0)) ? (580142083U) : (((/* implicit */unsigned int) (-2147483647 - 1))))), (((/* implicit */unsigned int) (_Bool)1)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~(32763402)))) ? (min((((/* implicit */unsigned int) (short)1098)), (1780650040U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            var_22 = ((/* implicit */int) max((var_22), ((((!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-18714))))))) ? (arr_4 [i_1 - 1] [i_1 - 1]) : (809679718)))));
            var_23 = ((/* implicit */_Bool) (-(max((max((((/* implicit */unsigned int) 32767)), (4048664635U))), (((/* implicit */unsigned int) var_8))))));
        }
    }
}
