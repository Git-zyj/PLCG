/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (-3078809356 && var_4);

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] [9] [i_0] = -4514032553983717246;
            arr_7 [7] [1] [i_0] = (((((arr_0 [i_0]) < (arr_3 [i_0] [i_0] [i_1]))) && ((max((((arr_5 [14] [i_0] [14]) ^ var_2)), (((!(arr_0 [i_1])))))))));
            arr_8 [i_0] [i_0] [i_1] = (max(4514032553983717246, 3789358995006607180));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            arr_12 [i_0] [i_2] = (((((-127 - 1) & var_1))) & (arr_3 [i_0] [i_2 + 1] [i_2 + 1]));
            var_11 += ((-(arr_5 [i_0] [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_12 = ((((-4514032553983717235 ? (arr_0 [i_4]) : 86)) < -87));
                        var_13 = ((-(!665392092)));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_14 = ((~(+-107)));
                    arr_25 [i_7] [8] [8] [i_5] = 1;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    arr_31 [i_5] [i_8] = 3789358995006607180;
                    var_15 = (((((~((~(arr_21 [i_5] [i_8] [i_9])))))) & (((~-119) ^ 0))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_16 &= (((~18446744073709551600) || ((((-(arr_34 [i_5] [i_8] [i_8] [i_9] [i_10] [i_9])))))));
                                arr_38 [i_11] [i_10] [i_5] [i_10] [i_11] = (-665392101 - 6725010107938367099);
                            }
                        }
                    }
                }
            }
        }
        var_17 = 83;
        var_18 = (((((((((~(arr_34 [i_5] [i_5] [i_5] [i_5] [i_5] [3]))) + 2147483647)) << (((11721733965771184516 >= 255) - 1))))) % var_2));
    }
    var_19 = (((((1240184946 ? var_5 : var_7))) ? 0 : var_8));
    #pragma endscop
}
