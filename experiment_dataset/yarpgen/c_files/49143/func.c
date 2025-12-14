/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49143
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_14 += max(((-(1254341774U))), (((/* implicit */unsigned int) var_1)));
                    arr_11 [(_Bool)1] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) var_4);
                    var_15 ^= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)13937))));
                    arr_12 [i_0] [i_2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((unsigned long long int) 3094848111U))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_1 - 1]))))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0])) <= (((/* implicit */int) var_3)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_6);
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)511))));
}
