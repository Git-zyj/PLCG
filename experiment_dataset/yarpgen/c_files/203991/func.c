/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203991
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_10))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | ((~(165214227U)))))) ? ((~((~(4129753066U))))) : (((((/* implicit */unsigned int) ((var_2) | (((/* implicit */int) var_1))))) | ((~(2677374364U)))))));
                    arr_9 [i_0] [i_1] [i_2] [0ULL] = ((/* implicit */_Bool) ((var_18) * (((/* implicit */unsigned long long int) ((unsigned int) ((13935522785418191189ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 165214227U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_17)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((short) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_4 + 1]))))) : (((((/* implicit */_Bool) (short)-10562)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20925))) : (4129753068U))))));
                                var_23 *= ((/* implicit */short) (~((+(5149193853744283231ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
