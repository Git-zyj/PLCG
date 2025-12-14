/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(((var_18 - 2504911876) + 252))));
    var_20 = 229;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = arr_4 [i_0];
                var_22 = (((arr_1 [2]) ? -1171259520 : (~var_2)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_23 -= (arr_8 [i_2] [i_3] [i_2]);
                            var_24 = ((((((arr_9 [i_1 - 1] [i_2 - 1] [i_0 + 2]) & (arr_9 [i_1 - 1] [i_2 + 1] [i_0 + 1])))) ? ((~(arr_4 [i_0]))) : (((-(arr_3 [i_0] [i_1 + 1] [i_0]))))));
                        }
                    }
                }
                var_25 = (max((4882 ^ 48), ((max(14015, -32745)))));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_26 ^= arr_6 [i_1 - 1] [i_5] [14];
                                arr_19 [i_0] [i_0] [1] [7] [i_5] = ((~(((!(arr_18 [i_0] [i_4 + 2] [i_6]))))));
                                var_27 |= (max((arr_10 [i_6] [i_5] [i_4] [i_1] [i_0 - 2]), ((((-2147483643 ? var_13 : (arr_13 [i_6] [i_5] [i_4] [i_1]))) >> (((var_15 || (arr_5 [i_0] [i_0] [0] [i_6]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = var_8;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 19;i_8 += 1)
        {
            {
                arr_26 [i_7] = (((((-var_6 ? (arr_22 [i_8 - 2]) : ((max((arr_21 [i_7]), var_11)))))) + ((~((100 ? -14030 : (arr_24 [i_7] [i_7] [i_7])))))));
                var_29 = (((((var_2 ? var_6 : 13983))) ? ((((1 ? var_6 : var_10)) ^ 1)) : (((1258234341 ^ (arr_25 [2] [i_8 - 4]))))));
                var_30 = (((((arr_20 [i_8]) ? 0 : 28))) ? ((max((arr_20 [i_8 - 3]), (-1723899714 || var_17)))) : 0);
            }
        }
    }
    #pragma endscop
}
