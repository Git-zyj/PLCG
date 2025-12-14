/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242288
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
    var_18 += ((/* implicit */unsigned short) var_14);
    var_19 = ((/* implicit */short) var_11);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */int) var_0);
        var_21 &= ((/* implicit */int) (short)-2475);
    }
    for (short i_1 = 1; i_1 < 15; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_1 [i_1 + 2]))))) == (((arr_3 [i_1 + 2]) - (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
        var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_4 [i_1 + 2] [i_1 + 1])))) ? (max((((/* implicit */unsigned int) var_9)), (var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */int) arr_2 [(signed char)6])) : (((/* implicit */int) arr_2 [(signed char)8])))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned long long int) var_15)), (arr_4 [i_1 - 1] [i_1 + 1]))) : (arr_4 [i_1] [i_1 - 1])));
        var_24 += ((/* implicit */signed char) var_3);
        var_25 = ((/* implicit */long long int) max((var_25), (-4537297332557711752LL)));
    }
}
