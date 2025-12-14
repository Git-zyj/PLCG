/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_16;
        var_18 = (arr_1 [i_0]);
        arr_4 [i_0] [i_0] = (max((arr_0 [i_0] [i_0]), (7273 < 2)));
        arr_5 [i_0] = (arr_2 [i_0] [i_0]);
        arr_6 [i_0 + 2] = ((18446744073709551607 > (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = ((((!((((arr_0 [i_1] [i_1]) ^ var_15))))) || (((-((10694930646941121158 ? 4194303 : 4055840936)))))));
        arr_9 [i_1] = ((!(arr_1 [i_1])));
        arr_10 [i_1] = ((-(((arr_8 [i_1]) | (arr_2 [i_1] [i_1])))));
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = ((((18446744073709551615 ^ var_13) | (1 | -1820402725))));
        var_20 = (min(var_20, ((((arr_1 [i_2]) ? -63 : ((((!(arr_12 [i_2 + 1]))))))))));
        arr_14 [i_2] = (((((-((((arr_11 [i_2] [i_2]) == (arr_1 [i_2]))))))) ? ((-((-(arr_12 [i_2]))))) : ((-((-(arr_0 [i_2] [i_2])))))));
    }
    var_21 += (((((min(var_13, 1)))) && var_17));
    #pragma endscop
}
