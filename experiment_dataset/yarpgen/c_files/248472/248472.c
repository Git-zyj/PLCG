/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -50;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_16 = 8622;
        var_17 = (((min((!-31176), var_13))) ? (arr_0 [i_0]) : (~5552583914806052517));
        var_18 = ((!(((4294967288 ? -1458403296 : 6729554248591213892)))));
        var_19 = var_10;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (min((((!((max(-1458403296, 11717189825118337699)))))), (min((((var_14 ? 0 : -123))), 1323852286))));
        var_20 = var_11;
        var_21 -= ((((max(0, -19))) ? (((arr_2 [i_1]) ? (arr_1 [14]) : (arr_3 [i_1]))) : 11671));
        var_22 += (var_4 || 15965);
    }
    var_23 = (((-6445123407287817206 ? var_7 : var_13)));
    var_24 = ((6590388799765401503 ? ((max((min(137, 23095)), ((max(-53, var_0)))))) : 23100));
    #pragma endscop
}
