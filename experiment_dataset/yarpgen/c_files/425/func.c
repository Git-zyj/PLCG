/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/425
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_0)), (var_5))), (((/* implicit */long long int) min((arr_2 [i_0] [i_1 + 1]), (arr_2 [(short)3] [i_1 + 1]))))))) | (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_2 [1] [(unsigned char)1]) : (arr_2 [(signed char)0] [i_1 - 1])))) - (18446744073709551615ULL)))));
                arr_7 [i_1] = ((/* implicit */signed char) 13ULL);
            }
        } 
    } 
    var_16 &= ((/* implicit */_Bool) var_0);
}
