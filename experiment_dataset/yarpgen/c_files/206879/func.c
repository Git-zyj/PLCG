/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206879
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
    var_18 = ((/* implicit */unsigned int) ((min(((-(var_3))), (((/* implicit */long long int) (-(((/* implicit */int) var_5))))))) > (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_19 *= ((((/* implicit */int) var_11)) / (((/* implicit */int) min((max((((/* implicit */unsigned short) var_6)), (var_4))), (((/* implicit */unsigned short) var_6))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (max((((/* implicit */long long int) (+(((/* implicit */int) (short)-15854))))), ((+(min((var_10), (((/* implicit */long long int) (short)13886))))))))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)86)) ? ((-9223372036854775807LL - 1LL)) : (-399392925187018281LL)));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((((((/* implicit */_Bool) arr_5 [(short)12])) ? (((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) arr_1 [i_0] [13U])) - (15079))))) : ((+(((/* implicit */int) var_11)))))), (((/* implicit */int) (signed char)-48)))))));
                arr_7 [i_0] [i_1] [4U] |= ((/* implicit */short) ((-399392925187018281LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-15850)))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)46099)) ^ (((/* implicit */int) var_13))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) var_8);
}
