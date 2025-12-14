/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248811
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
    var_16 = var_12;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]);
                var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) (unsigned short)65521))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) ((3086219215U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4094))))))))) ? ((+((~(var_4))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)233)))))));
    var_21 = ((/* implicit */unsigned short) var_6);
}
