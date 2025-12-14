/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~-86);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (var_5 ^ 119);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_15 |= 112;
            arr_5 [i_1] [i_1] [i_0] = ((arr_4 [i_0 + 2]) ? ((7076066789318741868 ? (arr_0 [i_0]) : var_6)) : 79);
            var_16 = 1;
            var_17 -= ((4294967282 <= (arr_1 [i_0] [i_1])));
        }
        var_18 = var_10;
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        var_19 = (min(var_19, ((((((((63 <= (arr_3 [i_2] [i_2 - 2]))) ? (-62 < var_13) : var_12))) ? var_3 : (min(((max(255, 3))), var_4)))))));
        arr_8 [i_2] [i_2] |= ((((max((arr_3 [i_2] [i_2 - 2]), (arr_7 [i_2] [i_2 + 1])))) ? 31 : (((!((min((arr_3 [i_2] [i_2]), var_2))))))));
        var_20 = (max(var_20, ((min(7265853436739133280, -1917)))));
        var_21 = (max(var_21, ((min(30898, (((arr_1 [i_2 - 1] [i_2 - 3]) ? 1068467627 : ((4095 - (arr_1 [i_2] [i_2]))))))))));
    }
    #pragma endscop
}
