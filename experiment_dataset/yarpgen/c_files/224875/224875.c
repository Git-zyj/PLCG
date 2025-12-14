/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] |= (!-2111460759478805220);
        arr_3 [i_0] = (((var_9 + 9223372036854775807) >> (((arr_0 [8] [i_0 + 1]) - 1373050221))));
        var_18 ^= 1065985147;
        arr_4 [i_0 - 1] [i_0 - 1] = (((((((((-38 + 2147483647) >> (((arr_0 [i_0] [i_0]) - 1373050215))))) ? (arr_1 [i_0]) : (arr_1 [i_0 - 2])))) ? ((+((-8588086495478204007 ? (arr_0 [i_0] [i_0 - 1]) : (arr_0 [i_0 - 1] [i_0 + 1]))))) : ((var_5 ? (arr_0 [i_0 - 1] [i_0 - 2]) : (arr_0 [i_0] [i_0 - 2])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_8 [i_1] = 8588086495478204006;
        arr_9 [i_1] &= var_16;
        var_19 = (min(var_19, (((((((((arr_0 [i_1] [i_1]) ? 0 : var_13)) >> (var_16 - 7119924151330025637)))) ? 2 : -4)))));
        arr_10 [i_1] [i_1] = ((~((((((8588086495478204007 & (arr_6 [i_1] [i_1])))) && 3472861437)))));
        var_20 ^= -1;
    }
    var_21 += ((var_15 ? 26 : 0));
    var_22 = ((~((~((8485364753881392128 >> (var_7 + 14085)))))));
    var_23 += (((((0 ? 1 : -42))) ? (min(-4, (max(var_4, var_13)))) : (((~1) - (1 >> 4)))));
    #pragma endscop
}
