/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45110
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
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] [5ULL] = ((/* implicit */int) 3882333713U);
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */_Bool) var_10);
                    arr_11 [i_0 + 1] [(unsigned short)3] [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((var_4) + (534014982)))))) || (((/* implicit */_Bool) arr_4 [i_0] [i_0])))) ? (max((((((/* implicit */_Bool) 10769298078953544049ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (229376U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) -1))))))) : (((/* implicit */unsigned int) ((max((((/* implicit */int) (signed char)127)), (-2087735736))) * (((/* implicit */int) var_5)))))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (min((((/* implicit */unsigned int) var_2)), (var_3)))))), (((var_9) << (((((/* implicit */int) arr_0 [i_0])) - (75)))))));
        arr_13 [i_0] = ((/* implicit */int) var_5);
        var_15 ^= ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) ((signed char) var_9)))))), (((int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_7 [(short)0])))))));
    }
    var_16 = ((/* implicit */_Bool) var_7);
}
