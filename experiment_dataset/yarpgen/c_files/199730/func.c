/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199730
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) (signed char)-111)))));
                    arr_9 [i_2] [i_2] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_4 [i_1] [i_1 + 1]))) ? ((-(arr_3 [i_1 - 1]))) : (arr_3 [i_2])));
                    var_15 = ((unsigned short) arr_1 [i_1 + 2] [i_1 + 1]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_2);
}
