/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211171
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
    var_13 = ((/* implicit */unsigned short) min(((-2147483647 - 1)), (((/* implicit */int) (signed char)-1))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) arr_1 [i_1]);
                    arr_6 [i_1] [i_1] [i_0] &= ((/* implicit */unsigned short) ((unsigned int) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5))))));
                    arr_7 [i_0 - 2] [i_0] [i_0] [i_0 + 2] = (signed char)16;
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)-3)));
                }
            } 
        } 
    } 
}
