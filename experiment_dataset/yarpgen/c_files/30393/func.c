/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30393
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
    var_12 = ((/* implicit */unsigned int) var_11);
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */int) var_10)), (max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) var_10))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((((/* implicit */_Bool) 9682148301886159271ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_7))) - (18446744073709551469ULL)))))) ? (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) ((var_8) << (((((/* implicit */int) (signed char)7)) - (7)))))) ? (((var_1) & (((/* implicit */int) var_5)))) : (((int) var_10))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 &= ((/* implicit */int) 9682148301886159287ULL);
                var_16 = ((/* implicit */signed char) var_2);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_3 [i_0]))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) ((_Bool) 9890555824905590797ULL)))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (8764595771823392327ULL) : (arr_2 [(short)4] [i_1])))))) ? ((+(12477078192179033443ULL))) : (15115162342752138749ULL)));
            }
        } 
    } 
}
