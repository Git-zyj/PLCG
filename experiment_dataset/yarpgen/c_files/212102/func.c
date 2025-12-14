/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212102
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((var_9) / (var_1))) / (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_3)))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (short i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) var_3))));
                                arr_15 [i_0] [i_1] [i_0] [3U] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 1112180598U)) && (((/* implicit */_Bool) 405788832))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_12 *= ((/* implicit */unsigned char) ((((var_10) >> (((var_1) - (995639539U))))) != (var_10)));
}
