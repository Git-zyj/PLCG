/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224652
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
    var_16 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_11))));
                arr_6 [i_1] [i_1] [i_0] = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [(unsigned char)0] [i_0 - 2]))))));
                var_18 = ((min((arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 2]), (arr_5 [i_0] [i_0 - 2] [i_0 - 1]))) / (((arr_5 [i_0] [i_0 - 2] [i_0 + 1]) / (arr_5 [i_0] [i_0 - 2] [i_0 - 1]))));
                var_19 = ((/* implicit */unsigned char) ((var_0) ? (min((((/* implicit */long long int) arr_1 [i_0 - 2] [i_1])), (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) var_2)))), (39579090))))));
            }
        } 
    } 
    var_20 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((((/* implicit */int) var_14)) - (((/* implicit */int) var_15)))) <= ((~(((/* implicit */int) (short)29519))))))), ((-(((((/* implicit */_Bool) (short)-21559)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_13)))))));
}
