/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230418
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
    var_17 = ((/* implicit */long long int) var_16);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1 - 2])))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) var_3);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_4)) : (2124103257))), (((/* implicit */int) var_10))))));
}
