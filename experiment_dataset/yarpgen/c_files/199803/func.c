/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199803
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) 225129622)) ? (225129649) : (((/* implicit */int) arr_1 [i_0])))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (long long int i_3 = 4; i_3 < 13; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) max(((+((~(225129622))))), (1147231665)));
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_10 [i_0] [i_3] [i_2] [i_3 - 4] [i_4] [i_4]))));
                                var_16 ^= ((/* implicit */int) ((short) max((((var_4) ^ (((/* implicit */int) arr_3 [i_4] [i_4] [i_2])))), (397480052))));
                                var_17 ^= ((/* implicit */unsigned char) max((((225129612) - (((/* implicit */int) (short)-1)))), (((/* implicit */int) max((arr_7 [i_0] [i_3] [i_3] [i_3 - 4]), (((/* implicit */unsigned short) var_3)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */short) (-((((!(((/* implicit */_Bool) 1816626596)))) ? (((/* implicit */unsigned int) var_1)) : (408239457U)))));
}
