/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_11 &= (~var_2);
        var_12 = arr_2 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_2] = max((min((arr_8 [i_0] [i_0] [i_0 - 1] [i_0 + 1]), (arr_8 [i_0] [i_0] [i_0 - 1] [i_0 + 1]))), (arr_8 [i_0] [i_0] [i_0] [i_0]));
                    arr_10 [i_0] [i_1] [i_2] &= (arr_3 [i_0] [i_0]);
                }
            }
        }
        arr_11 [i_0] [i_0 + 1] = arr_3 [i_0] [i_0];
        var_13 = (arr_1 [1] [1]);
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_14 = var_1;

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_15 = ((var_4 && (~var_9)));
                        var_16 = (((((arr_18 [i_5 - 1] [i_5 - 1] [2]) || var_8)) && ((((~(arr_15 [i_4] [i_4] [i_4]))) != (((!(arr_13 [i_4]))))))));
                    }
                }
            }
            var_17 = max(((((min(2544630240, var_0)) == (arr_12 [i_4])))), (arr_20 [i_4] [i_4]));

            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_18 = 2646965432797297395;
                var_19 &= ((-(arr_12 [i_3])));
                var_20 = (min((arr_20 [i_4] [i_7]), (~var_2)));
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_21 = arr_17 [i_3] [i_8];
            var_22 = (((arr_21 [i_3] [i_3] [i_3]) / ((-(arr_12 [i_8])))));
            var_23 = ((-(arr_20 [i_3] [i_8])));
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_24 &= min(2442891677861801247, ((((((((arr_18 [i_9] [i_9] [i_3]) == var_1)))) > (arr_23 [i_9])))));
            arr_28 [i_3] = (((-(arr_20 [i_3] [i_9]))) < (((~(!var_9)))));
        }
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
    {
        arr_32 [i_10] = (max(((~(arr_12 [1]))), (((var_1 != (~var_7))))));
        arr_33 [1] = (arr_27 [i_10]);
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        for (int i_12 = 4; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                {
                    var_25 = (max((((arr_40 [i_11] [i_11] [10]) * ((min((arr_40 [i_11] [i_11] [i_13]), var_2))))), -123));
                    arr_42 [i_11] [i_11] [i_13] &= arr_36 [i_11];
                    var_26 = (((min((arr_34 [i_12 - 4]), (arr_34 [i_12 + 1]))) > ((+(max((arr_41 [i_11] [i_12 - 4] [i_13] [i_13]), (arr_34 [i_12])))))));
                }
            }
        }
    }
    #pragma endscop
}
