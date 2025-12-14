/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230121
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
    var_10 += ((/* implicit */unsigned char) (~((~((~(var_3)))))));
    var_11 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
                var_12 = ((/* implicit */unsigned char) var_6);
                var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)3968)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3976))) : (-262320576859936271LL)));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [(short)7])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3951)))))) : (var_3))) : (((((/* implicit */_Bool) ((short) var_5))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-3959)))))))));
            }
        } 
    } 
}
