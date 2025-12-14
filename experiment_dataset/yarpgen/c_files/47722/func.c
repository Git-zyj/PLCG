/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47722
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((short) var_10)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((((/* implicit */_Bool) (short)9830)) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)27829)) ? (((/* implicit */int) (unsigned short)27829)) : (((/* implicit */int) (unsigned short)37708)))), (((/* implicit */int) arr_2 [i_0] [i_1]))))));
                var_21 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)119))))));
                var_22 = ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)25385)) << (((1180869478) - (1180869476))))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) var_12))))) : (((int) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(min((var_10), (((/* implicit */unsigned long long int) var_12)))))))));
}
