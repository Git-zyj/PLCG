/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50950
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
    var_20 = ((/* implicit */int) var_14);
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_8))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] |= ((/* implicit */_Bool) arr_1 [i_0]);
        arr_5 [0U] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((arr_2 [i_0] [i_0]) >= (arr_2 [i_0] [i_0])))), (min((min((arr_1 [i_0]), (((/* implicit */int) arr_0 [i_0] [i_0])))), (arr_1 [i_0])))));
    }
    var_22 &= ((/* implicit */_Bool) min(((-((~(1073741823ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (max((var_6), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13)))))))));
}
