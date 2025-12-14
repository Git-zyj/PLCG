/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [1] [1] = (max(1284820470, -1843013043));
        arr_4 [i_0] = var_10;
    }
    var_15 = var_12;
    var_16 = ((((((6 ^ 18030) & var_3))) ^ var_10));
    var_17 = ((var_7 && ((max(var_12, (min(924673991, 1284820470)))))));

    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_7 [3] = (max(4598798948258449052, ((min(var_5, (arr_6 [i_1 + 1]))))));
        var_18 = ((~(max((arr_5 [i_1 + 1]), var_4))));
        arr_8 [i_1] = (max(((-(arr_5 [i_1 + 1]))), ((((var_10 == 1) >> (4038100854 == 1843013027))))));
    }
    #pragma endscop
}
