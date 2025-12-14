/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211465
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
    var_16 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) max(((unsigned short)43852), (((/* implicit */unsigned short) var_9))))), (var_11))) == (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((int) max(((+(975978140))), ((+(((/* implicit */int) var_10)))))));
                    var_18 = ((/* implicit */unsigned int) ((signed char) (!(arr_4 [(short)15] [i_0] [i_2] [i_0]))));
                    arr_6 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (2381016336U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_0])))))), (arr_0 [i_0]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_1] [i_0])))))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((((((/* implicit */int) var_4)) + (2147483647))) >> (((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_2])))))))));
                }
            } 
        } 
    } 
}
