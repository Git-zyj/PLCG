/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217984
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
    var_17 = ((/* implicit */signed char) var_7);
    var_18 = var_13;
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) var_14))))) ? (var_15) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_16))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) var_3)), (var_15))), (((((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                arr_6 [i_1] = ((((/* implicit */int) ((unsigned short) var_2))) << ((((~(var_10))) - (9328942071142026587ULL))));
            }
        } 
    } 
}
