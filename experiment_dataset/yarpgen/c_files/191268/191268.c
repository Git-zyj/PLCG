/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!(~var_12));
    var_17 = (max(var_17, (((((max(-6558400169088459913, var_9))) ? ((0 ? (min(var_11, var_6)) : ((max(0, 1))))) : (!0))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (max(var_18, (((+((67 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_19 = var_13;

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_20 = (max(var_20, (!var_2)));
                arr_9 [i_2] [i_0] [i_0] [i_0] = var_3;
                arr_10 [i_2] [i_0] [i_0] = ((1 ? 2112726514 : 1));
                var_21 = ((33717 | (arr_3 [i_1 + 1] [i_1 - 1])));
            }
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_22 = ((-1517604550 ? -1517604550 : (arr_3 [i_0] [i_3])));
            var_23 |= (((arr_7 [i_0]) ^ (arr_7 [i_3])));
            arr_13 [i_3] [i_0] [i_0] = (((((2 ? -8192 : 255))) + (arr_4 [i_0] [i_0])));
            var_24 = var_3;
        }
        arr_14 [i_0] = ((62003 ? -1246534572 : 1094542887));
        var_25 = var_12;
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        arr_18 [2] [2] = (max(((min(var_7, var_9))), ((max(var_13, var_2)))));
        var_26 = ((var_11 | ((min((!31818), var_4)))));
        var_27 = (max(var_27, (((var_4 != ((((!((min(var_7, var_6))))))))))));
        var_28 = (42636 | var_13);
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_21 [10] = (((((~(arr_12 [i_5])))) && var_1));

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_24 [i_5] [i_6] = ((((max(183, (arr_22 [i_5] [i_5])))) ^ var_7));
            arr_25 [i_5] [i_6] = ((!(var_3 / var_12)));
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            arr_30 [i_5] [i_7] [i_5] = (min(((-1517604550 * (max(1670772051025502245, (arr_29 [i_5]))))), (((!(arr_5 [i_5] [i_5] [i_5]))))));
            var_29 = (max(((var_11 ? var_1 : 0)), (((var_1 < (arr_6 [i_5] [i_5] [i_7] [i_7]))))));
        }
        arr_31 [i_5] = ((!(((((max((arr_3 [i_5] [i_5]), 23))) ? (max(1928171699, var_15)) : (max(83, (arr_22 [9] [1]))))))));
        var_30 = (min(var_30, 1));
        arr_32 [i_5] [i_5] &= ((((max(var_15, ((max(var_3, var_14)))))) ? (max((!5142), (min((arr_11 [i_5]), var_7)))) : (((max(var_3, var_3))))));
    }
    var_31 = (max(var_31, 3200424409));
    #pragma endscop
}
