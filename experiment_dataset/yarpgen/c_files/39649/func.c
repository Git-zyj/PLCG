/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39649
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) >> (((593020467U) - (593020436U)))));
        arr_5 [14LL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) != (((((/* implicit */_Bool) arr_0 [i_0])) ? (2564280232714333674LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned long long int) (+(max((arr_3 [i_1]), (((/* implicit */long long int) min((((/* implicit */short) arr_2 [i_1])), (arr_1 [i_1]))))))));
        var_12 = ((/* implicit */_Bool) arr_6 [11U]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2])) - ((~(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (arr_9 [i_2])))) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_6 [i_2]))));
        arr_12 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_2]), (arr_0 [i_2])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (arr_9 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_10 [i_2] [i_2]), (arr_10 [i_2] [i_2])))))));
    }
    var_13 = ((/* implicit */signed char) (-(627437889U)));
    var_14 &= var_1;
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) - (((/* implicit */int) var_0))));
    var_16 = ((/* implicit */_Bool) var_0);
}
