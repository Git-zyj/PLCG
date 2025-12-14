/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245990
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
    var_18 = ((/* implicit */unsigned long long int) (-(var_4)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [5LL] [i_2] = ((/* implicit */signed char) (((-(2612410815U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_1] [i_0])))));
                    arr_8 [i_0] [(unsigned short)2] [i_2] = ((/* implicit */int) ((long long int) (unsigned short)46119));
                }
            } 
        } 
    } 
}
