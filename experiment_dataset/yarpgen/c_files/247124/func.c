/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247124
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
    for (short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)22917)) ? (((/* implicit */int) (unsigned short)27894)) : (-1733557562))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2 + 1] [i_0 - 3])))))));
                    var_18 -= ((/* implicit */short) arr_0 [i_1] [i_2]);
                    var_19 = ((/* implicit */long long int) max(((unsigned short)42619), (((/* implicit */unsigned short) arr_8 [i_0]))));
                    var_20 ^= ((/* implicit */unsigned long long int) (signed char)0);
                }
            } 
        } 
    } 
    var_21 -= ((/* implicit */unsigned long long int) var_16);
    var_22 += var_13;
}
