/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209782
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
    var_20 = ((signed char) var_4);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_21 ^= ((/* implicit */_Bool) (-(((((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)8] [i_0]))) : (18446744073709551615ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))))))));
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */signed char) ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18995)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1] [i_1])) + (((/* implicit */int) arr_2 [(_Bool)1] [i_1]))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    arr_12 [i_1] [i_2] [i_1] = ((/* implicit */long long int) (-(arr_10 [i_1] [i_2] [(short)0] [i_3])));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_1]))));
                }
            } 
        } 
    }
}
