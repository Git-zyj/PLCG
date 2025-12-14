/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3598
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
    var_10 = ((/* implicit */unsigned long long int) var_9);
    var_11 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) (signed char)-91)), (4042041537158736463ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)90)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((unsigned int) min((((/* implicit */long long int) arr_5 [(unsigned char)11] [i_1])), (var_7)))) * (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_1]))))))));
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_1]))))) ? (((((/* implicit */int) arr_2 [i_0] [i_1])) / (((/* implicit */int) var_1)))) : (((/* implicit */int) (short)-13508))));
            }
        } 
    } 
    var_14 &= ((/* implicit */unsigned char) ((var_6) | (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (14404702536550815152ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)21439)) && (((/* implicit */_Bool) var_0))))) : (((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) var_1))))))));
}
