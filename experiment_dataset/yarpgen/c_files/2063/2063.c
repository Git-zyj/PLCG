/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((((-21056509 || 51929) && (((var_4 ? var_8 : 22928))))) && (((3141119812 || var_7) || (((1153847473 ? var_9 : var_15)))))));
    var_17 = (min(var_17, (2145386496 | -4)));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_18 = ((((((((arr_3 [i_0 - 1] [i_0]) << var_0))) ? ((35189 ? 1023 : (arr_0 [i_0]))) : ((var_7 ^ (arr_2 [i_0 - 3]))))) % (((((arr_1 [i_0 - 1] [i_0]) | (arr_0 [i_0]))) & (var_11 | 42578)))));
        var_19 += ((((((21539 - 17105) >> ((((var_9 & (arr_0 [2]))) - 8282))))) ? ((((1 ? var_14 : var_14)) & ((var_8 ? var_14 : 32767)))) : (((((var_13 != 53556) && ((((arr_3 [i_0] [i_0]) + 678615000)))))))));
    }
    #pragma endscop
}
