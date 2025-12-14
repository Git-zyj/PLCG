/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    var_18 = (-2147483647 - 1);
                    var_19 = ((var_6 ? (arr_4 [i_2 - 3] [i_1]) : (arr_4 [i_2 - 3] [i_0])));
                    var_20 -= (((arr_6 [i_0] [i_2 - 1] [i_2] [i_0]) ? 2147483647 : (arr_6 [i_0] [i_2 - 1] [i_2 + 1] [9])));
                    arr_7 [i_0] [i_1] [1] &= var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = ((-2147483647 - 1) == (arr_9 [3] [i_1] [i_2 - 4] [i_2]));
                                arr_14 [i_0] = (-2147483647 - 1);
                                var_22 = (((arr_4 [i_2 + 1] [i_2 + 1]) ? (arr_4 [i_2 - 2] [i_2 - 2]) : (arr_4 [i_2 - 3] [i_2 - 3])));
                                arr_15 [10] [14] [14] [i_4] = (arr_13 [i_0] [i_1] [i_3] [i_3] [i_4] [i_1] [i_3]);
                            }
                        }
                    }
                }
                for (int i_5 = 4; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    var_23 = ((((-((2147483647 ? (arr_10 [i_0] [i_1] [9] [i_5]) : var_7)))) / (-2147483647 - 1)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_24 ^= (+((2147483647 << (((-2147483639 + 2147483643) - 4)))));
                                var_25 = (min((max((arr_11 [i_5] [i_5 - 2] [i_5 - 2]), ((((arr_13 [i_0] [i_0] [i_1] [i_5] [i_0] [i_0] [i_7]) - (arr_22 [i_0] [4] [i_5 - 1] [i_0] [i_6] [i_7])))))), ((min(2147483639, (arr_5 [i_0]))))));
                                var_26 = (arr_23 [4] [i_7] [i_5 + 1] [i_5 + 1] [i_7]);
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    var_27 = ((((2147483646 >= (((!(arr_22 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1])))))) && ((min((arr_3 [i_8]), ((((arr_6 [i_0] [i_0] [i_1] [i_1]) ? (arr_27 [i_0] [i_0] [i_8]) : 2147483639))))))));
                    arr_28 [i_0] [i_0] [i_8] = (~((((arr_0 [i_8]) <= ((-2147483639 ? (arr_5 [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0])))))));
                    var_28 |= (max(((((((arr_5 [i_0]) ? var_6 : (arr_12 [i_0] [i_0] [i_8] [i_8] [i_8] [i_8])))) ? (arr_10 [9] [i_0] [i_1] [i_8]) : (arr_9 [i_0] [i_0] [i_0] [i_0]))), (((((~(arr_22 [4] [i_8] [i_8] [10] [i_0] [i_0]))) <= (~-2147483622))))));
                    arr_29 [i_0] [i_1] [i_0] [i_1] = (2147483639 ? ((((((arr_19 [i_0] [4] [i_0] [11]) ? (arr_12 [i_0] [i_1] [i_8] [i_8] [i_1] [i_8]) : var_6))))) : 2147483638);
                }
                var_29 = (min(var_29, ((max((!2147483639), (((arr_2 [i_0] [i_1]) ^ (arr_2 [i_1] [i_1]))))))));
            }
        }
    }
    var_30 = ((max(((max(-2147483639, 2147483638)), var_14))));
    #pragma endscop
}
