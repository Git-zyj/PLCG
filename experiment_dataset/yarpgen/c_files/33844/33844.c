/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
        {
            arr_4 [8] [i_1 + 2] [i_1] = 10006;
            arr_5 [i_1] = (!11);
            arr_6 [i_1 + 1] [i_1] [i_1 + 1] = var_11;
            arr_7 [i_0] [1] [i_0] |= (~-10011);
            arr_8 [i_1 + 2] [i_1 + 2] [i_0] = ((((((arr_1 [i_1]) && -10015))) & (arr_3 [i_0] [i_1 - 1])));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
        {
            arr_13 [i_2] = ((11843122989132705758 ? 10001 : 20));
            arr_14 [7] [i_2] [i_2] = -5733808048926375096;
            arr_15 [i_0] [i_0] [i_2] &= ((1 ? (arr_2 [i_2 + 2] [9] [i_0]) : 162));
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
        {
            arr_20 [i_0] = ((((((10003 ? -348956207 : 10005))) && ((max((arr_3 [8] [i_3]), 562949953421311))))) ? (min((arr_19 [10] [10] [i_0]), (arr_0 [i_3 + 2] [i_0]))) : ((((arr_0 [i_3 - 1] [i_3 - 1]) == (arr_10 [i_0] [i_3 + 1])))));
            arr_21 [i_3 + 1] [11] [11] = (arr_19 [i_3 - 1] [i_3] [i_0]);
            arr_22 [10] = (min((((1 ? 137165020 : -1))), 1159254619968678190));
        }
        arr_23 [7] = ((((65514 >= 17) ? ((var_8 ? var_9 : (arr_10 [3] [i_0]))) : ((min(var_4, var_10))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_27 [i_4] [i_4] = (((!var_7) <= ((((max((arr_25 [i_4]), var_6)) >= 1)))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_35 [i_4] [i_4] [i_5] [i_6] [i_7] = (-1159254619968678189 < -1614361595);
                        arr_36 [i_4] [4] [i_6 + 4] [i_7] = ((var_11 ? 65341 : ((((arr_34 [i_4] [i_5] [i_4] [i_6] [1] [1]) == 1128332352)))));
                        arr_37 [i_4] [i_4] [i_4] [i_4] = 2150595187;
                        arr_38 [i_4] [i_5] [i_6] = ((min((arr_33 [i_7 - 1] [i_6] [i_6 + 2] [i_6 + 4] [i_5] [i_5]), (arr_32 [i_6 + 2] [1] [i_6] [i_6]))));
                    }
                }
            }
        }

        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            arr_41 [12] [i_4] = 14356;
            arr_42 [i_8 + 2] = (((arr_28 [i_8 + 1] [i_8 + 1]) ? (min(10, -486022993)) : ((((1948042096 > (arr_28 [i_8 - 2] [i_8])))))));
        }
    }
    var_12 = (((((((1 ? var_6 : var_10)) == var_7))) / var_2));
    #pragma endscop
}
