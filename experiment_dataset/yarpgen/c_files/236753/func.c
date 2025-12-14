/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236753
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) 9223372036854775807LL);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) var_10);
        var_11 |= ((/* implicit */signed char) ((arr_2 [i_0 - 2]) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0] [i_0 - 2]))));
    }
    for (signed char i_1 = 2; i_1 < 12; i_1 += 3) 
    {
        var_12 = var_0;
        arr_7 [i_1] = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))), (max((arr_5 [i_1]), (arr_5 [(signed char)10]))));
        arr_8 [i_1] [i_1] |= ((/* implicit */signed char) min((max((((var_5) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3))), (min((((/* implicit */long long int) arr_0 [i_1] [i_1])), (var_3))))), (((/* implicit */long long int) max((arr_1 [i_1] [i_1]), (((var_3) > (var_3))))))));
        arr_9 [i_1 - 1] = ((/* implicit */_Bool) (+(((long long int) (_Bool)1))));
    }
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_7))));
}
