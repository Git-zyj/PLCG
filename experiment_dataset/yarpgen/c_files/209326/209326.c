/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((var_10 ? var_6 : var_7)) + ((197 ? 215 : var_7))))) ? var_9 : ((max(var_3, var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_14 [i_0 + 3] [i_0] [8] [i_0] = 4;

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                arr_18 [i_0] [i_1 - 1] [i_0] [i_2] [i_2] [9] [5] = 201;
                                arr_19 [i_0 + 3] [i_0] [i_0] [i_0] &= 0;
                            }
                            for (int i_5 = 0; i_5 < 10;i_5 += 1)
                            {
                                arr_24 [i_5] [5] [i_5] [i_3] [i_5] = ((((((var_0 && (arr_22 [i_5] [i_2]))))) ? 65522 : (~58)));
                                var_12 = var_4;
                                var_13 = ((((((max(-49, 7))) ? var_6 : var_3))) ? ((197 ? 13399866029190269060 : (arr_1 [i_0 + 2]))) : (arr_15 [i_0] [i_0] [5]));
                            }
                        }
                    }
                }
                var_14 -= (~(255 <= 22));

                for (int i_6 = 2; i_6 < 7;i_6 += 1)
                {
                    arr_27 [i_0] [i_0 + 1] [i_0] [i_0] = ((-32 ? 117 : (arr_15 [8] [i_1] [1])));
                    arr_28 [i_0 + 1] [1] [i_0 + 2] [i_0] = 17476474331820419130;
                    arr_29 [i_0 + 2] [i_1] [i_6 - 1] = ((-8043 && ((max((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0]), (arr_9 [i_0 + 3] [i_0 + 3] [i_0]))))));
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_15 -= (((var_2 & var_4) ? (max((arr_2 [i_0 + 1]), (max((arr_32 [i_0] [i_0 + 3] [6] [i_0]), 59676)))) : var_2));
                    var_16 = (min(var_16, (((!(((156 ? (arr_6 [3] [i_1] [i_1]) : (arr_25 [i_1 + 1] [i_1 + 1] [i_7] [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 9;i_9 += 1)
                        {
                            {
                                var_17 = (((((arr_40 [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_9] [i_0] [i_0]) ? (arr_25 [i_0 - 1] [i_1] [i_1] [i_8]) : (arr_25 [i_0 - 1] [i_0 - 1] [i_7] [i_8])))) ? ((-(arr_25 [i_0 - 1] [i_0 - 1] [i_7] [i_0 - 1]))) : (((~(arr_40 [i_0 - 1] [i_1] [i_0 - 1] [i_8] [i_9] [i_8] [i_9])))));
                                var_18 = (max(var_18, ((((((181 ? ((8043 << (2659137329 - 2659137322))) : (arr_26 [i_1 + 1] [i_0 + 2] [i_9 - 1])))) | (max(((1725387073 ^ (arr_2 [i_0]))), ((max((arr_26 [i_0] [i_1] [i_7]), (arr_40 [i_0] [i_0] [i_7] [i_7] [i_7] [i_8] [i_9])))))))))));
                                var_19 ^= (((arr_26 [2] [i_8] [i_9 - 1]) != (((max(58, (arr_4 [i_0 + 2])))))));
                            }
                        }
                    }
                }
                var_20 = (max(var_20, (((64 ? -3660797659943763366 : (((~((251 ? (arr_1 [2]) : -1601972972))))))))));
            }
        }
    }
    #pragma endscop
}
