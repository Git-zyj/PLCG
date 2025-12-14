/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34017
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
    for (short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [(unsigned short)6] [i_2] = ((/* implicit */_Bool) var_9);
                    arr_9 [(unsigned short)5] [i_1 - 4] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_8);
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */short) (unsigned char)243);
}
