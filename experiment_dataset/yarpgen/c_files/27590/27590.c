/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (((((var_0 ? var_5 : (max(var_8, var_4))))) ? var_1 : 1));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((arr_0 [22]), (((arr_0 [i_0]) ? var_8 : var_1))));
        var_13 &= arr_1 [i_0];
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    {
                        var_14 = ((min(var_7, (!var_1))));
                        var_15 = -32763;

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            arr_13 [i_3] [i_4] [0] [12] [i_4] &= 32762;
                            var_16 += (!var_10);
                            arr_14 [i_0] [i_3] [1] [23] [i_0] = (arr_12 [i_0] [i_1] [10] [i_0] [i_4] [i_3] [i_2]);
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_17 ^= ((((min(((var_5 ? var_0 : (-32767 - 1))), var_2))) ? (arr_1 [i_0]) : ((((min(26827, 1))) ? ((((arr_3 [14] [i_1] [i_1]) ? 0 : var_1))) : ((var_3 ? 1884355217 : 407998514))))));
                            var_18 = var_6;
                            arr_18 [i_5] [i_5] [i_0] [i_5] [1] [4] = ((max((var_9 < 17), (min(34110702, 15)))));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_19 ^= (arr_4 [i_2] [i_1] [i_0]);
                            var_20 = (arr_20 [i_6] [i_6] [i_3 + 1] [i_2 - 2] [22] [i_6] [i_0]);
                            arr_21 [i_0] [i_0] [i_2] [15] [i_6] = ((((min(var_3, 15))) ? ((min(-28086, 20))) : ((-(min((-2147483647 - 1), (arr_9 [3] [1] [i_2] [11] [20])))))));
                            var_21 &= 19835;
                            var_22 += var_2;
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_23 = (max(var_23, 12));
        var_24 = (min((min(0, -692263216)), (max((arr_22 [i_7]), 3))));

        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_29 [i_8] = ((((min((-2147483647 - 1), -32762))) ? ((-(arr_17 [7] [19] [i_8] [1] [i_8]))) : (!var_7)));

            /* vectorizable */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                arr_34 [i_7] [i_8] [2] [i_8] = 1;
                var_25 = (arr_3 [i_8] [17] [i_9]);
                arr_35 [i_7] [11] [i_9] [i_8] = ((var_9 ? 28675 : var_7));
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
            {
                var_26 += var_4;
                var_27 = (min(208, var_0));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
            {
                var_28 = ((-(arr_6 [i_7] [9] [3] [i_11])));
                arr_40 [0] [8] [i_11] [i_11] &= ((~((0 ? (-2147483647 - 1) : 32767))));
                var_29 = (min(var_29, (arr_31 [10] [i_11] [1])));
            }
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                arr_44 [i_8] [i_8] [0] = ((32752 ? 17097 : 1));
                var_30 ^= (((arr_41 [6] [1] [8] [0]) ? (((arr_11 [0] [24] [10] [24] [1]) ? var_4 : ((6109035196742592081 ? 1 : 2147483647)))) : (10347 - 32756)));
            }
            arr_45 [i_8] = (arr_22 [8]);
        }
    }
    for (int i_13 = 1; i_13 < 16;i_13 += 1)
    {
        var_31 = (max(var_31, 14312838234514519390));
        var_32 = ((-(arr_6 [i_13] [8] [i_13] [i_13])));
        var_33 = ((((arr_1 [i_13 + 2]) << (((min(var_3, (arr_7 [i_13] [i_13] [i_13] [i_13]))) - 246054248)))));
        var_34 &= arr_6 [i_13] [i_13] [i_13] [2];
    }
    #pragma endscop
}
