/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192746
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
    var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_15)) * (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (-2147483645) : (((/* implicit */int) (unsigned short)22)))))), (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_0))))) ? (((int) var_0)) : (((/* implicit */int) var_10))))));
    var_21 += ((/* implicit */_Bool) var_3);
    var_22 = ((/* implicit */long long int) var_1);
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((int) (unsigned short)23)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_24 |= arr_6 [17ULL];
                var_25 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))));
            }
        } 
    } 
}
