/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_20 |= (((!162) ? -1869003783 : (13925 >> 1)));
        arr_3 [i_0] = ((((2393432714 >= (arr_2 [i_0] [i_0 - 2])))) - (((arr_0 [i_0]) % (max(var_5, (arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] = var_9;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] &= arr_5 [i_1] [i_1];
        arr_8 [i_1] = ((((((arr_5 [i_1] [i_1]) ? 255 : 30))) ? (((var_3 ? ((6422 ? 1901534582 : -26235)) : (min(16380, 1))))) : 10588203404823494664));
        var_21 = (max(var_21, ((max(((0 ? 1 : 1)), 1)))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_18 [i_4] [i_2] [i_2] [i_1] = (((arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]) ? 30 : -7702757215163653918));
                        arr_19 [i_1] [i_4] [i_1] [i_4] |= (var_8 == 0);
                        var_22 += ((~(((!(arr_6 [i_3 - 3] [i_3]))))));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_23 = (((arr_20 [15] [i_5]) < ((var_11 - (((var_3 ? var_6 : 58062)))))));
            arr_23 [i_5] [12] [i_1] = ((var_13 << (var_7 - 26130)));
            arr_24 [i_1] [i_5] = var_14;
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
        {
            var_24 += arr_17 [i_6] [i_1] [i_1] [i_1];

            /* vectorizable */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                arr_32 [i_6] = ((~(arr_13 [i_1] [i_1] [i_1] [i_1])));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_25 ^= (((165 ? 17678 : 281337537757184)));
                            var_26 = (-2348 < 60);
                            arr_40 [i_1] [i_8] [8] [i_8] [i_9] = 1966080;
                        }
                    }
                }
                var_27 = (min(var_27, (!21)));

                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    var_28 = -var_3;
                    var_29 = (min(var_29, var_1));

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_30 = (((!var_13) ? var_15 : (arr_15 [i_6])));
                        var_31 += ((-(arr_28 [i_11] [i_7] [i_6])));
                        var_32 = var_13;
                    }
                }
                var_33 = (max(var_33, 56056));
            }
            for (int i_12 = 1; i_12 < 14;i_12 += 1)
            {
                arr_47 [i_6] [i_6] [i_6] = (max(1037126215, 68));
                arr_48 [i_6] = arr_43 [4] [i_12] [i_6] [i_1] [i_1] [i_1] [i_12 - 1];
                arr_49 [i_1] [i_1] [6] [i_12] = (arr_46 [i_12] [i_12 + 2] [i_12 + 2]);
                var_34 = ((+(max(var_8, (((arr_33 [i_6]) & -8276))))));
            }
            arr_50 [i_1] = var_9;
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
        {
            var_35 ^= ((!((min(37717, (~var_13))))));
            arr_54 [13] = ((!((!(arr_21 [i_13] [i_13] [i_1])))));
            var_36 = (max(var_36, var_8));
            var_37 ^= 709365656;
            arr_55 [i_1] [i_13] = 1;
        }
    }
    var_38 *= var_17;
    #pragma endscop
}
