/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219176
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) var_8);
                    arr_7 [i_2] [i_2] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))) - (var_3)))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - ((~(var_13))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_2);
}
