/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_10 ^= (((min(-4294967295, ((((arr_1 [i_0]) ? (arr_0 [1] [i_0]) : (arr_1 [0])))))) <= (arr_0 [i_0 + 1] [i_0])));
        var_11 = ((~(min((((arr_1 [i_0]) ? 653179689926695024 : 255)), ((((arr_1 [i_0]) - 9223372036854775807)))))));
        arr_3 [i_0] = ((((((arr_0 [10] [i_0]) ? (arr_2 [i_0 - 1] [7]) : (max(var_5, var_6))))) ? (((((((var_2 == (arr_0 [i_0] [9]))))) % var_0))) : (((arr_0 [i_0 - 1] [i_0]) ? 8606152201701279178 : (((min(65535, 127))))))));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        var_12 |= ((max(var_4, var_9)));
        arr_6 [i_1] = (arr_4 [i_1]);
        arr_7 [i_1 + 1] = var_1;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_13 = (min(var_13, ((((((~(arr_8 [i_2] [i_2])))) ? ((3927327486703436764 ? (arr_1 [i_2]) : 0)) : ((-(arr_5 [i_2]))))))));
        var_14 = (max(var_14, (((255 ? ((~(!-1809450709))) : 22)))));
    }
    var_15 |= (((15 * (0 / 1))));
    #pragma endscop
}
