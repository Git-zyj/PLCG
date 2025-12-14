/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245411
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_0 [i_1] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2623025094U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)135)) ? (2732952819U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (min((12191003789354628764ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))))));
                var_14 = ((/* implicit */unsigned short) (((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) (short)32767);
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (unsigned char i_3 = 2; i_3 < 22; i_3 += 2) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_13 [i_2] [i_4] [i_3] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) arr_12 [i_4] [i_3])))));
                    var_16 = ((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2]);
                }
            } 
        } 
    } 
}
