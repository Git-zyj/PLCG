/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20562
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
    var_19 -= ((/* implicit */_Bool) var_16);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_20 += ((/* implicit */signed char) var_18);
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(var_18)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)16)) % (((/* implicit */int) (short)16))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_1])), (arr_0 [i_1]))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)64)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)56))))))))));
            }
        } 
    } 
    var_22 -= ((/* implicit */long long int) ((int) max((var_12), (((/* implicit */int) var_16)))));
}
