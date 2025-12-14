/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        arr_3 [i_0] = (max(var_7, (((arr_1 [i_0 - 1] [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0 + 2])))));
        var_13 = (((((-32767 == ((min(var_8, var_3)))))) >> (((((arr_1 [i_0 + 2] [i_0 + 2]) + (arr_0 [5]))) + 3234332943160222593))));
    }

    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 4; i_2 < 23;i_2 += 1)
        {
            var_14 = (max(var_14, ((max((10 >= 1), ((-(arr_7 [i_2]))))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_1] [i_2] [22] [i_4] = (arr_12 [10] [10] [i_2 - 2] [i_2 - 2] [i_1]);
                        var_15 = (min(var_15, var_6));
                    }
                }
            }
            var_16 ^= ((79 << (32 - 9)));
            var_17 = (((arr_10 [i_2]) ? 1 : (min(15, (arr_10 [i_2 - 4])))));
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 22;i_7 += 1)
                {
                    {
                        var_18 = ((((((arr_10 [i_5 - 1]) ? (var_8 & 6421294080608256836) : (((~(arr_11 [i_1 - 1] [i_1] [1]))))))) ? (min(((var_6 ? 6510690789748455504 : var_0)), (((!(arr_9 [i_1] [i_1])))))) : 4294967295));
                        arr_24 [i_1] [i_7] [i_6] [i_5] [i_1] = 530256631;
                        arr_25 [i_1] = (((166 ? var_6 : (arr_7 [i_1]))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        var_19 = (arr_12 [i_8] [i_8] [i_8] [i_8] [i_8]);
        var_20 = arr_4 [15];
        var_21 = (max(((18014398509481983 | (arr_18 [i_8] [i_8] [i_8] [i_8]))), (!1694204170)));
        var_22 = (min((arr_18 [i_8] [i_8] [i_8] [i_8]), ((~(arr_23 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))));
    }
    var_23 = 175;
    #pragma endscop
}
