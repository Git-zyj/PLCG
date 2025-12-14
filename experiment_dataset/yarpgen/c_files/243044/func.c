/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243044
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) ((157265878) & (-1524400924))))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_19 -= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0])))) : ((+(((/* implicit */int) var_0))))));
                var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_14))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_1])), (var_3))))));
                arr_5 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned int) (unsigned char)213))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14)))) : ((~(-1)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) min((3311973969U), (((/* implicit */unsigned int) (unsigned char)207))))) ? (((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
}
