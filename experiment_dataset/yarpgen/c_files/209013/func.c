/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209013
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
    var_20 = ((/* implicit */short) var_16);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) max((((int) (unsigned short)14)), (min((((/* implicit */int) (_Bool)1)), (min((((/* implicit */int) (_Bool)1)), (1712331155)))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 15879237963460969450ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-25021)) : (1471444397)))) : (1365230883U)))) | (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [12LL] [i_1])) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) arr_1 [i_0]))))), (var_11)))));
                var_23 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [(unsigned char)11] [(unsigned char)11]))) - (arr_2 [i_0 - 1]))), (((((/* implicit */_Bool) var_8)) ? (var_17) : (arr_2 [i_1])))))));
            }
        } 
    } 
    var_24 += ((/* implicit */signed char) min((max(((+(16777215U))), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((unsigned char) (-(var_4)))))));
    var_25 = ((/* implicit */unsigned long long int) min((var_1), (var_5)));
    var_26 = ((/* implicit */signed char) ((unsigned short) ((unsigned long long int) (((_Bool)1) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
}
