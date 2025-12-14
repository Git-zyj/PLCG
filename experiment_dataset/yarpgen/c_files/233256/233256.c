/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (var_17 | -30);
        var_20 += ((((((var_10 || -31910) != ((max(16027, -31918))))))) > var_0);
        arr_4 [i_0 - 1] [i_0] |= ((min((arr_1 [i_0 + 1]), var_15)));
        arr_5 [i_0] [i_0] = (((((((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0 + 2])))) ? 3104686468 : var_11))) && ((max(var_7, 18446744073709551615)))));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        arr_9 [12] = (((max(var_8, (max(var_2, 4194303)))) == 102));
        var_21 += (((((arr_1 [i_1]) >> (31909 - 31847))) / ((max((arr_2 [i_1] [i_1]), (~25085))))));
        var_22 = (max(((~(arr_2 [i_1 - 2] [i_1 - 1]))), (((arr_6 [i_1] [i_1 + 1]) ? (28451 <= -31890) : var_8))));
    }
    var_23 = var_6;
    #pragma endscop
}
