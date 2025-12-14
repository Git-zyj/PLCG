/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35490
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
    var_15 = ((/* implicit */long long int) max((((((/* implicit */int) var_9)) >> (((((unsigned long long int) var_1)) - (18446744071768049879ULL))))), (((/* implicit */int) var_14))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1 + 2] [(unsigned char)3] = ((/* implicit */unsigned long long int) var_7);
                    arr_8 [i_0] [i_0] [i_1 - 2] [(unsigned short)3] = ((/* implicit */unsigned short) max((((/* implicit */int) var_14)), (((var_1) / (((/* implicit */int) min((var_13), (arr_6 [i_0] [(unsigned short)7] [i_0]))))))));
                    var_16 = ((/* implicit */unsigned short) 27U);
                    var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */int) min((arr_5 [i_1 + 2]), (arr_5 [i_1 + 2])))) : ((+(((/* implicit */int) arr_5 [i_1 - 1]))))));
                }
            } 
        } 
    } 
}
