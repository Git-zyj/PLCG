/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234105
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((-(var_11))) : (var_13)))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (var_8)))), (((((/* implicit */_Bool) var_11)) ? (var_13) : (var_3))))) : (((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24212))))))) + (237342789U)))) ? (((/* implicit */int) (short)15064)) : (((/* implicit */int) (unsigned short)65535)));
                arr_6 [i_1] = ((/* implicit */int) (short)-15055);
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) (((((((-(((/* implicit */int) var_10)))) + (2147483647))) << (((min((((/* implicit */unsigned int) (unsigned short)65535)), (var_13))) - (65535U))))) & (((/* implicit */int) (unsigned short)32))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_9)))))))) : (((((/* implicit */_Bool) (~(1204380546)))) ? (((/* implicit */unsigned int) -1575329905)) : ((-(var_13)))))));
}
