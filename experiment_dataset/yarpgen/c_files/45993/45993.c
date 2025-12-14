/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-605165907 ? var_5 : 7659));
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((((-((6 ? var_4 : (arr_2 [i_0]))))) ^ (arr_2 [i_0])));
        arr_4 [6] = max(var_10, ((((arr_1 [i_0] [i_0]) == (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_8 [7] [7] = (((((var_8 ? (arr_5 [i_1 + 2] [i_1 - 2]) : (arr_5 [i_1 - 2] [i_1 + 4])))) ? (arr_0 [i_1] [i_1]) : (((-(arr_2 [i_1 + 2]))))));
        var_16 = ((-(arr_5 [i_1 + 4] [i_1 + 2])));
        var_17 = (max((max(115, -6689)), ((max((arr_6 [i_1 + 3] [2]), (max(86, 117)))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        arr_13 [i_2] = var_13;
        arr_14 [i_2] [i_2] = (-32767 - 1);
        var_18 = arr_2 [16];
        var_19 = (((!var_10) ^ (((arr_0 [i_2] [i_2]) ? (arr_10 [i_2] [i_2 + 1]) : var_1))));
        arr_15 [i_2] = ((-(arr_1 [i_2 - 2] [i_2 - 1])));
    }
    #pragma endscop
}
