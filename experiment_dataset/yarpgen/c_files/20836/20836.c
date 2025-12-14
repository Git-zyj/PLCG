/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_3 [i_0]) ? (min(15130, (min((arr_1 [i_0]), (arr_1 [i_0]))))) : (var_8 / var_3)));
        arr_5 [i_0] [i_0] = (!((max(18446744073709551607, (5 * 0)))));
    }
    var_13 = (((((35682 >= 2147483647) ? (((max(var_0, var_11)))) : var_10)) != ((((1142667475 != 12964) ? var_9 : var_4)))));
    var_14 |= ((333339306 << (18446744073709551606 - 18446744073709551577)));
    #pragma endscop
}
