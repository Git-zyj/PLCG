/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216297
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
    var_19 = ((/* implicit */unsigned int) var_9);
    var_20 = ((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) (short)8502)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-10130)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)240)), (var_6)))) ? ((+(((/* implicit */int) arr_0 [i_0 + 1])))) : (((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0 + 2]))))));
                arr_6 [i_0 + 1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0]))))), (max((var_17), (((/* implicit */unsigned long long int) (signed char)-48))))));
                arr_7 [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) ((var_18) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (var_14)))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) : ((+(((/* implicit */int) var_18)))))) : (((((/* implicit */_Bool) (short)3411)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (unsigned short)25537)))));
                arr_8 [i_0] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1])) ? (-1810076823) : (((/* implicit */int) var_5))))));
            }
        } 
    } 
}
