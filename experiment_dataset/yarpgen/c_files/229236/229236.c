/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 -= (~64);
        arr_3 [i_0] = (min((((-1979153289 != 789361652) ? var_8 : (min(1979153279, 14412763983748526010)))), ((((max(13, (arr_2 [i_0]))) < -1979153273)))));
        arr_4 [i_0] = (min(1, 3478497973483835647));
        arr_5 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
    }
    var_18 = (max(var_18, (59263 / 18446744073709551585)));
    var_19 = var_14;
    var_20 = (((max(((var_6 ? var_15 : 1979153292)), -1)) != -var_8));
    var_21 = (min(var_21, var_8));
    #pragma endscop
}
