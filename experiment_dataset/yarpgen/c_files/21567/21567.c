/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_20 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((100663296 ^ (((arr_0 [i_0] [i_0]) ? (262136 ^ 100663293) : ((((arr_1 [i_0] [i_0]) ? var_6 : var_6)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = ((((((max((arr_0 [i_0] [i_0]), var_10))) * var_5)) * (arr_3 [i_0])));
                    var_22 = var_15;
                    arr_7 [i_0] [i_1] [i_1] = (((-100663317 || 469762048) != (((arr_3 [i_0]) ? (arr_6 [i_2] [i_0 + 1]) : (~var_7)))));
                }
            }
        }
        arr_8 [i_0] [i_0] = (max((arr_3 [i_0]), ((-(arr_4 [i_0 - 1] [2] [i_0])))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_23 = 536870784;
        arr_11 [i_3] [i_3] = (((-4323220234341831682 / 224) > ((min(var_17, var_7)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_24 |= ((((-100663320 + 2147483647) << (((arr_13 [i_4]) - 3230054061)))));
        var_25 = (((3568314923050631499 ? 3568314923050631508 : 14878429150658920121)));
    }
    #pragma endscop
}
