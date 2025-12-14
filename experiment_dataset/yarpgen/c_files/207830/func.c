/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207830
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
    var_10 = ((((((var_4) % (((/* implicit */unsigned int) var_7)))) << (((min((var_4), (var_0))) - (1403921141U))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (4294967283U) : (13U)));
                    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) * ((-(((/* implicit */int) (signed char)127))))))) / (var_0)));
                }
            } 
        } 
    } 
}
