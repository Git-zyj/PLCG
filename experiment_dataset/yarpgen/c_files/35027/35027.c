/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_7 && var_10) != ((((var_4 ? 94 : 28998))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_12 = (max(var_12, ((((((23714 ? var_5 : 0))) ? var_9 : (147 / 8467))))));
        arr_3 [i_0] = var_3;
        var_13 = (2147483647 == 907522199);
        arr_4 [i_0] = 4294967295;
    }
    var_14 = (min(var_1, (((!(1353449835 ^ var_3))))));
    #pragma endscop
}
