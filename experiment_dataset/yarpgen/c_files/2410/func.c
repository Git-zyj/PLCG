/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2410
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
    var_14 = ((/* implicit */unsigned char) (~(var_4)));
    var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */int) var_2))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) arr_1 [i_1 - 4])))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) max((arr_0 [i_1 - 4]), (((/* implicit */unsigned char) arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2]))))) + (max((((((/* implicit */int) arr_0 [i_1])) + (((/* implicit */int) var_5)))), (((/* implicit */int) var_13))))));
                    var_17 = ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))))), (max((arr_5 [i_1]), (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_1 - 4] [i_2]))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_13);
}
