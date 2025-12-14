/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217538
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
    var_17 = ((/* implicit */_Bool) (~(6676879001503123125ULL)));
    var_18 = ((/* implicit */int) ((long long int) var_9));
    var_19 = ((/* implicit */unsigned int) ((((_Bool) max((var_11), (((/* implicit */short) var_13))))) ? (((11769865072206428494ULL) + (((/* implicit */unsigned long long int) -339334202220824244LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) 11769865072206428494ULL)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (var_2))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 += ((/* implicit */long long int) (signed char)13);
                arr_5 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0]))))), (var_2)));
            }
        } 
    } 
}
