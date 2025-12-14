/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218815
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((short) ((unsigned char) (-9223372036854775807LL - 1LL))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_19 = arr_2 [i_1];
                                var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 9223372036854775807LL))) ? (((arr_2 [i_4]) ? (((/* implicit */long long int) 1945301819)) : (arr_10 [i_4] [i_1] [i_4] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28378)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */unsigned char) max((95097832U), (((/* implicit */unsigned int) 1945301819))));
}
