/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] = 1419687848;
                var_15 = (min(var_15, ((((((((arr_3 [i_1]) || ((((arr_5 [i_1] [i_0] [i_0]) ? 64960 : (arr_4 [i_0])))))))) == ((((14732356812624431503 < (arr_2 [i_1 + 2]))) ? ((var_1 ? 1810409021800492282 : 7375843003581235899)) : 134)))))));
                var_16 ^= var_5;
            }
        }
    }
    var_17 = (max(var_9, (((!101) ? (var_4 < var_13) : var_5))));

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_18 = (arr_9 [i_2]);
        arr_11 [i_2] [i_2] &= ((~(arr_9 [i_2])));
    }
    #pragma endscop
}
