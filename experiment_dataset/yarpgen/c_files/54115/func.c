/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54115
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (min((((/* implicit */long long int) 932045396U)), (var_3))) : (var_4)))) ? (1924061602U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_1))) ? ((-(var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254)))));
                    arr_8 [i_2] [i_1] = (~(arr_6 [i_0]));
                }
            } 
        } 
    } 
}
