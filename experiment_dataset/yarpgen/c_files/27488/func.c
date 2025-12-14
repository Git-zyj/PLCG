/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27488
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (~(arr_1 [i_0] [i_0])))) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))))));
                    var_17 = ((/* implicit */unsigned int) arr_3 [i_1 + 1] [i_1]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_6))))), (((long long int) max((4115905907U), (((/* implicit */unsigned int) var_4)))))));
}
