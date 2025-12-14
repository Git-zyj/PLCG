/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236193
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
    var_19 = ((/* implicit */signed char) (short)32767);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */short) (~(0U)));
                    arr_7 [i_1] [i_1] [i_1] = var_12;
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)57))));
                    arr_9 [i_0] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_1])), ((unsigned short)2112)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))) : ((-(3345156589U)))));
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */unsigned int) var_7);
}
