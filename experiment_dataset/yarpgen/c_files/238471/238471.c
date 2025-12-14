/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_15 &= ((max(var_10, ((((arr_2 [i_0]) || var_0))))));
        var_16 = (min(var_16, ((min((max(1, (arr_0 [2] [i_0 + 2]))), (min(-14959, (arr_0 [8] [i_0 - 1]))))))));
        var_17 |= (min(((max((arr_2 [i_0 + 3]), (arr_2 [i_0 + 1])))), (!14962)));
        var_18 = (0 * 1008);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((((49463 ? 20575 : 573709416528497026))) && 32767);
        arr_6 [i_1] [i_1] = ((16128 ? 18446744073709551613 : 10485826300528002969));
        var_19 = (((((arr_3 [i_1]) % 16073)) - (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])))));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        arr_9 [13] = (min(((var_0 / (arr_8 [i_2 + 2]))), (((16128 < ((-6034 ? 1 : 0)))))));
        var_20 = (((arr_7 [i_2 + 1]) ? (((max((min((arr_8 [1]), 1)), (arr_8 [i_2]))))) : ((~(var_11 / 573709416528497028)))));
    }
    var_21 = -2701190137743312052;
    var_22 = var_10;
    var_23 *= (max(var_5, (((var_11 ? (573709416528497028 < -18071) : (-845886172233073359 ^ var_11))))));
    #pragma endscop
}
