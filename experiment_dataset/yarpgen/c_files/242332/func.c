/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242332
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
    var_17 *= ((/* implicit */unsigned int) ((var_12) ? ((-(((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (var_8)))))) : (((((/* implicit */_Bool) var_13)) ? ((+(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) var_2))))))));
    var_18 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) < ((~(((/* implicit */int) arr_0 [i_0]))))));
                var_20 = ((/* implicit */short) var_12);
                arr_5 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_15)) % (((/* implicit */int) var_15)))) & (((/* implicit */int) ((short) arr_3 [i_0] [i_0] [i_0])))))) == (var_16)));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2490634054444053614ULL)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_1])) : (((/* implicit */int) (unsigned char)196))))) : (((((/* implicit */_Bool) 2490634054444053614ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (18446744073709551606ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 3] [(unsigned char)7])))));
            }
        } 
    } 
}
