/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max((arr_1 [i_0] [i_0 - 1]), (((arr_1 [i_0] [i_0 - 1]) - (arr_1 [i_0] [i_0 + 1])))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_14 = (max(var_14, ((((max((arr_3 [i_0] [i_1]), (arr_6 [2] [2] [i_2] [i_0 - 1]))) ^ ((((!(var_5 == var_7))))))))));
                    var_15 ^= (arr_5 [i_0] [3] [8] [i_0]);
                    var_16 = (arr_0 [i_0 - 1]);
                    var_17 = ((+((var_10 ? (arr_1 [i_0 - 1] [i_1]) : (!var_8)))));
                }
                arr_7 [i_0] = ((!((!(arr_3 [i_0 + 1] [i_0 - 1])))));
            }
        }
    }
    var_18 = (var_13 <= -var_7);
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                {
                    var_19 = (max(var_19, (((((max((arr_13 [i_5 + 1] [i_4] [i_5] [i_3]), (arr_13 [i_5 - 1] [16] [i_5] [i_5 - 1])))) ? 1 : (((((176 ? var_0 : 1))) ? var_6 : (arr_8 [i_3]))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_23 [i_3] [i_3] [i_5] [i_6] = (((!95) ? (max((arr_20 [i_6] [i_4] [3] [i_6] [i_7] [i_6] [i_4]), ((1 << (arr_11 [i_3]))))) : 80));
                                arr_24 [i_3] [12] [i_6] [i_6] [i_7] = 1;
                                var_20 = (arr_21 [3] [i_4] [i_5] [i_6] [i_6] [i_5]);
                                var_21 = (min(var_21, ((((arr_19 [i_3] [i_4] [i_5] [i_6] [i_7]) ? (((!(((445261858 ? (arr_14 [2]) : (arr_14 [i_3]))))))) : (((!((max(53916, var_2)))))))))));
                            }
                        }
                    }
                    var_22 -= (arr_10 [i_3]);
                    var_23 &= var_13;
                }
            }
        }
    }
    #pragma endscop
}
