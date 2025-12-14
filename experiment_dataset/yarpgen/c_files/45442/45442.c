/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (-32767 - 1);
    var_14 &= ((((var_3 ^ (540552994 | var_12))) | var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_15 *= max(((var_6 ? (arr_3 [i_0] [i_0]) : (arr_4 [i_0]))), (arr_0 [i_1]));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((((((var_9 ? (((0 ? 59462 : (arr_2 [i_0] [i_3] [i_4])))) : var_8))) ? (arr_0 [i_3]) : (arr_7 [i_2] [i_3 + 1] [i_4]))))));
                                var_17 = (((arr_9 [i_0] [i_0]) == (((((72057594037927935 ? 28114 : 16383))) ? 684263843537329275 : (arr_4 [i_0])))));
                                var_18 = (arr_8 [i_0] [i_1] [i_2] [i_2]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    var_19 += (((arr_2 [i_5] [i_5] [i_5]) << (((arr_18 [i_5] [i_7] [i_5] [i_5]) - 55625))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_20 += 2;
                                var_21 = ((var_7 <= (max(((((arr_8 [i_5] [i_5] [i_5] [i_5]) ? 155 : 37422))), 0))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_30 [i_5] [i_6] [i_6] [i_5] [i_6] [i_11] = var_9;
                                var_22 = 385746682008694900;
                            }
                        }
                    }
                    var_23 = ((8656136143532176411 ? var_12 : (var_4 > 6)));
                    var_24 = (((((var_6 ? var_12 : var_6))) ? 89 : var_8));
                }
            }
        }
    }
    #pragma endscop
}
