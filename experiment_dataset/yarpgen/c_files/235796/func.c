/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235796
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
    var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((int) var_0)) - (((/* implicit */int) (unsigned short)52489))))) ^ (((((/* implicit */_Bool) (-(var_8)))) ? (var_13) : ((-9223372036854775807LL - 1LL))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_0 - 2] = ((((/* implicit */_Bool) 13LL)) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_1])) : (((/* implicit */int) ((arr_1 [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1734873429047814330LL)), (var_8)))) ? (((((/* implicit */_Bool) 15LL)) ? (-11LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0 - 2] [i_1] [i_0 - 2]))))))) : (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (13LL)))), (((int) arr_2 [i_0])))))));
                arr_7 [i_0] [i_0 - 2] [i_1] = ((/* implicit */unsigned char) arr_1 [(unsigned char)21]);
            }
        } 
    } 
}
