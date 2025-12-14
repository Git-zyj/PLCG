/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 += (((arr_0 [i_0]) ? (((!((((arr_1 [i_0]) ? var_15 : var_6)))))) : var_10));
        var_19 *= ((var_6 ? (arr_1 [i_0]) : (max(((((arr_1 [19]) ? var_6 : var_12))), (arr_1 [9])))));
    }
    var_20 = var_5;

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 = ((!(!var_9)));
        var_22 *= (max((((21811 ? (arr_3 [15] [i_1]) : (arr_2 [i_1])))), (arr_2 [i_1])));

        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_23 += ((~((-(arr_0 [i_2 + 1])))));
            var_24 ^= (min((((arr_3 [i_2] [11]) ? ((1 | (arr_1 [18]))) : (((42 ? var_4 : var_10))))), (((-21799 ? -21802 : 21792)))));
        }
    }

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_11 [i_3] = (-(!219));
        var_25 = (min(var_25, ((max((arr_2 [i_3]), (arr_5 [i_3] [i_3] [i_3]))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_26 += (arr_0 [i_4]);
        var_27 = arr_6 [i_4] [i_4];
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_28 += var_0;
        var_29 ^= 246;
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    var_30 = (max(var_30, ((min((((((3178016404 ? var_9 : (arr_0 [i_6])))) ? (arr_3 [i_7] [i_6]) : (arr_13 [15] [i_8]))), (arr_21 [i_6] [i_7 + 2]))))));
                    var_31 -= ((+((+((max((arr_14 [i_7 + 3] [2]), (arr_7 [i_7]))))))));

                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_32 ^= (~216);
                        arr_30 [i_7] = ((!((max(-34, (arr_13 [1] [i_6]))))));
                        var_33 = ((((((arr_7 [i_7]) ? ((min(179, 12885))) : (((!(arr_22 [i_6] [i_9]))))))) || (arr_27 [i_7 + 2] [i_7 + 3] [i_7 + 1] [i_7 + 1])));
                        var_34 = (max(var_34, -12606));
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        var_35 = var_10;
                        var_36 |= ((!(arr_23 [i_7 - 1])));
                        arr_33 [i_10] [i_8] = (arr_29 [i_6] [i_8] [i_6] [i_6]);
                        var_37 = (min(var_37, (((~(1569904454357225932 == 70))))));
                    }
                    var_38 = (min(var_38, ((min(((min((((var_8 ? var_14 : (arr_16 [i_8])))), ((3004157507 << (135 - 124)))))), ((var_9 ? (arr_5 [i_8] [i_6] [i_6]) : var_0)))))));
                }
            }
        }
    }
    #pragma endscop
}
