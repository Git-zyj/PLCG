/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218228
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
    for (long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-85))))) ? (arr_3 [i_0] [i_0] [(short)15]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_12)))))));
                arr_6 [i_0 + 1] [i_1] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1]))) * (max((arr_3 [i_0] [i_1] [i_1]), (var_4))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_8 [i_2] [i_2]) : (((/* implicit */int) (signed char)-85)))))) < (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) (short)-20594)) : (1399259444))) : (arr_8 [i_2] [i_2])))));
        var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? ((-(arr_7 [i_2] [i_2]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((((/* implicit */int) (signed char)-122)) / (arr_8 [i_2] [i_2]))))))));
    }
}
