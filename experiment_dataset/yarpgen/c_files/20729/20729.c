/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((((61104 << (25454 - 25447)))) ? (var_8 | var_9) : (((1 ? 50789 : var_7))));
        var_12 = (max((var_7 / var_3), (arr_2 [i_0])));
        arr_4 [i_0] [i_0] = var_2;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_13 = 2;
            var_14 = (max(var_14, -var_10));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_15 = (max(var_15, 1));
            arr_12 [i_3] = 1;
        }
        var_16 = ((!((1 && (arr_11 [i_1] [i_1] [i_1])))));

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_17 = (min(var_17, (arr_0 [i_4] [i_4])));
            arr_15 [i_4] = ((!((((arr_9 [i_4] [i_4] [i_4]) ? 14637346853774925306 : 230)))));
            var_18 &= ((~((var_6 & (arr_1 [i_4])))));
            var_19 = (((arr_9 [i_1] [i_4] [1]) >> ((((14721 ? (arr_13 [i_1] [i_1] [i_4]) : 14696)) + 5198023567553844298))));
        }
    }
    var_20 = (~var_8);
    #pragma endscop
}
