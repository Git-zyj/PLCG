/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 - 2] [i_0] = (((~(arr_7 [i_0]))) >= ((min(((min(var_10, var_2))), (arr_5 [i_3] [i_4])))));
                                var_13 = ((((min(-10871, (((arr_7 [i_4]) ^ var_10))))) / ((var_1 ? (((-(arr_8 [i_0 - 2] [i_1])))) : (~2691527983852281727)))));
                                var_14 = ((!(((arr_0 [i_0]) && (arr_0 [i_0])))));
                            }
                        }
                    }
                    arr_16 [i_2] [i_0] = (arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((min(((((!(arr_18 [i_0] [i_6]))) && ((min(10, (arr_1 [8])))))), ((var_7 && (var_6 && 3472447292828230065))))))));
                                var_16 = (max(var_16, (~1)));
                                var_17 = ((!((min((((!(arr_3 [i_0] [i_0] [i_0 + 1])))), (((arr_3 [i_5] [i_1] [i_0]) ^ var_12)))))));
                                var_18 = (max(var_18, (((~(((var_5 >= (arr_20 [i_0] [i_1] [i_0 + 3] [i_5] [i_5])))))))));
                            }
                        }
                    }
                }
            }
        }
        arr_21 [i_0] [i_0] = ((((2710245759 != -2583314957743319632) / ((2710245767 * (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]))))));
    }
    var_19 = (min(var_19, var_5));
    var_20 = (((!(((var_10 ? var_6 : var_4))))));
    var_21 = var_10;
    #pragma endscop
}
