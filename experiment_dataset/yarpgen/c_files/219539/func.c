/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219539
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)30784)) && (((/* implicit */_Bool) (unsigned short)30784))))), (((((-1LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_6)) - (47775)))))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)34752)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)34752))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)204))) - (-3LL))))) : (((/* implicit */long long int) (-(var_0))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */signed char) (unsigned short)29921);
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+(((((/* implicit */int) arr_2 [i_1] [i_0] [i_0])) - (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)15769)))))))))));
                var_22 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (min((var_13), (((/* implicit */unsigned int) (signed char)-64))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned int) (short)-29577))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_2 [i_0] [i_1] [i_0])))) : (var_2)))) : (((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - (-5473672448697913168LL))) << (((((/* implicit */int) var_11)) - (((/* implicit */int) var_11)))))));
            }
        } 
    } 
}
