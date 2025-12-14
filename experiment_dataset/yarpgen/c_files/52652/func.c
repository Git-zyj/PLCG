/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52652
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
    var_15 |= ((/* implicit */unsigned char) min((((((/* implicit */int) var_4)) >> (((var_9) + (73315101))))), (var_9)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_0] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_2]))));
                    arr_7 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_3 [i_1 + 2])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) (~(((((((/* implicit */int) (short)-23500)) ^ (((/* implicit */int) (signed char)65)))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))))));
}
