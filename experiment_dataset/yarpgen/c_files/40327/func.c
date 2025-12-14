/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40327
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
    var_13 &= (unsigned short)64497;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_1])) - (((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) arr_2 [i_1] [(short)10])) : (((/* implicit */int) var_12))))))), ((~(arr_7 [i_0] [i_1]))))))));
                    arr_10 [i_0] [(unsigned char)19] [24ULL] = ((/* implicit */unsigned short) var_0);
                }
            } 
        } 
    } 
    var_15 |= ((/* implicit */short) ((2841445712563336036LL) - (-2841445712563336051LL)));
}
