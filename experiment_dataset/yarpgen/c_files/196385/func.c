/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196385
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (268304384U)))))))) * (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_8))))), (max((4026662928U), (((/* implicit */unsigned int) var_9))))))));
    var_15 = ((/* implicit */int) max((var_10), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2)))))));
    var_16 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-64)) : ((~(((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0]))))))) == (arr_3 [i_0] [i_0 - 1])));
                    arr_6 [i_2] [(unsigned char)3] [i_0] [i_0] = ((/* implicit */signed char) min((max((min((4026662890U), (((/* implicit */unsigned int) (signed char)11)))), (((/* implicit */unsigned int) arr_5 [i_0 + 1] [i_0 - 1] [i_0 + 1])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2])) && ((!(((/* implicit */_Bool) (unsigned short)65535)))))))));
                }
            } 
        } 
    } 
}
