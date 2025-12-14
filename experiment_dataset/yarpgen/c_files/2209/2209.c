/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_18 = (((arr_2 [12]) % ((((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 - 2]))))));

        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = ((~((~(arr_3 [i_1])))));
            arr_6 [i_1] = (arr_1 [i_0 - 3]);

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_19 = 3018153001830094551;
                var_20 = (arr_1 [i_0 - 1]);
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] [4] [i_5] = (arr_4 [i_0] [i_1 + 4]);
                            var_21 &= (arr_12 [i_3] [i_0] [i_3] [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            var_22 = (((((arr_9 [i_0 + 2] [i_0 + 2] [i_4] [i_0 + 2]) ? (((max((arr_15 [i_0] [i_0] [i_3] [i_4] [i_1 + 2]), (arr_7 [i_6] [i_1] [i_0]))))) : (min((arr_4 [i_1] [7]), (arr_9 [i_0] [i_1] [i_4] [i_4])))))) ? (((arr_10 [i_0 - 2] [i_0 + 1] [i_1] [i_1 - 3]) % (arr_10 [i_0 - 2] [i_0 - 1] [i_1] [i_1 - 3]))) : ((max(16582, (min(35543, 61614))))));
                            arr_20 [i_1] = ((((max((arr_12 [i_1] [i_0 - 1] [i_3] [i_1 - 4]), (arr_10 [i_0] [i_0 - 1] [i_1] [i_1 + 4])))) % (((min((arr_13 [i_1]), (arr_10 [i_0] [i_0] [i_1] [i_0])))))));
                            var_23 = (arr_12 [i_1] [i_3] [i_1] [i_1]);
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_1] [i_7] [i_1] [i_1] [18] [i_0] = (((arr_3 [i_1]) ? (arr_14 [i_0 + 1] [7] [i_3] [22] [22]) : (arr_1 [i_3])));
                            var_24 = (min(-2499449759103252516, 10288854514599830757));
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            arr_26 [i_1] = ((((((min((arr_0 [i_0]), (arr_4 [i_0 - 2] [i_1])))) ? (max((arr_0 [i_0]), (arr_2 [4]))) : ((((arr_9 [i_0] [i_0] [17] [17]) ? (arr_14 [24] [24] [5] [5] [5]) : (arr_19 [i_0] [14] [i_0] [i_4] [21])))))) * (!48953)));
                            var_25 *= (!48954);
                        }
                        arr_27 [i_1] [i_1] = (max((arr_4 [i_0] [i_1]), ((((min((arr_25 [i_1] [i_1] [i_1]), (arr_1 [i_1])))) ? (arr_8 [i_1] [i_1 + 4]) : (((arr_12 [i_1] [6] [i_3] [i_3]) ? (arr_19 [i_3] [i_3] [i_3] [i_3] [i_1]) : (arr_4 [i_4] [i_3])))))));
                        var_26 += (((((~(max((arr_18 [i_0] [i_0] [1] [i_3] [i_0]), (arr_13 [i_0])))))) ? (arr_1 [i_0]) : (arr_4 [i_0] [i_0])));
                        var_27 += ((((((arr_24 [i_0] [i_1 - 2] [i_3] [i_4] [7]) % (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0])))) ? (((min((arr_12 [i_3] [i_0 - 3] [i_1 - 1] [i_1]), (arr_10 [8] [i_1 - 1] [i_3] [i_1 - 3]))))) : ((min((arr_11 [20] [20] [i_3] [i_3]), (arr_10 [i_4] [i_3] [i_3] [i_0]))))));
                    }
                }
            }
            var_28 = (arr_2 [7]);
        }
        var_29 = (arr_12 [12] [i_0] [i_0] [12]);
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        var_30 = ((((((arr_22 [10] [i_9] [i_9] [10] [i_9] [4] [22]) ? (((16581 > (arr_0 [20])))) : 62160))) ? ((~(arr_0 [i_9]))) : (arr_12 [22] [22] [2] [i_9])));
        var_31 = ((((max(((max((arr_8 [2] [2]), (arr_4 [i_9] [18])))), (arr_0 [i_9])))) ? ((+(min((arr_21 [i_9] [i_9]), (arr_24 [1] [i_9] [i_9] [i_9] [i_9]))))) : ((((max((arr_29 [i_9]), (arr_25 [8] [i_9] [8])))) ? (max(793774833, 745036547333674184)) : (arr_9 [i_9] [i_9] [i_9] [i_9])))));
    }
    var_32 = (max(var_32, ((max((((var_9 << ((((min(var_4, var_15))) - 9252))))), (((var_11 ? var_5 : var_2))))))));
    #pragma endscop
}
