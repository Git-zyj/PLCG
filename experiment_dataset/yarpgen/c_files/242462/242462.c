/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_20 ^= (min((arr_1 [i_0]), (max((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_12 [i_1] [i_3]))), (((~(arr_12 [i_0] [i_1]))))))));
                        var_21 = max((~-9527), (arr_10 [i_2] [i_3] [i_0] [i_0] [1] [i_2]));
                        var_22 -= (arr_11 [i_0] [i_0] [i_0] [i_0]);
                        var_23 = (max(var_23, (((((min((arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0]), (arr_7 [3] [i_1] [i_2] [i_3])))) ? (((!(arr_10 [i_3] [i_3] [i_2] [i_1] [i_1] [i_3])))) : (arr_12 [i_2] [i_0]))))));
                        var_24 &= (min((arr_2 [i_3]), (min((arr_4 [i_3]), (arr_3 [i_2])))));
                    }
                    var_25 = ((-(arr_7 [i_0] [i_1] [i_1] [i_2])));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 10;i_6 += 1)
            {
                {
                    var_26 = (arr_10 [i_6] [i_6 - 1] [i_6 + 1] [i_6] [i_6] [i_6]);

                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        arr_26 [i_4] [i_5] [8] [i_7 - 1] [i_5] [i_6] = ((-(max(10778572166762887952, -9515))));
                        var_27 = min((min((arr_7 [i_5] [i_5] [i_7 + 1] [i_7 + 1]), (arr_14 [0] [i_5]))), ((min((arr_6 [11] [i_6 - 3] [9]), (arr_12 [i_4] [i_6 - 3])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 9;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_33 [i_10] [i_10] = (((arr_6 [i_9 - 3] [i_9 - 2] [i_9 - 2]) & (arr_6 [i_9 - 2] [i_9 - 2] [i_9 - 1])));
                        arr_34 [i_4] [i_10] = (arr_10 [i_4] [i_4] [13] [i_10] [i_10] [i_10]);
                    }
                    var_28 = (arr_32 [4] [2]);
                }
            }
        }
    }
    #pragma endscop
}
