/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238488
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (short)-10438)) > (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_3))))) >= (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */int) arr_3 [16ULL])) / (((/* implicit */int) var_0))))))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((signed char) (_Bool)1)));
        arr_6 [10] &= (((+(((/* implicit */int) var_9)))) < ((~(var_12))));
        arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) arr_1 [i_0])));
    }
    var_21 += ((/* implicit */signed char) var_10);
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (var_10)))), (((((/* implicit */_Bool) (signed char)80)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (min((min((var_14), (((/* implicit */unsigned long long int) var_18)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (699568234))))))));
}
