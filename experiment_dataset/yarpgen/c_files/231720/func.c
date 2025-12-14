/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231720
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
    var_13 |= var_8;
    var_14 ^= ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((short) ((((/* implicit */long long int) ((arr_5 [i_0] [i_1] [i_2] [i_2]) ? (((/* implicit */int) var_12)) : (arr_2 [0ULL] [i_1] [i_1])))) | (min((var_6), ((-9223372036854775807LL - 1LL))))))))));
                    var_16 = ((/* implicit */unsigned long long int) (+((~(var_1)))));
                }
            } 
        } 
    } 
}
