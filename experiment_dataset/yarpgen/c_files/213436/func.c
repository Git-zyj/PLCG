/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213436
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (short)3584)) ? (((/* implicit */unsigned long long int) (-(arr_3 [i_1 - 1] [i_0])))) : (max((((/* implicit */unsigned long long int) arr_0 [i_1 - 3])), (((unsigned long long int) arr_2 [i_0] [i_1])))))))));
                var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_0]) ^ (arr_0 [i_0])))) ? (max(((-(29263260498076479LL))), (((/* implicit */long long int) ((unsigned int) var_11))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((arr_2 [i_0] [i_0]) ? (((/* implicit */int) (short)3596)) : (((/* implicit */int) (signed char)-1)))) : (arr_3 [i_1] [i_1]))))));
                arr_4 [(short)11] [i_1 - 3] = ((/* implicit */int) (-((~(((((/* implicit */_Bool) 1018370409U)) ? (arr_0 [i_0]) : (29263260498076479LL)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_4);
}
