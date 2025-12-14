/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3900
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
    var_17 = ((/* implicit */unsigned short) 5077052052363219141LL);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-16131)) ? (((((/* implicit */_Bool) (short)16190)) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 1])))) : (((/* implicit */int) (short)-16190))));
                    var_18 ^= ((/* implicit */long long int) (signed char)77);
                }
            } 
        } 
    } 
}
