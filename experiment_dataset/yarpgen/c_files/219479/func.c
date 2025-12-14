/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219479
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
    var_17 = ((/* implicit */signed char) (-(var_11)));
    var_18 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (3261888541U)))))), (((unsigned long long int) 1011254696U))));
        var_20 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        arr_2 [i_0] |= ((((arr_1 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [8LL] [i_0]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188))));
        var_21 = ((/* implicit */int) arr_0 [14LL] [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > (3213961754U)))) / (((/* implicit */int) ((((/* implicit */int) (short)-7273)) <= (((/* implicit */int) arr_3 [i_1])))))))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (3433993681U)))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (min((arr_4 [i_1]), (((/* implicit */long long int) min((arr_7 [i_1] [i_2]), (var_3)))))) : (((/* implicit */long long int) (~(3177168076U))))));
            var_22 = ((/* implicit */unsigned short) ((signed char) var_8));
        }
        arr_10 [i_1] = ((/* implicit */long long int) var_16);
    }
    var_23 |= ((/* implicit */short) ((signed char) ((short) var_4)));
}
