/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47789
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((var_16) == (((/* implicit */int) arr_0 [i_0]))))), (min((((/* implicit */int) arr_2 [24] [i_1] [i_1])), (var_15)))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0]))));
                var_18 = ((/* implicit */long long int) (!(((((/* implicit */int) (signed char)-40)) == (((/* implicit */int) arr_3 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (short i_5 = 3; i_5 < 14; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), (((min((arr_7 [i_6 + 2] [i_5 + 2]), (arr_7 [i_6 + 1] [i_5 - 1]))) == (max((var_16), (((/* implicit */int) (short)-1163))))))));
                                var_20 = ((/* implicit */unsigned int) arr_5 [i_5 + 3]);
                            }
                        } 
                    } 
                } 
                arr_17 [i_2] [(short)2] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1806484049)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_9 [i_2])))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_0 [8ULL])) : (((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)40)), ((unsigned char)5)))) : ((~(((/* implicit */int) arr_0 [i_2]))))));
            }
        } 
    } 
}
