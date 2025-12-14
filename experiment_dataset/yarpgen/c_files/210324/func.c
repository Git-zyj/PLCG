/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210324
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
    var_12 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((var_1) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)-9805)) + (9819)))))) ? ((-(var_7))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_1)) : (var_8)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                var_13 = ((((/* implicit */_Bool) (~((~((-9223372036854775807LL - 1LL))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(unsigned short)6])) ? (arr_2 [i_0]) : (((/* implicit */int) var_11))))) / ((-(9223372036854775807LL))))) : (((/* implicit */long long int) (-(((arr_3 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 3] [i_0])))))))));
                var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned char)18])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_0])))))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65514)) : (((/* implicit */int) (unsigned short)65522))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) : (((/* implicit */int) ((-4946466456921084309LL) >= (-1712769485280941057LL)))))))));
            }
        } 
    } 
}
