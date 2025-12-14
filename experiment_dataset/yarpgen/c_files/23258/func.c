/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23258
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
    for (short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((var_8) % (((long long int) ((((/* implicit */int) var_2)) % (var_10)))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 2] [i_1] [i_2] [i_1]))) : (var_7)))) & (((long long int) arr_7 [i_0] [i_1] [i_2] [i_0 - 2]))));
                    var_12 = ((/* implicit */short) ((unsigned int) (unsigned short)45822));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_11);
}
