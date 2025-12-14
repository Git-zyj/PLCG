/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200938
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_5)) > (1073737728U))))) - ((+(746419730U)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_3)))) + (((var_10) ? (((/* implicit */int) arr_7 [i_1 - 1])) : (((/* implicit */int) var_4))))));
                    var_15 = ((/* implicit */signed char) (~(max((arr_8 [i_0] [i_1 + 1] [(unsigned short)9] [i_2 - 1]), (arr_8 [i_0 + 1] [i_1] [i_2 + 1] [i_0 - 2])))));
                }
            } 
        } 
    } 
}
