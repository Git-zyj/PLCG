/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] = (((((-1893954673 ? (!var_2) : ((var_13 - (arr_4 [i_0])))))) ? (arr_7 [i_1] [i_1 - 1] [i_1 - 1] [i_0]) : (((arr_5 [i_1] [i_1 - 1]) - var_15))));
                    arr_11 [i_0] [i_1] [i_1] = (((min(var_3, ((1099511627775 ? 1099511627775 : 33891)))) == ((max((min(33891, (arr_4 [i_2]))), (arr_7 [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1]))))));
                    arr_12 [5] [i_1] [i_0] = (~(((3267397512108884995 - -3267397512108885004) - var_1)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [5] [i_1] = ((((((((arr_0 [1]) ? (arr_2 [i_0]) : (arr_6 [7] [i_1 + 1] [i_1])))) + (min(var_15, (arr_5 [4] [i_3]))))) > (((((-(arr_8 [i_0] [i_1] [i_3]))))))));
                                arr_18 [4] [i_1] [i_1] [i_1] [6] [1] [9] = 1229181569979258648;
                                arr_19 [i_1] = 0;
                            }
                        }
                    }
                    var_16 -= (((~var_15) - var_2));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                arr_27 [i_5] [i_5] [i_5] = (arr_5 [i_6] [i_6]);
                arr_28 [i_5] [i_6] [i_6] = ((1893954662 ? ((((!((((arr_5 [i_5] [i_6]) + 10))))))) : (max((((-(arr_6 [i_5] [i_5] [3])))), (0 & var_13)))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_34 [i_5] [i_8] = (~var_10);
                            arr_35 [i_5] [i_8] [6] = (((1099511627775 == 1048575) ? 13685095523941167399 : var_12));
                            var_17 = (min((arr_0 [i_7]), (!-17)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_40 [6] [i_9 - 1] [6] &= ((~(max((arr_31 [i_9 - 1]), (arr_31 [i_9 - 1])))));
                            var_18 -= var_12;
                            arr_41 [i_5] [i_6] [i_9] [i_10] = var_5;
                        }
                    }
                }
            }
        }
    }
    var_19 = var_4;
    #pragma endscop
}
