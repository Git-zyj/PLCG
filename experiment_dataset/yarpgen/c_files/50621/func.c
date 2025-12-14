/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50621
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
    var_10 = ((/* implicit */short) max((1782421866680420860ULL), (((/* implicit */unsigned long long int) (signed char)50))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) && (((/* implicit */_Bool) var_2))));
        var_11 = ((/* implicit */unsigned int) ((((arr_2 [i_0 - 1]) + (2147483647))) << (((((arr_2 [i_0 - 1]) + (1156164840))) - (11)))));
        var_12 = ((/* implicit */_Bool) (signed char)50);
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [(short)12] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_7 [(short)8] [(short)8]))));
                    var_13 = ((/* implicit */short) arr_1 [i_0] [i_1 + 1]);
                    var_14 = ((/* implicit */short) arr_6 [i_2]);
                    var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */int) ((arr_5 [i_2] [i_1 - 1]) == (((/* implicit */long long int) ((/* implicit */int) var_1)))))) : (((int) arr_2 [(short)17]))));
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1 - 1]))));
                }
            } 
        } 
    }
    var_16 *= ((/* implicit */short) ((unsigned long long int) var_7));
}
