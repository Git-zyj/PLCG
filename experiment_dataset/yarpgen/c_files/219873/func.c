/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219873
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                arr_4 [i_0 - 1] [(short)2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) (((_Bool)1) || ((_Bool)1))))));
                arr_5 [i_0 + 2] [i_0 + 2] = ((/* implicit */short) arr_3 [i_1]);
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2] [3ULL])) ? (((var_13) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) ((((arr_3 [i_2]) & (((/* implicit */int) (unsigned char)107)))) + ((~(((/* implicit */int) arr_1 [i_2] [i_2]))))));
    }
}
