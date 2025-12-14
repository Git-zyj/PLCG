/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193040
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
    var_19 = var_16;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_7 [i_0] = max((((/* implicit */unsigned int) arr_5 [i_1])), (((((/* implicit */_Bool) 1237876647U)) ? (((unsigned int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))));
                var_20 = ((/* implicit */unsigned char) ((short) max((var_4), (((/* implicit */unsigned int) ((short) (short)31474))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_13)))), (((/* implicit */int) min(((short)-16584), ((short)22168))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_16))));
}
