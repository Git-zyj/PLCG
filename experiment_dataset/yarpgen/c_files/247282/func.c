/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247282
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
    var_13 = var_9;
    var_14 = var_5;
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [(short)6] [i_1] = ((/* implicit */_Bool) arr_3 [i_1]);
                    var_15 = var_3;
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) (-(var_5)));
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                {
                    arr_15 [i_5] [i_5] [i_5] [i_3] = var_4;
                    var_17 = var_7;
                }
            } 
        } 
    } 
}
