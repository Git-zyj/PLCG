/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = var_2;
        var_21 += 16021717589863340195;
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        arr_6 [10] [i_1] &= (arr_4 [i_1]);
        var_22 = 16021717589863340195;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                {
                    arr_15 [i_4 - 1] [i_2] [i_4] [i_3] = var_8;
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_23 = (~var_0);
                                arr_21 [i_2] = (((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) + (arr_13 [i_3] [i_6 + 1] [i_6 - 1])));
                                arr_22 [i_6] [i_6] [i_5] [i_4] [i_4] [i_2] [i_2] = ((var_2 ? var_11 : (((((~(arr_12 [i_4 - 1] [i_5])))) ? var_18 : (~var_3)))));
                            }
                        }
                    }
                    arr_23 [i_2] [i_2] = (~var_18);
                    arr_24 [i_2] [i_3] [i_4] = (((arr_20 [i_2] [i_3] [i_3] [19] [i_3] [i_2]) ? ((((-(arr_8 [i_3]))) ^ var_8)) : (arr_14 [i_3] [i_3])));
                }
            }
        }
        var_24 = (arr_18 [i_2] [i_2] [i_2] [i_2] [2] [i_2]);
    }
    var_25 = 2425026483846211434;
    #pragma endscop
}
