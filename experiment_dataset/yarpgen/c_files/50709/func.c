/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50709
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_17 &= ((/* implicit */unsigned short) max((((/* implicit */int) arr_1 [i_1])), (((((/* implicit */int) arr_1 [i_1])) << (((((/* implicit */int) (unsigned char)242)) - (233)))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((unsigned char) var_3))) : (max((((/* implicit */int) (unsigned char)15)), (var_4)))));
                var_18 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [2]);
                arr_7 [i_0] = ((/* implicit */_Bool) min((((max((var_2), (((/* implicit */unsigned long long int) (unsigned char)13)))) - (((/* implicit */unsigned long long int) ((unsigned int) var_16))))), (((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) arr_3 [(short)7])) : (((/* implicit */int) arr_3 [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                arr_13 [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((max((arr_9 [i_3 + 1]), (arr_9 [i_3 + 1]))) ^ (((((arr_9 [i_3 + 1]) + (2147483647))) >> (((arr_9 [i_3 + 1]) + (1880821156)))))));
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))));
                arr_14 [i_3] [(_Bool)1] = max((((/* implicit */int) (unsigned char)31)), (max((((/* implicit */int) arr_12 [i_2] [i_3] [i_2])), (-2147483645))));
            }
        } 
    } 
}
