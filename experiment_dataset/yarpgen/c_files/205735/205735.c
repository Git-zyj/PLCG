/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (((((~(arr_0 [i_0])))) ? ((min((arr_0 [i_0]), (arr_0 [i_1])))) : ((max((arr_0 [i_0]), (arr_0 [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (max((max((arr_10 [2] [i_1] [i_1] [i_3] [14]), (arr_9 [12] [12] [4] [12]))), (min((arr_4 [i_1] [i_2]), ((var_1 ? var_9 : var_0))))))));
                                arr_12 [5] [i_1] [i_4] [i_1] [18] = (max((min(2, 65532)), (min((arr_11 [i_4] [i_1]), (arr_10 [19] [i_1] [19] [i_3] [i_4])))));
                                var_16 = (min((min(var_6, (arr_7 [i_0] [i_3] [i_4]))), (min((arr_7 [i_1] [0] [i_4]), (arr_7 [i_3] [i_1] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_17 = (max(var_17, ((max((arr_1 [i_6 - 3]), (min((arr_2 [i_6 - 2] [i_6 - 1] [i_6 + 1]), (arr_7 [i_6 - 1] [i_6 - 3] [i_6 - 2]))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_18 = (max((arr_2 [i_8 - 1] [i_6 + 1] [0]), (max((arr_2 [i_8 + 1] [i_6 + 1] [20]), var_3))));
                                arr_24 [i_5] [i_9] = ((~(max(var_2, (arr_8 [i_6 - 1] [i_7] [i_6 - 1] [i_8 + 1] [i_8 + 1] [i_7])))));
                            }
                        }
                    }
                    var_19 = (arr_8 [i_5] [i_6 - 3] [i_5] [0] [i_5] [i_7]);
                    var_20 = (~var_9);
                }
            }
        }
    }
    var_21 = var_10;
    #pragma endscop
}
