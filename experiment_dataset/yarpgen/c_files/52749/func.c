/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52749
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
    var_13 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) ((8814835695376298159LL) > (((/* implicit */long long int) ((/* implicit */int) var_3)))))) != (((/* implicit */int) var_10)))));
    var_14 = (unsigned char)243;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) arr_2 [i_1])) : (-7962749768154796323LL))));
                    var_16 -= ((/* implicit */signed char) min((((/* implicit */unsigned short) ((signed char) arr_7 [i_0] [i_0] [i_1 + 2] [i_1 - 2]))), (arr_7 [i_0] [i_0] [i_1 + 1] [i_1 + 2])));
                }
            } 
        } 
    } 
}
