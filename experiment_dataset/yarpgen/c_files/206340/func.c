/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206340
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (signed char)112))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)35077)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)54)) || (((/* implicit */_Bool) (short)-25354))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)11454)), ((-9223372036854775807LL - 1LL))))) ? ((-(((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */int) (signed char)-1)) + (var_10))))) ^ ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)4251)) : (((/* implicit */int) var_4))))))));
    var_12 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)61743)))), (var_10))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-6))))))));
}
