/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40473
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_5))))), ((~(((/* implicit */int) (unsigned short)65521))))))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_9)) : (15392003748686963096ULL)))) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (unsigned short)44085))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_17 [2] [5LL] [i_4] [i_3 + 3] [i_4 + 1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((arr_13 [i_1 - 1] [i_3 + 2] [i_4] [i_3 + 1] [i_4 + 1] [i_4 + 1]), (arr_13 [i_1 - 1] [i_3 + 2] [i_4] [i_3 + 2] [i_3 + 2] [i_4 - 1])))), (((((/* implicit */_Bool) arr_14 [i_3 + 2] [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4])) ? (((2518488462U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65520))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) ^ (1806933869))))))));
                                arr_18 [i_0] [i_3] |= ((/* implicit */long long int) (_Bool)1);
                                var_10 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14))) * ((-(var_2))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_11 = (~(((/* implicit */int) (_Bool)1)));
}
