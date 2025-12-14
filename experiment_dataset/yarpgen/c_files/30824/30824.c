/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_12 = var_2;
                            var_13 = var_3;
                            arr_9 [i_0] [i_1] [i_2] [i_2] [18] [i_1] = (max((((!((min((arr_4 [i_0] [7] [4] [i_3]), (arr_7 [i_3] [12] [i_2] [11] [i_0]))))))), var_1));
                        }
                    }
                }
                arr_10 [i_1] = ((~((~((-(arr_0 [10])))))));
                arr_11 [i_1] = ((((!((((arr_5 [i_0] [21] [i_1]) * 124))))) ? ((min(1, (arr_6 [20] [15] [i_1] [i_1])))) : 12));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_27 [i_4] [i_5] [i_6 + 3] [i_7] [i_8] = (min((((arr_0 [i_4 + 1]) ? (max((arr_15 [i_5] [i_6] [i_5]), var_6)) : (~249))), ((max((((6 ? 246 : (arr_20 [i_5] [i_6])))), (2310946780 + var_1))))));
                                arr_28 [i_5] [9] [11] [i_4] [i_5 + 1] = ((-(arr_16 [i_6 + 3] [i_8] [i_8])));
                                arr_29 [i_4] = var_0;
                                arr_30 [i_8] [i_4] [i_6] [i_5] [i_5] [i_4] [i_4] = ((var_0 ? 3044086845 : ((((3914270198 || ((min(249, var_3)))))))));
                            }
                        }
                    }
                }
                arr_31 [i_4] [i_4] [i_4] = ((3044086818 - (min(var_10, var_4))));
                var_14 = max(var_4, (arr_25 [i_4] [8] [1] [12] [i_4]));
                arr_32 [i_4] [i_5 + 2] = 19;
            }
        }
    }
    var_15 = ((-(min(var_3, var_2))));
    #pragma endscop
}
