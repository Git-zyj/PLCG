/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207550
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] &= ((short) min((((((/* implicit */long long int) ((/* implicit */int) var_11))) & (var_9))), (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2] [i_0] [i_4] [i_1]))));
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_1 [1] [i_0]))));
                                arr_15 [i_4] [i_2] [i_3] [i_2] [i_2] [i_0] = (~(((/* implicit */int) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_1] [i_3 + 2] [i_3])))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)65))) + (2600437293U))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 2) 
        {
            {
                var_18 ^= var_12;
                arr_20 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1])) || (((/* implicit */_Bool) max((arr_13 [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1]), (arr_13 [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1]))))));
            }
        } 
    } 
    var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32665)) ? (((/* implicit */int) (short)-256)) : (((((/* implicit */int) (unsigned short)32868)) - (2147483647)))));
}
