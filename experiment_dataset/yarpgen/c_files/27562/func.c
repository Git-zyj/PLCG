/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27562
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_2 - 1] = ((/* implicit */short) (((-((~(((/* implicit */int) (short)-24672)))))) >= ((-(((220149150) | (((/* implicit */int) (short)32764))))))));
                    arr_10 [i_2] = ((/* implicit */short) (~((~(((/* implicit */int) (_Bool)0))))));
                    var_11 = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((8257536U), (((((/* implicit */_Bool) (short)32764)) ? (4294967295U) : (var_2)))))), (max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))), ((~(-5121185855788338107LL)))))));
                }
            } 
        } 
    } 
    var_12 = var_7;
}
