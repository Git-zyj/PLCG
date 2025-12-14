/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25943
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
    var_15 = ((/* implicit */_Bool) (unsigned char)135);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_6 [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((var_4) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((int) var_3)) : ((-(((/* implicit */int) (unsigned char)158)))))))));
                    var_16 = ((/* implicit */short) ((signed char) ((arr_1 [i_2 + 2] [i_2]) ? (((/* implicit */int) arr_1 [i_2 + 3] [i_2 - 3])) : (((/* implicit */int) arr_1 [i_2 - 3] [i_2])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_14 [3U] [i_3] [i_1] = var_1;
                                arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) ((short) -1976422028));
                                var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_8))) >> (((1976422027) - (1976422006)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
