/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47965
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_2)))))), (var_5))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_11 -= ((/* implicit */signed char) var_5);
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_0] [i_0 + 1])), (6613937616491681609LL)))) ? ((~(-4489024823320817389LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_9))));
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))) ? ((~(((/* implicit */int) (signed char)112)))) : (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */int) var_3))))))))));
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 5864818151102986021LL)) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (var_5))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */int) (unsigned char)197))))))))))));
}
