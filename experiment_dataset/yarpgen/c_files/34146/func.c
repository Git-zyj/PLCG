/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34146
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
    var_16 = ((/* implicit */_Bool) var_5);
    var_17 |= ((/* implicit */short) min((((/* implicit */int) var_15)), ((-(((/* implicit */int) var_4))))));
    var_18 = ((/* implicit */unsigned long long int) (~((+(var_9)))));
    var_19 = (+(14095790198939302783ULL));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 14095790198939302805ULL))));
        var_21 |= ((/* implicit */signed char) min((arr_0 [i_0] [i_0]), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (var_1)))) ? (max((((/* implicit */unsigned long long int) var_4)), (arr_0 [i_0] [10U]))) : (max((arr_0 [i_0] [(unsigned char)6]), (var_1)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [9ULL]) : (arr_0 [10] [2ULL])))) && (((/* implicit */_Bool) (-(arr_0 [i_0] [i_0]))))));
    }
}
