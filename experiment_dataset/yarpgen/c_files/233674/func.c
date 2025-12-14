/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233674
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
    for (signed char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(arr_3 [(unsigned char)18])))), (((((/* implicit */_Bool) (unsigned short)17669)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) : (var_11)))))) ? (((((/* implicit */_Bool) ((var_14) - (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (max((((/* implicit */long long int) (unsigned short)25957)), (var_12))) : (((/* implicit */long long int) ((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned char)192))))))) : (var_8)));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned char)192), (((/* implicit */unsigned char) arr_0 [i_0] [i_0]))))) ? ((-(((/* implicit */int) (short)-14890)))) : ((-(((/* implicit */int) var_13))))));
                arr_6 [i_0] = ((/* implicit */_Bool) max(((unsigned char)82), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1] [i_1 - 1])) && (((/* implicit */_Bool) arr_0 [i_1] [i_1])))), (((((/* implicit */int) (unsigned char)43)) < (((/* implicit */int) var_10)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) (unsigned short)32767)))))), (min((var_0), (var_11)))));
}
