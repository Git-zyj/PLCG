/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223601
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
    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (-2147483637)));
    var_18 = (short)-22247;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_19 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2U)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) 7798719180855938123LL)) ? (arr_2 [(_Bool)1]) : (arr_2 [i_0]))) : (var_14)))) || (((((((/* implicit */_Bool) (short)15)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */short) ((var_7) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) : (max((-7798719180855938113LL), (((/* implicit */long long int) var_0))))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) max((7U), (((/* implicit */unsigned int) arr_4 [i_1]))))) ? (((((/* implicit */_Bool) -623072191)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (var_10))) : (((/* implicit */unsigned int) (-2147483647 - 1))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (7798719180855938124LL)))) && (((_Bool) 524288U))))))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((var_15) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(_Bool)1]))) : (arr_5 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (((arr_5 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (((/* implicit */long long int) min((((/* implicit */int) arr_4 [i_1])), (((1324789901) - (((/* implicit */int) arr_6 [i_1] [i_1]))))))))))));
    }
    for (long long int i_2 = 2; i_2 < 13; i_2 += 3) 
    {
        var_22 |= ((/* implicit */long long int) -1975160506);
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (short)-7548))));
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_0)))), ((+(2025542364))))))));
    }
}
