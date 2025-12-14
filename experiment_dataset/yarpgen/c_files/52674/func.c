/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52674
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
    var_11 = ((/* implicit */unsigned int) min(((+(var_4))), (((/* implicit */int) var_3))));
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    var_13 -= ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_0 - 1])))) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (var_9))))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (~(max((arr_2 [i_0 - 1]), (var_6)))));
            }
        } 
    } 
    var_14 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (max((((/* implicit */unsigned long long int) var_7)), (3126531500229826617ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((var_8), (((/* implicit */int) var_0))))), (min((var_2), (((/* implicit */unsigned int) var_7)))))))));
}
