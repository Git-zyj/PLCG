/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!((min(var_12, 2506945977576630844)))));
    var_14 ^= var_4;
    var_15 = min(1157819301, var_10);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [5] [i_0] = var_10;
        var_16 = (max(var_16, (((~((-((1 ? var_4 : (arr_0 [i_0] [i_0]))))))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (var_1 && 0);
        arr_8 [i_1] = (min(var_9, 1));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = (((arr_1 [i_2]) ? 641 : (arr_5 [i_2])));
        var_17 = (arr_10 [i_2] [7]);
    }
    #pragma endscop
}
