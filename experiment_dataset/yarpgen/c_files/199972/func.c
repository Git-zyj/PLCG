/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199972
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_13 -= (unsigned short)52024;
                var_14 = ((/* implicit */unsigned long long int) (signed char)-12);
                arr_4 [i_0] [i_1] = ((/* implicit */int) arr_3 [(unsigned char)2]);
                arr_5 [i_0] = ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((max((var_5), (((/* implicit */unsigned int) (_Bool)1)))) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))));
    var_16 = ((/* implicit */signed char) var_8);
}
