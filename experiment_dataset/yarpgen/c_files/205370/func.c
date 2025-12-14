/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205370
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
    var_16 &= ((/* implicit */signed char) ((((min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_15)), (var_2)))), (var_14))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (max((((/* implicit */unsigned long long int) -1235239204)), (var_0))) : (((/* implicit */unsigned long long int) max((262143), (((/* implicit */int) var_5))))))) - (18446744072474312412ULL)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) arr_2 [i_0]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            arr_6 [i_0] &= arr_3 [i_1];
            var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) max((-262143), (((/* implicit */int) arr_0 [i_1] [i_0])))))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((arr_2 [i_1]) <= (((/* implicit */unsigned long long int) var_3)))))))) ? (((/* implicit */unsigned int) max((max((((/* implicit */int) var_9)), (262148))), (((/* implicit */int) ((_Bool) arr_0 [i_0] [i_1])))))) : ((-(arr_3 [i_1])))));
        }
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min((((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) arr_1 [i_0])))), ((!(arr_0 [i_0] [i_0])))))), (((arr_0 [i_0] [i_0]) ? (max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_3 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0])))))))))))));
        var_21 = ((/* implicit */int) min((var_8), (((/* implicit */unsigned long long int) max((min((((/* implicit */int) (short)17599)), (262142))), (((/* implicit */int) (_Bool)1)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_10))));
        var_23 = ((/* implicit */int) arr_1 [i_2]);
    }
    var_24 = ((/* implicit */unsigned int) min((var_24), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -10)))))) : (((max((((/* implicit */unsigned int) 262147)), (642422724U))) + (var_6)))))));
}
