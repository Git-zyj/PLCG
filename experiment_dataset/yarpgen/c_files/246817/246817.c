/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_11 -= (min((max(((min(-124, -5158))), (arr_1 [i_1 - 3] [i_2 + 2]))), 12363));
                        var_12 = (min(((min((arr_6 [i_1 - 3]), (~var_1)))), 12));
                    }
                    arr_11 [i_1] [i_1] [i_0] = 5151;

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_13 = (18397 - 12);
                        var_14 = (arr_13 [i_1] [i_1] [i_1 - 2] [i_1 - 2]);
                        var_15 += ((1 ? 32767 : 54648));
                    }
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        var_16 ^= ((-(min((((var_8 ? (arr_0 [i_5 - 1]) : (arr_9 [i_1] [i_0] [i_2] [i_5 - 1] [i_2 + 2] [i_1 - 3])))), ((var_2 ? (arr_8 [i_0] [i_1] [i_0] [9] [9] [i_2]) : 446296631))))));
                        var_17 = (min((((!(((~(arr_18 [i_0] [i_1 - 1] [i_2 + 1] [i_1 - 1]))))))), (min((max((arr_9 [i_0] [i_0] [i_1] [i_0] [i_5] [i_5 + 1]), (arr_2 [i_0]))), var_2))));
                        arr_19 [i_1] [1] [i_1] [i_1] = (((((~(arr_9 [i_1 - 3] [0] [i_1] [i_2 + 1] [i_1 - 3] [i_5 + 1])))) ? (((!(arr_18 [i_5 - 1] [i_2 + 1] [i_1 - 4] [i_1])))) : (arr_9 [i_1 - 1] [14] [i_1] [i_2 - 1] [i_2] [i_5 + 2])));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_18 = (min(var_18, (max(((max(((14465 ? 910760004 : 4)), ((((arr_10 [i_0] [9] [3] [i_0] [i_0] [i_0]) | 19177)))))), ((((((arr_18 [i_0] [i_1 - 4] [i_2] [i_2]) ? (arr_23 [i_0] [i_2] [5] [i_1] [i_0]) : (arr_8 [12] [i_2] [6] [6] [i_1 + 1] [7])))) ? (max((arr_9 [i_0] [i_2] [i_6] [1] [i_1] [i_0]), (arr_7 [i_0] [i_6] [i_0]))) : (arr_7 [i_0] [i_2] [i_2])))))));
                        arr_24 [i_1] [i_0] [i_1] [i_2] [i_1] [i_6] = ((~(arr_18 [i_2 - 2] [i_2] [i_2] [i_2 - 2])));
                    }
                    var_19 -= (!(arr_17 [i_0] [i_0] [i_0]));
                }
            }
        }
    }
    var_20 = var_0;
    #pragma endscop
}
