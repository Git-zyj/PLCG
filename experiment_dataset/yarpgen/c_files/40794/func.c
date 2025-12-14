/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40794
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_4 [i_2])))))), (var_7)));
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-31242)), (1071644672U)))) ? (((((/* implicit */_Bool) 1071644680U)) ? (((/* implicit */int) (short)31242)) : (((/* implicit */int) arr_1 [8LL])))) : ((~(((/* implicit */int) var_3)))))))));
                    var_14 -= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (arr_3 [i_0] [i_2 - 2] [i_2]))))));
                    var_15 = var_12;
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */unsigned int) var_5);
    var_17 += ((/* implicit */signed char) ((unsigned int) var_5));
}
