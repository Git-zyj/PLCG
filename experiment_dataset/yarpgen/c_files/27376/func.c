/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27376
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) arr_1 [i_0])))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 23; i_3 += 3) 
                {
                    {
                        arr_11 [i_3] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                        arr_12 [i_0] [i_0] [i_1 + 1] [i_0] = ((/* implicit */short) arr_2 [i_2]);
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */signed char) var_9);
}
