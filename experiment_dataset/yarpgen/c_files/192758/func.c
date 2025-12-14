/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192758
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
    var_11 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_4);
                    var_12 += ((/* implicit */short) var_3);
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_0);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 17; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            {
                arr_17 [i_3] [i_3 + 2] [i_3 + 2] = ((/* implicit */short) var_3);
                var_13 += ((/* implicit */short) var_4);
                var_14 = ((/* implicit */unsigned short) var_9);
            }
        } 
    } 
}
