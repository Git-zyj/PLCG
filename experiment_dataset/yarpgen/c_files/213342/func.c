/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213342
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
    var_11 = var_2;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) min((arr_5 [i_1] [(unsigned short)2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) var_9)) | (((/* implicit */int) (signed char)15)))) : (var_4))))));
                var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((short) var_10)))) ? (((unsigned int) arr_0 [i_1] [i_1])) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) var_4)) : (max((arr_3 [8U] [i_1] [(signed char)1]), (((/* implicit */unsigned int) var_3))))))));
                var_13 = ((/* implicit */short) 1421191264U);
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) arr_2 [i_0])))));
            }
        } 
    } 
}
