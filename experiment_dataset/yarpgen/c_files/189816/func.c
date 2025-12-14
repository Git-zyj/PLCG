/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189816
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_1] &= ((arr_4 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) (signed char)11)) != (((/* implicit */int) arr_3 [i_1])))))))));
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min(((+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)63864)))))), (((/* implicit */int) max((((/* implicit */unsigned short) ((arr_4 [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))), (arr_1 [i_1 + 1])))))))));
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)159)) ? (min((((((/* implicit */int) arr_1 [i_0])) | (-2070550621))), (((/* implicit */int) arr_5 [i_0] [i_1 - 2] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)100)) != (((/* implicit */int) (signed char)1)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) < ((-(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_17)))))))));
}
