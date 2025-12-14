/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_3;
        var_10 = (min(var_10, (10 * -7861)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_11 = (max(var_11, var_0));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_12 = (min(var_12, (((-7861 ? 7861 : 18446744073709551615)))));
            var_13 = -1104;
            var_14 = (min(var_14, ((((~32) ? var_6 : (((((-1114 && -1099) && (((-15 ? var_1 : 18446744073709551594))))))))))));
            var_15 = (min(var_15, var_2));
            var_16 = (min(var_16, ((((((-13657 ? 110 : ((-(arr_6 [i_2])))))) && var_6)))));
        }
        var_17 = var_2;
        var_18 = var_6;
    }
    var_19 = ((((~((112 ? 1 : 4294967287)))) << (var_3 - 1065407909)));
    #pragma endscop
}
