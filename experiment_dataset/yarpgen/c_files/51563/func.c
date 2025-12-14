/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51563
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
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_2);
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (-4683010893747538851LL) : (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), ((unsigned short)53577))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_0 [i_0]))))) << (((max((arr_5 [i_0] [(short)5] [i_0] [i_0]), (((/* implicit */int) var_2)))) - (31758)))));
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */unsigned int) max((var_0), (((/* implicit */unsigned short) var_2))));
}
