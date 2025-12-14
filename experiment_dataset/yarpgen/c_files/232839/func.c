/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232839
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
    var_11 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135))) : (var_7)))) ? (var_10) : (((/* implicit */unsigned int) ((int) var_3)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] &= ((/* implicit */unsigned int) (unsigned char)138);
                arr_8 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_1] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)0))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) - (arr_2 [i_0])))));
            }
        } 
    } 
}
