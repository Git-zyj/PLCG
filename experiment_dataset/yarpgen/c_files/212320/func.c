/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212320
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
    var_18 *= ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned int) (short)-17091)), (3947924192U))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((_Bool) (~(var_0))))) : (min((((/* implicit */int) var_17)), ((+(var_7))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) max((var_20), (max(((+(((/* implicit */int) (unsigned char)232)))), ((+(((/* implicit */int) (short)-15135))))))));
                var_21 = ((((/* implicit */_Bool) (unsigned short)7)) ? ((-(max((var_9), (((/* implicit */unsigned long long int) (unsigned short)54195)))))) : (((/* implicit */unsigned long long int) arr_0 [i_0])));
                var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) var_17)))));
                arr_6 [3] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)20692)) ? (var_2) : (((/* implicit */unsigned int) arr_1 [i_0 - 1])))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)876)) ? (arr_1 [i_0 + 1]) : (((/* implicit */int) var_12)))))));
                var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)1180)) && (((/* implicit */_Bool) (unsigned short)14260)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) var_9))))) : (var_4))))));
            }
        } 
    } 
}
