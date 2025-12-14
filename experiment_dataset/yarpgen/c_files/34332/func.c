/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34332
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [(signed char)1] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((var_13) % (((/* implicit */int) var_1))))) | (max((var_0), (((/* implicit */unsigned int) (signed char)0)))))), (((/* implicit */unsigned int) arr_2 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((var_5) < (((/* implicit */unsigned long long int) var_15)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_1 [i_0]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        arr_5 [i_0] = arr_2 [i_0];
    }
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_9), (var_2)))), (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) -2147483623))))))))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (~((~(18LL))))))));
}
