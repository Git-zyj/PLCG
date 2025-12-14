/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-117 ? 2880112675 : 245));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((-((-1749618871 ? 1 : 0)))));
                arr_7 [i_0] [i_0] = ((4294967295 ? 1 : -1749618872));
                arr_8 [0] &= (max(var_2, (max(((0 ? -7937827496554239128 : -109)), ((((arr_3 [2]) ? (arr_3 [9]) : (arr_1 [0]))))))));
                arr_9 [i_0] = (arr_5 [4] [i_0] [i_1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    arr_21 [i_2] [20] [i_3] [i_4] = (((arr_11 [i_3]) ? (arr_19 [1] [1]) : var_1));
                    arr_22 [i_4] [0] [i_4] = ((+(((((arr_12 [5] [0]) || (arr_20 [i_2] [i_3] [i_2])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                arr_31 [13] [13] [13] = (((-(arr_23 [i_6]))) & -1);

                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {
                    arr_35 [5] [10] [i_7 - 1] = ((((((max((arr_17 [i_5] [i_6]), (arr_17 [i_6] [i_5])))) + 2147483647)) << ((max((max(-6477, (-127 - 1))), ((((arr_30 [13]) >= (arr_11 [i_7])))))))));
                    arr_36 [i_5] [i_6] [i_7 + 1] = var_10;
                    arr_37 [i_5] [i_5] = (min((!-8553359594993342884), (((((-15 + 2147483647) >> (8160 - 8140))) >> (120 - 101)))));
                }
                arr_38 [i_5] [i_5] [i_6] &= ((~(((!-23199) ? (arr_30 [i_6]) : (min(var_0, var_3))))));
            }
        }
    }
    #pragma endscop
}
