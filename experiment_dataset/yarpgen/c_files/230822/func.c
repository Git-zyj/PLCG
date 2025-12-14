/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230822
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
    var_13 = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
    var_14 = ((((/* implicit */_Bool) 1690681274U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26744))) : (2604285991U));
    var_15 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 -= ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) / (((((/* implicit */_Bool) var_4)) ? (((var_5) >> (((var_2) - (1820218189U))))) : (((/* implicit */unsigned int) var_7))))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) var_12);
                var_17 = ((int) (!(((/* implicit */_Bool) var_6))));
                arr_7 [6] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1882613770U)))) ? ((-(var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2604285991U)) ? (710353354) : (((/* implicit */int) (signed char)(-127 - 1)))))) : ((((~(var_6))) / (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-89)) ^ (((/* implicit */int) (_Bool)0)))))))));
            }
        } 
    } 
}
