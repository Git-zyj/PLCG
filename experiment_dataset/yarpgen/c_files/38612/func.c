/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38612
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
    for (long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        arr_3 [2] &= ((/* implicit */int) arr_2 [i_0] [i_0 - 1]);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_7 [i_0] = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (signed char)-111)))))) && (((/* implicit */_Bool) (signed char)-87)));
            arr_8 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110)))))) ? (((/* implicit */long long int) (~(arr_5 [i_0] [(unsigned short)13] [i_1])))) : (arr_6 [i_0 - 2] [i_0])))), ((~((~(var_6)))))));
            arr_9 [i_0] = ((/* implicit */int) ((arr_5 [i_0] [i_0 - 1] [i_0 - 1]) == (((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1] [i_0 + 1])) ? (arr_5 [i_0 + 1] [i_0 + 2] [i_1]) : (arr_5 [i_0] [i_0 - 1] [i_0])))));
        }
        arr_10 [i_0 - 3] [(_Bool)1] = ((/* implicit */long long int) (~((~(arr_1 [0ULL])))));
    }
    var_16 = ((/* implicit */unsigned long long int) 4294967277U);
}
