/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29736
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [i_1]))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) min((18446744073709551604ULL), (14491899094326335220ULL))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3594043455U)) && (((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_1] [i_0]))) || (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_1 [i_0])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)57903)), (var_2))))))))));
    var_16 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 8591583072803348507LL)) : (((((/* implicit */_Bool) 341968564432674757ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18258))) : (16972319437104748976ULL))))));
}
