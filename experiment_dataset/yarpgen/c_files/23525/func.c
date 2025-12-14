/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23525
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) arr_1 [7LL] [i_0])))));
        var_20 = ((/* implicit */signed char) var_8);
        var_21 = ((/* implicit */long long int) (~(arr_1 [i_0 + 1] [i_0 - 1])));
    }
    for (short i_1 = 2; i_1 < 10; i_1 += 2) 
    {
        var_22 = ((/* implicit */short) (!(((((/* implicit */int) arr_0 [i_1] [i_1 + 2])) != (((/* implicit */int) arr_0 [i_1] [i_1 + 2]))))));
        var_23 = max((((unsigned int) ((arr_0 [i_1] [i_1]) ? (arr_3 [i_1]) : (((/* implicit */int) arr_2 [i_1] [i_1]))))), (min((((/* implicit */unsigned int) arr_0 [i_1 + 2] [i_1 - 2])), (1500737693U))));
        arr_4 [i_1] = ((/* implicit */signed char) var_18);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */_Bool) arr_3 [4]);
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((((arr_6 [7U]) / (((/* implicit */long long int) ((/* implicit */int) var_1))))) / (((/* implicit */long long int) (-(((/* implicit */int) var_12))))))) : (arr_6 [i_2]))))));
    }
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        var_25 = ((/* implicit */short) (~(((arr_9 [i_3]) & (((/* implicit */int) (_Bool)1))))));
        var_26 = ((/* implicit */short) var_6);
    }
}
