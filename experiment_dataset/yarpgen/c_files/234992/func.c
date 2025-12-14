/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234992
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                    arr_9 [i_2] [16] [i_1] [i_2] = ((/* implicit */unsigned short) arr_6 [i_2] [i_2] [i_0]);
                }
            } 
        } 
        var_11 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_0] [i_0] [i_0])), (var_10)))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        var_12 ^= ((/* implicit */_Bool) var_10);
        var_13 = ((/* implicit */long long int) ((short) ((arr_11 [i_3] [i_3]) >> (((((/* implicit */int) (short)-23236)) + (23242))))));
    }
    var_14 |= ((/* implicit */unsigned int) (_Bool)0);
    var_15 += ((/* implicit */short) var_4);
}
