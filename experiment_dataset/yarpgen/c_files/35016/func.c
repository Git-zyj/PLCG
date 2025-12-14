/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35016
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
    var_20 |= ((/* implicit */short) (-(((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = (+(((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */long long int) ((arr_0 [i_0]) / (((/* implicit */int) (signed char)18))))) : (((((arr_2 [i_0] [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)26)) - (26))))))));
                arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0] [i_1]))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) ((unsigned int) (short)32746))) ? (((/* implicit */long long int) 1933862318)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15948))) : (arr_2 [i_0] [i_0])))))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((((/* implicit */_Bool) ((signed char) (signed char)-18))) && (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))) : (var_8)))))))));
            }
        } 
    } 
}
