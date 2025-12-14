/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238857
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_8))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) arr_4 [i_1] [i_1]);
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1]);
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 4) 
        {
            {
                var_16 = ((/* implicit */signed char) arr_0 [i_3 - 1]);
                var_17 = ((/* implicit */unsigned int) arr_6 [i_2]);
            }
        } 
    } 
}
