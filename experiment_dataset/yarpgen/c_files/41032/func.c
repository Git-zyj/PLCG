/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41032
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */long long int) ((int) min((var_7), (((/* implicit */short) var_1)))))) != (((((/* implicit */_Bool) (unsigned char)138)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (short)11935)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)11827)) / ((-2147483647 - 1))));
        arr_4 [(unsigned char)2] &= ((/* implicit */long long int) arr_0 [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)92)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
        arr_6 [i_0] = ((/* implicit */unsigned long long int) (!(((arr_1 [(signed char)2]) <= (((/* implicit */int) arr_2 [i_0] [i_0 + 1]))))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) 11481959337993499650ULL)) ? (((/* implicit */int) (unsigned short)53687)) : (((/* implicit */int) arr_0 [i_0])))) : ((-(((/* implicit */int) var_4))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */short) ((arr_3 [i_1 + 1]) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 - 1]))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) 2147483647))));
    }
    for (short i_2 = 1; i_2 < 10; i_2 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) (~((~(((/* implicit */int) max((var_10), (var_11))))))));
        var_18 = ((/* implicit */long long int) arr_8 [i_2] [(unsigned char)6]);
    }
    var_19 = ((/* implicit */unsigned long long int) (~(-849403954)));
}
