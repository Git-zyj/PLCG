/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5376
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1))))), (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1 - 2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1 - 2] [i_1 - 2] [i_1]))) : (var_7)))));
                                var_15 *= ((/* implicit */short) (-(var_7)));
                                var_16 |= arr_0 [i_0];
                                var_17 = arr_9 [i_0] [i_0] [i_0] [i_0];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((short) var_3))), ((-(var_12)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) : (12490289274465001324ULL)));
}
