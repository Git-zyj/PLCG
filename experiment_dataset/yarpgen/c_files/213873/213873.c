/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((5181 ? var_6 : var_11)) >> (-250 + 274)))) ? var_11 : ((((min(var_9, var_12))) ? var_0 : var_8))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_17 = (max((((var_3 ? (arr_3 [i_0 - 2]) : (arr_3 [i_0 - 2])))), (~var_5)));
        var_18 = (min((((((var_1 ? 239 : 84)) <= (((arr_2 [i_0] [14]) ? (arr_3 [i_0]) : var_15))))), (((((var_12 ? var_6 : var_14))) ? ((-(arr_3 [i_0]))) : (arr_2 [i_0 - 1] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] = (arr_6 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_16 [6] [i_1] [i_1] = ((~(((arr_11 [i_1] [i_2] [i_3]) ? (arr_11 [i_1] [i_2] [i_3]) : (arr_4 [i_1])))));

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_19 *= ((-(!var_5)));
                        arr_21 [i_1] [i_2] [i_3] [i_1] [i_4] = (((((239 ? (~var_10) : var_9))) ? (((var_12 ? ((min(22, -1))) : ((min(15903, -15898)))))) : (min(var_11, var_13))));
                        arr_22 [i_1] [i_2] [i_1] [i_3] [i_4] = (min(var_11, (((arr_3 [8]) & var_11))));
                    }
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        var_20 ^= (min(((var_0 / (arr_24 [i_5] [i_5 - 1] [i_5 + 1] [i_5 + 1]))), (!-64)));
                        var_21 = (((~var_7) >= ((var_13 & (max((arr_19 [i_1] [6] [8] [i_1] [8]), (arr_14 [i_3] [i_3] [i_1])))))));
                        var_22 = (((arr_10 [i_1] [i_5]) - 233));
                    }
                    for (int i_6 = 3; i_6 < 8;i_6 += 1)
                    {
                        arr_28 [i_1] [i_1] [i_3] [i_1] = ((var_7 ? (((-(arr_12 [i_6 - 2])))) : -var_7));
                        arr_29 [i_3] [i_1] [i_3] [i_3] = (min((arr_14 [2] [2] [i_1]), var_0));
                        var_23 = ((var_1 >= ((15922 ? 2 : (arr_25 [i_1] [i_2] [i_1] [i_6 + 1])))));
                    }
                    arr_30 [i_1] [i_1] [i_1] [1] = ((!(((var_1 ? (var_7 || var_3) : (arr_4 [9]))))));
                    arr_31 [i_1] [i_1] [i_1] [i_2] = ((~((-(var_12 == var_0)))));
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 1; i_7 < 8;i_7 += 1)
        {
            var_24 = (((arr_13 [i_7 + 2] [i_1] [i_1] [i_1]) % (arr_13 [i_1] [i_1] [i_1] [i_1])));
            var_25 = (min(var_25, (((0 - ((~(arr_33 [i_1] [i_7 + 3] [i_7]))))))));
            arr_35 [i_1] = (var_9 + var_5);
            var_26 = var_11;
            arr_36 [i_7] [6] [i_1] = ((var_7 & (arr_24 [i_7 - 1] [i_1] [i_1] [i_1])));
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        arr_43 [i_9] [10] [1] [i_1] = var_12;
                        arr_44 [i_1] [i_1] [i_10] [i_10] [i_1] [i_9] = var_7;
                    }
                }
            }
        }
    }
    #pragma endscop
}
