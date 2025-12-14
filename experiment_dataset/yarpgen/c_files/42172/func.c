/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42172
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
    var_11 = ((/* implicit */unsigned short) (+(((var_7) / (((/* implicit */long long int) -2109826874))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) (signed char)68))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_1 + 1] [i_1 + 1])) ? (arr_6 [i_0 - 3] [i_1 - 1] [i_1 + 1]) : (((/* implicit */int) arr_7 [i_1 + 1] [i_1] [i_1 + 1]))));
                    var_13 &= ((((((/* implicit */int) arr_7 [i_0 + 1] [i_1 + 1] [(signed char)9])) != (((/* implicit */int) var_1)))) ? (((/* implicit */long long int) ((arr_6 [i_0] [i_0] [i_0]) ^ (((/* implicit */int) (signed char)62))))) : (arr_9 [i_1 + 1] [(unsigned short)14] [(unsigned short)7]));
                    arr_11 [i_1] = ((/* implicit */signed char) arr_9 [i_2] [i_1 + 1] [i_0]);
                }
            } 
        } 
        var_14 = ((/* implicit */signed char) ((_Bool) arr_5 [i_0 - 3]));
    }
    var_15 = ((/* implicit */unsigned char) (((((-(8779076385013475252LL))) | (((/* implicit */long long int) var_2)))) - (max((max((((/* implicit */long long int) (signed char)68)), (var_3))), (var_3)))));
}
