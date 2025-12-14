/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47149
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
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] = ((/* implicit */int) var_15);
                                arr_13 [i_0] [i_1 + 2] [i_0] [i_3 - 1] [i_0] [i_3 + 1] = ((/* implicit */unsigned long long int) arr_5 [i_0] [4U]);
                            }
                        } 
                    } 
                    arr_14 [i_2] [10U] [i_2] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)49981))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_13);
}
