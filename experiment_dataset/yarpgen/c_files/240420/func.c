/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240420
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
    var_16 = var_14;
    var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 - 1]))))) << (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) arr_5 [i_2 - 1])))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141))) : (1562685331U))), (((/* implicit */unsigned int) ((1470058195U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208)))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned short)22266)))))))));
                    var_19 = var_7;
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-(min((((/* implicit */int) (unsigned char)142)), (((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (unsigned short)22286))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)0)), (((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) | ((~(((/* implicit */int) (unsigned char)102))))))));
    var_21 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((short) (unsigned char)157))) : (((/* implicit */int) var_4)));
}
