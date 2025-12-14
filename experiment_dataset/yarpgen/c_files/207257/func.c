/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207257
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 13; i_2 += 1) 
            {
                {
                    var_15 *= ((/* implicit */short) var_10);
                    var_16 = ((/* implicit */signed char) 70368744177663ULL);
                    arr_9 [i_1] [i_1] [i_1] = arr_7 [i_0] [i_1] [i_2];
                    arr_10 [i_0] [i_0] [(signed char)2] [i_2] &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)-1)))) * ((+(arr_0 [i_0 + 4] [i_2 - 1])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_9);
}
