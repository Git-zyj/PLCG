/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                        {
                            var_19 &= (((((1 ? var_17 : ((~(arr_7 [i_1] [i_2] [i_1] [i_1] [i_4] [4])))))) ? ((((!(arr_5 [i_4] [i_3] [i_1] [i_0]))) ? (((var_12 > (arr_3 [i_0] [i_1])))) : -73)) : ((((arr_0 [i_3 + 2]) < (arr_9 [i_2] [18] [i_3 + 2] [1] [i_4]))))));
                            var_20 = (max(var_20, 125));
                            arr_13 [i_4] [i_0] [12] [i_3 + 1] [1] [i_0] [i_0] = ((-((((1 == 1) == 1)))));
                            arr_14 [i_2] [i_2] [i_2] [i_3] [i_4] |= ((~(arr_1 [i_2])));
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            var_21 = (((arr_3 [i_3 + 2] [1]) ? 1 : ((~(-127 - 1)))));
                            var_22 -= (max(((0 ? (((arr_11 [i_5] [i_0] [i_2] [i_1] [i_0]) ? var_14 : 250)) : ((~(arr_6 [i_5] [i_0] [i_0]))))), ((var_6 ? ((~(arr_16 [20] [i_3] [i_3]))) : var_14))));
                            var_23 &= ((((((arr_16 [i_0] [i_2] [i_5]) ? (arr_6 [i_1] [i_3] [i_5]) : (arr_6 [i_5] [i_3 + 2] [i_2])))) ? (((arr_3 [i_0] [i_5]) ? ((max(1, 114))) : (arr_2 [17] [i_2]))) : (arr_3 [1] [i_3 + 2])));
                        }
                        arr_18 [i_0] [i_1] [i_1] [i_0] [i_3 + 3] = var_14;
                    }
                    arr_19 [i_2] &= var_9;
                }
            }
        }
    }
    var_24 |= var_4;
    var_25 = (((((((12552 ? var_8 : 243))) ? var_0 : var_6)) + ((max((max(var_14, var_17)), var_10)))));
    #pragma endscop
}
