/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245035
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
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) : (((var_16) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))) ? (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_14))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -8681621593896643851LL)) ? (((/* implicit */unsigned long long int) 5489363039441967893LL)) : (18446744073709551615ULL)));
                arr_7 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 8681621593896643846LL)) != (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
                var_19 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 18446744073709551597ULL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))) - (2878377857193372408ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_1] [i_1] [i_1]) || (((/* implicit */_Bool) var_14))))))))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))))) : (3978814330955382373LL)));
            }
        } 
    } 
}
