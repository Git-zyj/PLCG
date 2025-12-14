/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((max(8416, var_4)))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_13 = (max(var_13, ((min(((min((arr_0 [2]), var_9))), (((((32989 ? var_1 : (arr_1 [i_0])))) ? var_4 : (268433408 ^ 268433408))))))));
        var_14 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = ((var_9 ? 22275 : (min((max(268433408, (arr_4 [i_1]))), (var_8 * 22279)))));
        var_16 = (min((max((arr_3 [i_1] [i_1]), var_3)), (arr_3 [i_1] [i_1])));
        var_17 = var_7;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = var_0;
        var_18 = var_11;
        arr_10 [i_2] = (max(var_6, 4026533897));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            {
                var_19 = (((arr_13 [i_4] [i_4] [i_4]) ? 538494391023137040 : 4026533887));

                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        var_20 = var_6;
                        var_21 = ((-1957010244 & 22263) + 96);
                    }
                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        var_22 = -28467;
                        arr_23 [i_4] [i_4] = var_0;
                        arr_24 [i_3] [i_4] [i_3] [i_7] &= (max(((((min(var_8, (arr_19 [i_3] [22] [i_4 + 1] [i_3])))) ? (((arr_16 [i_3]) - var_8)) : (arr_11 [i_3]))), (max(2790590381, (arr_19 [i_3] [i_4 + 1] [i_4] [8])))));
                    }
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        arr_28 [i_3] [18] [i_4] [18] [i_4] [i_8] = -58859367;
                        var_23 = (max(var_23, (((35184371564544 / ((1 ? var_7 : (min(17908249682686414576, 64404)))))))));
                    }
                    var_24 = (((((((max(1, (arr_26 [i_3] [7] [i_3]))))) ^ 15935487758865235424)) == 108));
                    arr_29 [i_3] [i_3] [i_4] = (min(((var_7 % (max(var_7, (arr_14 [15] [i_3] [i_3]))))), ((22279 ? ((538494391023137040 ? -996975775 : var_0)) : var_2))));
                    var_25 = (((max(var_11, (((var_0 ? var_9 : 118)))))) ? (((arr_13 [i_4] [7] [i_4]) / var_2)) : (min((var_2 - var_3), (arr_25 [16] [16] [i_3] [i_3]))));
                    var_26 = (min((max(var_4, (1 + 128))), -28362));
                }
                arr_30 [i_3] [i_3] &= (min((max((arr_13 [i_3] [i_4] [i_3]), var_5)), (var_10 > -58859384)));
            }
        }
    }
    #pragma endscop
}
