/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237415
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
    var_14 = ((/* implicit */long long int) max((var_14), (((((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)104)))) - (2400489631204553732LL)))));
    var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)-117)) && (var_4))))))));
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */_Bool) var_11)) ? (3262833608573010657LL) : (((/* implicit */long long int) -522860736)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0 + 1] = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) min((arr_2 [i_0] [i_1 - 1]), (((/* implicit */long long int) arr_0 [i_0])))))), (((min((807466768), (((/* implicit */int) (signed char)-125)))) / (((/* implicit */int) (short)-3015))))));
                arr_6 [i_0] [i_0] [i_0 + 1] = ((signed char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [14]))) : (var_2))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)195)))))));
                var_17 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((-735133527987536419LL) + (9223372036854775807LL))) << (((((/* implicit */int) var_12)) - (92)))))) ? (((((/* implicit */_Bool) -735133527987536419LL)) ? (var_0) : (((/* implicit */unsigned long long int) arr_4 [i_1 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2689596372733859885LL)) && (((/* implicit */_Bool) -17168092)))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 4294967295U)), (arr_2 [i_1] [i_0])))))))));
            }
        } 
    } 
}
