/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238127
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) max((((/* implicit */int) (short)11631)), (-1891380044)))) ? ((((!(((/* implicit */_Bool) (short)8795)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (short)0)), (-806579530)))) : (1945615737U))) : (((1945615740U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44597))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_15)))) - (((int) (unsigned char)48))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (-1891380058) : (((/* implicit */int) (unsigned short)28942))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) 1891380058)) : (arr_3 [i_2] [i_3])))))));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_12 [i_0] [i_2] [i_0] [i_0] [i_0]))));
                                var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_2] [i_1] [i_2] [i_1] [i_4] [i_2])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_3] [i_4] [i_4]))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_2] [i_2] &= ((/* implicit */unsigned int) var_6);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
}
