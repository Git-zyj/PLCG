/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202039
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) var_13);
                var_17 &= ((/* implicit */unsigned long long int) var_15);
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0]);
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_1))) - (((/* implicit */unsigned long long int) (-(arr_4 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) max((var_1), ((~(((13534223645202692405ULL) * (4912520428506859190ULL)))))));
    var_19 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_7)) ? (var_13) : (var_12))) < (((/* implicit */unsigned int) 1597075209)))) ? (((((/* implicit */_Bool) var_12)) ? (var_6) : (((((/* implicit */_Bool) 819818963U)) ? (var_14) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) var_0))));
    var_20 = var_3;
    var_21 = ((/* implicit */short) ((unsigned long long int) var_11));
}
