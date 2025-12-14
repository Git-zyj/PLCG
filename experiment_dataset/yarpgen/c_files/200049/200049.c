/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~((((min(1908595594, var_3))) ? var_0 : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [3] [i_1] = (arr_1 [i_0]);
                var_12 = -1984380471;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    arr_10 [i_0] [i_2] = ((((((arr_9 [i_0] [i_0 - 1]) ? 1984380475 : 339169879))) ? (18 >= var_10) : var_9));
                    arr_11 [i_2] [i_2] [17] [i_2] = ((((arr_4 [i_0] [i_1]) ? 5 : var_10)));
                    arr_12 [i_0 - 1] [i_1] [i_2] = (((arr_3 [i_0 - 1] [i_0]) ? 1984380483 : (arr_3 [i_1] [i_2 + 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = var_1;
                                arr_19 [i_0] [i_2] [i_0] [12] = var_4;
                                var_14 = (((var_0 ? 106 : var_7)));
                                arr_20 [i_0 - 1] [9] [i_2] = (3072 % -123);
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_15 = ((((var_9 | (1116751264 ^ -82))) <= 1250910857));
                                var_16 = ((!(arr_25 [12] [i_5 + 1] [3] [i_6] [i_7] [i_7])));
                                var_17 = ((~((((max(1073725440, var_4))) ^ (max(3636258862, var_1))))));
                                arr_28 [i_0] [i_1] [i_5] [i_5] [i_7] |= ((((1415287369 <= (arr_17 [i_7] [i_7 - 1] [i_7 - 1] [i_7] [i_7 + 1]))) ? 32767 : (var_0 + var_3)));
                            }
                        }
                    }
                    var_18 &= (max(((max((var_4 - 2064382328), (arr_16 [6] [i_0] [6] [1] [6] [6] [i_5])))), (max((!var_0), 2319504725719383861))));
                }
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    arr_32 [i_8] |= var_1;
                    var_19 = (max(var_19, (((((-(arr_9 [i_0 + 1] [i_8 + 1]))) | (min(var_7, (arr_9 [i_0 - 1] [i_8 - 1]))))))));
                    var_20 = ((((min((min(536870400, var_0)), ((min((arr_13 [i_1] [13]), var_1)))))) ? 2147352576 : (max(1984380462, (max(var_2, 4273937338))))));
                }
                var_21 = ((var_8 ? (arr_21 [i_0 + 1] [12] [i_1]) : (((-1380207533 / (arr_7 [i_0 - 1] [i_1] [i_1]))))));
                var_22 = (((((var_5 ? var_3 : 18))) ? ((max((arr_2 [3]), 2031486575))) : 11223286254016636124));
            }
        }
    }
    var_23 = var_0;
    #pragma endscop
}
