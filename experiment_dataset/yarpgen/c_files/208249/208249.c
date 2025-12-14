/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2 - 3] = (max(((-(arr_5 [i_0] [i_0]))), ((~(max(-1135482965, (arr_2 [i_0] [i_0])))))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] &= (((((-(!29509)))) && ((!(arr_0 [i_0] [i_1])))));
                        var_11 = 1;
                        arr_12 [i_0] [2] [i_3] [i_0] [i_1] [i_1] = max((((!(arr_9 [i_1 + 2] [i_0] [i_2 + 2])))), (arr_4 [10] [i_1] [10]));
                        var_12 = ((!(arr_0 [i_0] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_13 = ((((((arr_14 [i_0] [i_0]) ? (arr_6 [i_5] [i_4] [0] [i_0]) : (((arr_7 [i_0] [i_0]) ^ (arr_16 [8] [1] [i_1 + 1] [8] [8] [8] [i_5])))))) - ((((((arr_2 [i_1 + 2] [i_0]) ? 27 : (arr_2 [8] [i_0])))) ? ((((arr_16 [4] [i_0] [i_1] [4] [1] [1] [11]) << (4294967293 - 4294967291)))) : (~-1)))));
                                var_14 -= (-18525 ^ 1);
                            }
                        }
                    }
                    var_15 = -1020152769;
                    arr_18 [i_2 - 1] [i_0] [i_0] [i_0] = (((((((!(arr_10 [i_0] [11] [0] [i_0] [i_0] [i_0])))) > (arr_13 [i_2] [i_0] [12] [i_0] [1])))) <= (min(((1699691699 ? (arr_13 [i_2] [i_0] [i_1 + 1] [i_0] [i_0]) : (arr_6 [i_0] [i_1 + 1] [i_2] [7]))), (((!(arr_4 [i_0] [0] [i_0])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            {
                arr_25 [i_6] [i_6 + 2] [0] = 1020152759;
                arr_26 [i_6] [i_7] [i_7] = -1020152760;
                var_16 ^= (arr_2 [i_6] [16]);
            }
        }
    }
    #pragma endscop
}
