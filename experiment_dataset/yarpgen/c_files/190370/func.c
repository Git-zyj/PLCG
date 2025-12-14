/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190370
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_0 [i_0] [i_1]) + (var_10)))) + (var_3)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_14)))))) != (arr_4 [i_0] [i_1 + 3] [i_1])))) : ((+(((/* implicit */int) var_16)))))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_10);
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) min((var_13), (var_14)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))), (((((((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) var_0)))) + (9223372036854775807LL))) << ((((((~(var_7))) + (7726075743077941282LL))) - (39LL)))))));
    var_21 = ((/* implicit */signed char) var_2);
}
