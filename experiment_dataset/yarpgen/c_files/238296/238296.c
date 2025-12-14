/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((var_5 ? ((15867178597849157543 ? 6 : var_3)) : var_0)), var_8));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_1] = arr_1 [i_1 - 3];
            var_21 = -1;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 = (min((19 >> 2), 38));
            arr_9 [i_0] [i_2] [i_2] = 86;
            var_23 = (((((min(26655, -28458)))) * 6));
        }
        arr_10 [i_0] [i_0] &= (!(((2465328160 - (arr_7 [i_0] [i_0] [i_0])))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = (((140737484161024 >= 654471046) % ((max((arr_13 [i_3]), (arr_13 [i_3]))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_24 = (max(var_24, ((((((-(11767200521569733809 == 18)))) ? 2868931860336526189 : (((max((arr_13 [i_4 + 1]), 1)))))))));
                    arr_21 [i_4] [i_4] [i_4] [i_3] = (max(17347127238102895728, 8984));
                }
            }
        }
        arr_22 [i_3] = 4192793115450900921;
        var_25 &= -1589672353;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_26 = (((arr_18 [i_6] [i_6] [6] [i_6]) ? (arr_12 [i_6] [16]) : (arr_12 [i_6] [10])));

        for (int i_7 = 2; i_7 < 23;i_7 += 1)
        {
            var_27 -= (((arr_18 [i_6] [i_7] [i_7 - 1] [i_6]) == 33));
            var_28 = ((arr_20 [19] [i_7 - 1] [i_7] [i_7]) ? (arr_20 [i_7] [i_7 - 1] [i_7 - 1] [i_7]) : (arr_16 [i_7] [i_7 + 1] [18]));
            var_29 = (~73);
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            var_30 = (((arr_28 [i_6] [i_6]) ? (!118) : ((-212781225 ? (arr_27 [i_6] [i_6]) : 31856))));
            arr_34 [i_6] = 22;
            var_31 = (((arr_2 [i_8 - 1] [i_8 - 1]) / (arr_2 [i_8 - 1] [i_8 - 1])));
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            arr_38 [i_6] [i_9] = 9;
            var_32 = var_16;
            var_33 -= (((arr_23 [i_9]) ? (arr_13 [i_9]) : -78));
            arr_39 [i_9] = (((((43029 ? var_4 : var_7))) ? (((var_16 >> (31096 - 31072)))) : ((1031503695916819697 ? 11371200688555130707 : -601123206182022484))));
        }
        arr_40 [1] [i_6] = arr_27 [18] [18];
        var_34 = (~1031503695916819717);
        var_35 = (((arr_4 [i_6] [i_6]) ? (arr_4 [i_6] [i_6]) : (arr_4 [i_6] [i_6])));
    }
    var_36 &= (min(17415240377792731899, var_10));
    var_37 = (max(((var_16 << (65526 >= 1))), var_10));
    #pragma endscop
}
