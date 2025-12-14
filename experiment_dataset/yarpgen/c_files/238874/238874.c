/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_12 = (arr_1 [i_0]);
        var_13 = (((((((((var_0 + 2147483647) >> (((arr_0 [i_0]) - 22921)))) < (((arr_2 [i_0 - 1]) / var_8)))))) == (var_2 + var_5)));
        var_14 = (15247810514248058323 == -31600);
        var_15 = ((((!(arr_2 [i_0 + 1]))) || (((!var_3) && (arr_1 [i_0 - 1])))));
        var_16 = (min(var_16, ((max(var_8, var_9)))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_17 = ((~(1 != -5778534600278762128)));
        var_18 = (min(((((arr_4 [i_1]) && (arr_3 [i_1 + 1])))), (arr_1 [i_1 + 1])));
        var_19 = (arr_4 [i_1]);
    }
    var_20 = (max(((var_3 ? var_11 : 17393889931227118301)), var_1));
    #pragma endscop
}
