/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = var_12;
        arr_2 [i_0] = 10683;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = 1;
        var_17 &= (((((0 ? 54839 : (arr_6 [i_1])))) ? -225224900891541291 : var_7));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_18 &= 2575038058;
        var_19 = (min((min(((min(var_14, var_2))), (11794023871994709693 * 10705))), (1 >> 1)));
    }
    #pragma endscop
}
