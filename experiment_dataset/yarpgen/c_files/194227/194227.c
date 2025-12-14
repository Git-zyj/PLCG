/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = ((!(var_4 + var_3)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_9 [i_0] [i_3] [i_3] [i_3] [7] = (((arr_4 [i_2 + 1]) ? (((~(arr_7 [2] [i_3] [i_2 - 1] [i_1] [i_1] [7])))) : 9878339135710881516));
                        arr_10 [i_3] [i_1] [i_3] = (max((arr_6 [9] [i_0]), (((!(((-(arr_3 [i_1] [i_1])))))))));
                        arr_11 [i_3] [i_1] [i_2 - 1] [i_3] [i_0] [i_0] = -285293387;

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_16 [i_3] = ((arr_12 [i_0] [i_3] [i_3] [i_3] [i_3]) + (!var_0));
                            var_17 = 0;
                        }
                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_3] = (arr_4 [9]);
                            var_18 = (min(((((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [10]) + var_0))), (((max(3405672263, var_11))))));
                            var_19 = ((~((((max(11053939934560537010, var_0))) ? (!var_14) : -104))));
                        }
                    }
                    var_20 = (min(var_20, 1));
                    arr_22 [i_0] [i_1] [i_2 - 2] [i_2 - 2] = (min(var_4, (max(var_12, -113))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((!(var_14 && var_14))))));
                                arr_29 [i_0] [i_1] [i_2 + 1] [i_6 - 2] [0] = var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (var_13 ? var_14 : var_9);
    var_23 = 74;
    #pragma endscop
}
