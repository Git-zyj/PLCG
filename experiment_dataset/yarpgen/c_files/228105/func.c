/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228105
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_0])) << (((((((/* implicit */int) arr_1 [i_0])) + (43))) - (5)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] &= ((/* implicit */_Bool) ((((arr_6 [i_1 - 1] [i_3]) + (2147483647))) >> (((arr_6 [i_1 - 1] [i_1 + 1]) + (1469727647)))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_3])) ? (arr_8 [1U] [i_3]) : (arr_8 [i_1] [i_3])));
                    }
                } 
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [0U]))))) >= (arr_7 [i_0] [i_0] [i_0])));
    }
    var_20 = 65535;
}
