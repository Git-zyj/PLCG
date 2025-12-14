/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219189
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? ((((((_Bool)1) ? (504403158265495552LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)102))))) & (((/* implicit */long long int) ((/* implicit */int) ((4112731126145494121ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55391))))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (-4431501404717245004LL))))))))));
    var_16 = ((/* implicit */unsigned long long int) (~(-5192956903316775584LL)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_5 [12LL] [i_0] [i_1])), (((((/* implicit */_Bool) -3792832019212163741LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                arr_7 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) var_4)), ((((~(((/* implicit */int) (unsigned char)255)))) * (((/* implicit */int) min((((/* implicit */signed char) var_13)), (var_8))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)10145)) : (var_10)))) ? (min((13543709338938345096ULL), (((/* implicit */unsigned long long int) (unsigned short)55397)))) : (((/* implicit */unsigned long long int) var_11))))));
}
