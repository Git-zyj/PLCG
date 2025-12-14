/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((var_14 ? var_13 : (!var_10))), var_2));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 = (!var_9);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] = (((min((-675685733 ^ 1), var_15))) - (536870910 & -11645815731302853444));
            arr_7 [i_1] [i_0] [i_0] = var_5;
        }
        var_18 -= 1;
    }
    var_19 = (var_1 == 2609061355317888851);
    var_20 = (min(var_20, var_5));
    #pragma endscop
}
