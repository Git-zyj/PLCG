/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216985
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
    var_20 = ((/* implicit */long long int) var_7);
    var_21 = ((/* implicit */long long int) var_8);
    var_22 += ((/* implicit */long long int) max((((unsigned int) var_7)), (((/* implicit */unsigned int) ((short) var_3)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [(short)0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2] [6ULL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))));
                    var_23 ^= ((/* implicit */short) ((unsigned int) min((((/* implicit */short) ((unsigned char) arr_0 [i_1]))), (((short) arr_4 [i_0] [6U] [i_2])))));
                    arr_7 [i_2] [i_2] [i_1] [i_2] = var_4;
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 2) 
    {
        arr_10 [i_3 - 1] &= ((short) ((_Bool) arr_4 [i_3] [(signed char)1] [i_3 + 1]));
        var_24 &= ((/* implicit */signed char) var_14);
    }
}
