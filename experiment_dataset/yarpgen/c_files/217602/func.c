/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217602
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((1820471210U), (78800555U)))) ? (min((4216166741U), (2736397692U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0 + 2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
        var_13 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((int) var_5)), (((/* implicit */int) var_5)))))));
        arr_3 [i_0] = ((/* implicit */short) var_4);
        arr_4 [i_0] &= ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_6))));
}
