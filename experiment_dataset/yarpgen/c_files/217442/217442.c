/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_14 = (min(var_14, (((((min((min(var_2, var_4)), 1))) ? (((((161 ? var_11 : var_5)) > (var_0 && var_4)))) : (max((max(var_3, 1)), ((177 ? var_3 : 75)))))))));
            arr_6 [i_0] [i_0] [i_1] = ((((((((var_8 ? 3118300632187465504 : 5634041128769666262))) ? (152 - 1240555369) : (max(var_10, -1240555377))))) ? ((((((3118300632187465504 ? var_3 : var_3))) ? var_0 : (var_9 && -1240555394)))) : (((29773 == 1) ? ((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (1240555362 - 1240555346)))) : 3454297706394912268))));
        }
        arr_7 [i_0] [i_0] = ((((max(((var_13 ? var_3 : var_6)), ((var_8 ? var_13 : var_3))))) ? 251 : (max(((var_10 ? var_5 : 0)), var_13))));
    }
    var_15 = ((((((((var_8 ? var_7 : 4294967273))) ? ((var_9 ? var_3 : var_13)) : -var_8))) && ((!(((103 ? 103 : 4351479992375277063)))))));
    #pragma endscop
}
