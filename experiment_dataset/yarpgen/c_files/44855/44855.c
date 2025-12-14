/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_11 -= (((((0 ? (arr_1 [i_0]) : (arr_1 [i_0])))) && (~1)));

        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = max(((min(1, var_6))), ((-(arr_1 [i_1 - 1]))));
            arr_7 [i_0] = (~var_9);
        }
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            var_12 = ((var_8 ? (((~(((-64 || (arr_3 [i_2]))))))) : (((arr_0 [i_2 + 1]) ? (((arr_2 [1] [2]) ? var_5 : var_0)) : (((~(arr_0 [i_2]))))))));
            var_13 = (max(((((var_0 ? 0 : 1)))), (min(((var_1 ? 100 : (arr_10 [i_0]))), var_8))));
            arr_11 [i_2] = (((((max((arr_4 [i_0] [i_2 - 1]), 1)))) * ((var_4 - (arr_4 [i_0] [i_2 - 2])))));
            arr_12 [i_0] = (arr_9 [9] [i_0]);
            var_14 ^= (max((min((((var_9 ? 74 : (arr_5 [i_0])))), var_4)), (((arr_5 [i_2 - 2]) ? var_1 : (arr_5 [i_2 - 3])))));
        }
        arr_13 [i_0] = (arr_8 [i_0]);
        var_15 = (64 & 1);
        arr_14 [i_0] [i_0] = ((((-((var_9 ? (arr_0 [i_0]) : var_6))))) ? (((var_3 ? var_9 : (arr_0 [i_0])))) : (((1 || var_7) ? ((-64 ? var_1 : var_2)) : (arr_1 [i_0]))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_18 [i_3] [i_3] = (((var_9 ? (arr_5 [i_3]) : (arr_5 [i_3]))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            arr_21 [i_3] = 0;
            var_16 = (min(var_16, (((!(arr_1 [i_3]))))));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_17 *= (((arr_19 [2] [i_5]) << (((max(var_1, var_9)) - 4333290380972344625))));

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                var_18 = (arr_10 [0]);
                arr_27 [i_5] &= -116;
                arr_28 [i_3] [i_5] [i_6] = (1 - 1);
            }
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_19 = (~var_9);
            arr_33 [i_3] [i_3] [i_7] = (((!(((1 ? var_8 : 1))))));
        }
        var_20 = (max(var_20, ((min(var_0, 1)))));
        arr_34 [i_3] [i_3] = (arr_32 [i_3]);
        arr_35 [i_3] = ((!(!var_2)));
    }
    #pragma endscop
}
