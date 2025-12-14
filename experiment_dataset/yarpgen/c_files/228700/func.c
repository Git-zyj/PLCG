/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228700
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
    for (signed char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)17))))) ? (((max((((/* implicit */unsigned long long int) 3409428433346886660LL)), (var_11))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-9558), (((/* implicit */short) (unsigned char)48)))))))) : (((/* implicit */unsigned long long int) max((min((-3989488895157507998LL), (arr_1 [i_0] [i_1]))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9578))) : (6294356340500842284LL)))))))))));
                var_17 = max((((((/* implicit */_Bool) (short)-9592)) ? (((/* implicit */int) (unsigned char)45)) : (max((arr_0 [(short)6] [i_1]), (((/* implicit */int) (short)-2)))))), ((-(var_1))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (903495308614443228ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned long long int) -10))))))) && (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23500)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43377))) : (var_9))))))));
    var_19 = ((/* implicit */long long int) min(((+(((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */unsigned long long int) 219921634U)) : (var_6))))), (((/* implicit */unsigned long long int) var_1))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) -2147483631))));
}
