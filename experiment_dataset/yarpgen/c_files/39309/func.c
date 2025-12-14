/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39309
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
    var_10 = ((/* implicit */_Bool) (signed char)(-127 - 1));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */signed char) arr_5 [i_0] [i_2] [(unsigned char)14]);
                    arr_8 [(short)3] [i_0] [i_0] [i_0] = ((/* implicit */short) ((arr_5 [i_0] [(_Bool)1] [(unsigned char)7]) < ((+(((/* implicit */int) (signed char)-16))))));
                    arr_9 [(unsigned short)2] &= ((/* implicit */unsigned char) -1152545034);
                    arr_10 [i_2] [14ULL] [14ULL] [i_0] |= ((/* implicit */long long int) max((arr_6 [(unsigned short)8] [5] [(signed char)3]), (((/* implicit */unsigned int) (unsigned short)507))));
                    var_12 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)16))));
                }
            } 
        } 
    } 
}
