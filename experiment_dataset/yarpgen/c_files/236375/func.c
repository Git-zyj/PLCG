/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236375
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_1] = ((3624300424U) << (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))));
                    var_20 = ((3368548320979791743LL) < (((/* implicit */long long int) ((((/* implicit */int) arr_1 [(short)20])) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) == (arr_2 [1ULL]))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_18);
    var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) <= (449063127U))))) ^ (min((var_6), (((/* implicit */unsigned int) ((-2536507308231389486LL) <= (1106452145876255707LL))))))));
}
