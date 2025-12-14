/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48713
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
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0] [6] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))), (arr_3 [i_0] [i_1])));
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_1 + 1])) ? (arr_0 [i_0] [i_1 + 1]) : (((/* implicit */int) (unsigned short)10820))))), (((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1] [i_0 - 3])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) max((var_18), (var_8)));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((var_9), (((/* implicit */unsigned long long int) var_14))))))) ? (min((((((/* implicit */_Bool) (unsigned short)60618)) ? (((/* implicit */unsigned long long int) -761966952)) : (1152813226709672291ULL))), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((var_13), (var_5)))), (min((var_7), (((/* implicit */unsigned int) (unsigned short)60618)))))))));
}
