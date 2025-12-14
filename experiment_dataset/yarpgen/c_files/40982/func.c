/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40982
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
    var_16 = ((/* implicit */unsigned char) (-(var_4)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-41)) && (((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2 + 1]))));
                    arr_6 [i_0] [i_1 - 1] [i_1 - 2] [i_1] = ((/* implicit */short) (unsigned short)29259);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((short) var_3))) : ((~(((/* implicit */int) var_6)))))), (var_4))))));
}
