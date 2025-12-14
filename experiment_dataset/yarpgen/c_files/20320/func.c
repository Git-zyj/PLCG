/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20320
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
    var_16 = ((/* implicit */short) (((+(3360984055U))) & (((/* implicit */unsigned int) (+(((/* implicit */int) ((var_3) >= (var_3)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-114)) - (((/* implicit */int) ((unsigned char) ((short) (_Bool)1))))));
                arr_6 [i_0] [(unsigned short)0] &= ((/* implicit */unsigned int) (-(((/* implicit */int) var_14))));
            }
        } 
    } 
    var_17 *= ((/* implicit */short) max((var_4), (((/* implicit */long long int) ((short) ((_Bool) var_1))))));
    var_18 = ((/* implicit */unsigned int) min((var_18), (((unsigned int) ((unsigned char) ((var_2) >= (((/* implicit */unsigned long long int) var_8))))))));
}
