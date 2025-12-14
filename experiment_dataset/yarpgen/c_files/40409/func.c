/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40409
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
    var_10 = ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) (unsigned short)32768)))));
                    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_1] [i_2]))));
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3458764513820540928LL)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((var_5) / (((((/* implicit */_Bool) var_3)) ? (((3458764513820540941LL) % (-3458764513820540928LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 3458764513820540928LL))))))));
}
