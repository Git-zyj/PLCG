/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220260
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) arr_5 [(signed char)2] [i_1] [i_1 - 3] [(signed char)14]);
                    arr_7 [i_0] [4ULL] [i_2] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) var_5);
}
