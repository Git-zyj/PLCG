/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215028
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
    for (short i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) min((7277441180970713088ULL), (((/* implicit */unsigned long long int) (unsigned char)0)))))) ? (max(((~(-340670685))), ((~(var_1))))) : (((/* implicit */int) var_16))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_15 [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) : (((/* implicit */int) (short)14870)))))));
                                var_18 = ((/* implicit */unsigned char) var_11);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (-(min((((((/* implicit */int) (short)14870)) - (((/* implicit */int) var_12)))), (((/* implicit */int) var_6))))));
}
