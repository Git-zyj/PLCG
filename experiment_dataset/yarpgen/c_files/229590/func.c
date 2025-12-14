/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229590
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
    var_20 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_9))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_18)), (var_15))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 2077161606)) ? (((/* implicit */int) (_Bool)0)) : (1794376454))) >= (((/* implicit */int) var_10))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)51417)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_9))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_21 += ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (1898123255) : (arr_1 [i_0])))) ? (((/* implicit */int) ((var_13) || (((/* implicit */_Bool) -1296312109))))) : (arr_1 [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (261888U) : (((/* implicit */unsigned int) arr_3 [i_0] [i_0])))))))));
                arr_5 [5] [i_0] [i_0] = ((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) || (((/* implicit */_Bool) arr_0 [i_0] [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3115493105U)) ? (-8942652343784918075LL) : (((/* implicit */long long int) 4294967295U))))));
            }
        } 
    } 
}
