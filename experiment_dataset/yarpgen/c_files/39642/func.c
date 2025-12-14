/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39642
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))), (min((((/* implicit */unsigned long long int) var_1)), (var_5)))))) || (((/* implicit */_Bool) min((min(((signed char)127), (((/* implicit */signed char) (_Bool)0)))), (((/* implicit */signed char) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_11))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0 + 1]))))) ? (((/* implicit */int) max((arr_1 [i_0 + 2] [i_0]), (arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= (((/* implicit */int) arr_1 [i_0] [i_0]))))))), ((-(((((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) - (5774))))))))))));
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0 + 1])))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((min(((~(((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) min((arr_5 [i_1] [i_1]), (arr_4 [i_1])))))) ^ (((/* implicit */int) arr_5 [i_1] [i_1])))))));
        arr_6 [i_1] = ((/* implicit */signed char) arr_1 [i_1] [i_1 + 3]);
    }
    var_21 += ((/* implicit */signed char) max((((/* implicit */unsigned int) ((min((((/* implicit */int) var_6)), (var_7))) ^ (((/* implicit */int) min((var_11), (var_0))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? ((((_Bool)0) ? (1886800743U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (var_3))))))));
}
