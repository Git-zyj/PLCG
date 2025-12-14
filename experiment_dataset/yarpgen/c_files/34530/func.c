/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34530
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
    var_20 = ((/* implicit */int) var_3);
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (min((var_10), (((/* implicit */unsigned int) var_8))))))) : (max((((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_15))))), (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned short)57132)) : (((/* implicit */int) var_5))))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)57126)) == (((/* implicit */int) var_18))));
    var_23 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(min((50026664), (((/* implicit */int) arr_0 [i_0] [i_1]))))))), (var_11)));
                arr_5 [i_0] = ((/* implicit */short) (unsigned short)57132);
            }
        } 
    } 
}
