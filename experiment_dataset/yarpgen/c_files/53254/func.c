/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53254
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
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_8)), (((unsigned long long int) var_0))));
    var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) (~(var_6)))) : (var_2)));
    var_14 = ((/* implicit */_Bool) ((int) min((max((var_2), (((/* implicit */long long int) var_0)))), ((-(var_2))))));
    var_15 = ((/* implicit */signed char) ((long long int) var_0));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) (unsigned char)99)), (arr_3 [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_3 [i_0])))))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_2 [i_0])), (var_10)))) ? ((-(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_2 [i_0])) : ((~(var_1))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_1]))));
        var_19 = ((/* implicit */signed char) arr_5 [i_1]);
    }
}
