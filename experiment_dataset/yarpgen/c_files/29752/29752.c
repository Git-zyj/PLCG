/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (((1767911997 ? 1767911987 : -1767911974)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = (~var_13);
                                var_16 ^= 1767911974;
                                var_17 = (((((arr_13 [1] [3] [6] [i_3] [5] [i_4]) ? (arr_15 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 2] [i_2] [i_4]) : (((0 ? 0 : 17832))))) == (((-(arr_3 [i_1 + 1] [i_1 + 1]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_18 = (min(var_18, (arr_8 [i_1] [i_1] [i_6])));
                                arr_25 [i_1] [i_1] [i_5] [i_6] [i_7] [i_6] [i_6] = var_7;
                                var_19 = 1825204531;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_20 = ((((arr_20 [i_1 - 1] [i_1 - 1] [i_8 - 1]) | (arr_28 [i_1 + 1]))));
                                var_21 = arr_17 [i_0] [i_8 - 1] [i_1];
                                var_22 = ((912407833 ? (arr_13 [7] [i_10] [1] [i_8] [i_0] [i_0]) : ((((-1767911987 ? (arr_18 [i_0] [i_1] [i_1] [6]) : (arr_11 [i_0] [i_1] [i_8 - 1] [9] [0] [1]))) >> (var_3 - 9270366939565091464)))));
                            }
                        }
                    }
                }
                var_23 = (((((arr_11 [7] [i_1 - 2] [i_1 - 2] [i_1 - 1] [1] [7]) ? (arr_11 [i_1 - 2] [i_1 - 2] [i_1] [5] [i_1] [i_1 - 2]) : (arr_11 [1] [i_1 + 1] [i_1] [i_1] [i_1 + 1] [7]))) ^ 448));
            }
        }
    }
    #pragma endscop
}
