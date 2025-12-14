/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20892
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
    var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
    var_16 = ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned int) var_1)))) < (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)126)) % (((/* implicit */int) (unsigned char)129)))))))) : (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)128)), (var_1)))) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) var_8)))));
    var_17 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_3)))) ? (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)18665)) ? (var_11) : (386398999U)))))), (((/* implicit */unsigned long long int) var_6))));
    var_18 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)16264))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_8))))) : ((~(-1189291114389368711LL)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)190)) ? (arr_1 [i_0]) : (var_1))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) : (((/* implicit */int) (signed char)-41))));
                arr_6 [0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1073741823)) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) var_2)))), (((/* implicit */int) min((arr_4 [i_0] [(unsigned char)15] [1]), (((/* implicit */unsigned short) var_6)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)65))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16936))) : (386398999U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (signed char)-47)))))) : (((arr_3 [i_0] [i_1] [i_1]) ? (2995476218528310560ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [(unsigned short)16] [i_1])))))))));
            }
        } 
    } 
}
