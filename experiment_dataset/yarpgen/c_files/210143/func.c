/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210143
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
    var_13 &= ((/* implicit */long long int) (~((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))))));
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_10)))) ? (((((/* implicit */_Bool) var_1)) ? (6985863567687459589LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) min((2743456510U), (((/* implicit */unsigned int) (signed char)45))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((short) (+(arr_3 [i_0] [i_1]))));
                arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) 1551510756U)) : (((((/* implicit */_Bool) (unsigned char)139)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                var_15 = ((/* implicit */unsigned char) (((((-(((/* implicit */int) var_9)))) + (2147483647))) << (((((((/* implicit */_Bool) min((var_6), (var_3)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (unsigned char)243)))))) - (23634)))));
            }
        } 
    } 
}
