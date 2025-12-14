/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52432
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56790))) : (4294967292U))) - (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_1)), (arr_8 [i_0] [i_0 - 1])))))));
                    var_15 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)107))))))) <= (2747063582U)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (2024097221))) ^ (((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) var_10)))))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_12))))))))));
    var_17 = ((/* implicit */signed char) var_3);
    var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) ((min((var_8), (var_1))) ? (1638332578U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) <= (((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))))) : (max((((((/* implicit */long long int) ((/* implicit */int) var_10))) + (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_9)))))))))));
}
