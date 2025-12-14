/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33437
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
    var_19 = ((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_18)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_1 + 1] = ((/* implicit */unsigned short) var_2);
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))) : (var_14)))));
                var_20 = ((/* implicit */unsigned short) var_13);
                arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (max((var_12), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (var_3))))));
            }
        } 
    } 
}
