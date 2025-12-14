/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215613
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
    var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (var_7)))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) != (((((/* implicit */int) ((var_9) > (var_7)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32)))))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 3221225472U)) * (1125899906809856ULL)));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */unsigned short) 3911700615U);
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_5 [1ULL] [i_1 + 2] [i_2 + 2])) ? (((/* implicit */int) ((arr_3 [i_2] [i_4]) < (((/* implicit */unsigned long long int) var_3))))) : (((/* implicit */int) arr_6 [i_0] [(short)5] [i_1] [i_0])))), (((/* implicit */int) var_12))));
                                var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_2 [i_0 - 1])) & (((/* implicit */int) arr_6 [i_0] [i_4] [4U] [i_4 + 1]))))));
                                arr_15 [0U] [i_1] &= ((/* implicit */unsigned short) arr_8 [i_0 - 3] [i_1] [0U] [i_2] [0U] [i_3]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
