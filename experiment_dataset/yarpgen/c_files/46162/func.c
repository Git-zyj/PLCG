/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46162
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_10);
                    arr_9 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            {
                var_13 = ((/* implicit */int) var_7);
                arr_16 [i_3 + 1] [i_4] = ((/* implicit */unsigned short) arr_15 [i_3]);
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_0))));
                var_15 += ((/* implicit */_Bool) arr_12 [i_4]);
                arr_17 [i_3] [i_4] = ((/* implicit */unsigned char) var_5);
            }
        } 
    } 
}
