/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202821
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
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((var_7) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (var_13)))) : (min((((/* implicit */unsigned long long int) (_Bool)0)), (18446744073709551615ULL))))) : ((-(0ULL))))))));
    var_16 = ((/* implicit */long long int) var_11);
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) >> (((var_2) - (8742845803521525292LL)))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (var_9))) + (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -605740602))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [10ULL])))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_18 ^= ((/* implicit */long long int) ((unsigned short) arr_0 [i_0]));
                    var_19 = arr_4 [i_0 + 2];
                }
            }
        } 
    } 
}
