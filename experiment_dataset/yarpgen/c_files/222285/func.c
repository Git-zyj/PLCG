/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222285
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
    var_18 = ((/* implicit */signed char) var_4);
    var_19 = ((/* implicit */int) var_16);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    var_20 += ((/* implicit */signed char) ((((/* implicit */int) var_0)) - (((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_10)) - (30)))))));
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_17))))) > ((+(var_2)))));
                }
            } 
        } 
    } 
}
