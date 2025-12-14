/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(var_16, var_18))) % var_8));
    var_20 = var_12;
    var_21 = min((((1 >= (var_12 <= -4896377605720464461)))), var_17);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_22 -= ((((((min(var_16, (-9223372036854775807 - 1))) & (arr_2 [i_0])))) ? ((1 ? (max(var_16, var_14)) : ((((arr_1 [2]) * (arr_0 [i_0])))))) : ((((((arr_1 [6]) + 2147483647)) >> (((max(23650, 8905084022270674329)) - 8905084022270674301)))))));
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [7] [i_1] = 1;
        arr_8 [3] = (min(var_10, ((-(arr_6 [i_1])))));
        var_23 = -22419;
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_13 [i_2] = (min((arr_11 [i_2] [i_2]), (max((max(var_14, var_11)), ((max(16, var_8)))))));
        arr_14 [i_2] [i_2] = var_1;
        arr_15 [i_2] = var_16;
        var_24 = (max(1, 23283));
    }
    #pragma endscop
}
