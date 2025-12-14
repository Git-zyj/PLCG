/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247592
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
    var_12 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0 - 1] [15U] = ((/* implicit */short) (~(((5596247002952812206LL) << (((3323338660U) - (3323338660U)))))));
        var_13 ^= (_Bool)1;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) ((unsigned char) arr_0 [i_1]));
        var_14 = ((/* implicit */long long int) arr_1 [i_1]);
    }
    for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        var_15 = ((/* implicit */_Bool) var_4);
        var_16 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (short)0)))) >> (((min((arr_1 [i_2]), (arr_1 [i_2]))) - (1794500848U)))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_8 [i_2] [i_2]))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) var_11);
        arr_13 [i_3] = ((long long int) (-(((/* implicit */int) ((unsigned char) var_3)))));
    }
}
