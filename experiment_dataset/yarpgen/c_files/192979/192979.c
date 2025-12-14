/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(1, var_6));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = 44863;
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = ((+(min((1 * var_1), ((1 ? var_11 : var_4))))));
        arr_4 [i_0] = (((((!(arr_1 [i_0] [i_0])))) >> ((((max(1, (arr_0 [i_0])))) ? 1 : var_1))));
        var_14 = (min(var_14, ((((92 % 1) * (min(((var_9 ? 13240693250367047321 : var_0)), (((var_2 ? 130023424 : var_10))))))))));
    }
    #pragma endscop
}
