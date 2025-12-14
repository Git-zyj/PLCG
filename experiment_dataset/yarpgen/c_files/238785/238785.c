/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_17 = (min(-var_6, (max(var_3, ((min(49, (arr_0 [1] [i_0]))))))));
        var_18 = var_3;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_19 = (arr_2 [17]);
        arr_4 [i_1] = (arr_3 [i_1]);
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = (((max(var_12, var_8)) | (((-127 - 1) ? 26 : (~var_11)))));
        arr_9 [i_2] = ((((max(236, (max(-59, (arr_2 [i_2])))))) ? (((((var_3 << (((arr_6 [i_2]) - 2643796946))))) ? (min(204, var_3)) : var_0)) : 1220549411));
    }
    var_20 = var_0;

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_21 = 0;
        arr_12 [i_3] [15] = var_16;
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_22 = (((max(var_16, var_6)) & (((~(arr_7 [i_4 + 2]))))));
        arr_16 [i_4] [i_4 - 1] = (((var_5 + (arr_5 [i_4 + 2]))));
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_23 = (min(var_23, (((-42 > ((var_1 ? ((255 ? -59 : var_12)) : ((0 ? -50 : var_1)))))))));
        var_24 |= (max((arr_13 [i_5 + 2] [i_5 + 2]), ((var_8 ? var_0 : (arr_13 [i_5 + 2] [i_5 + 2])))));
        arr_19 [i_5] [i_5] = var_3;
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                {
                    var_25 = (min(var_25, (((var_14 ? (min(((var_15 ? var_14 : var_8)), (arr_20 [i_7 + 1] [i_7 - 2]))) : (var_8 && 855927937774962047))))));

                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        var_26 *= -108;
                        var_27 += ((((min((arr_14 [i_5 + 1]), var_16))) ? ((min(var_13, var_1))) : ((max(var_2, var_1)))));
                        arr_27 [i_8 + 1] [i_7] [i_5] [i_6] [i_5] = ((!((max(var_7, var_4)))));
                    }
                    arr_28 [i_5] = max(66, var_11);
                    var_28 = ((((max(var_8, var_10))) ? ((((arr_22 [i_5 + 1] [i_6 + 2]) > var_6))) : ((min(var_13, var_0)))));
                }
            }
        }
    }
    var_29 = (max(var_1, var_13));
    #pragma endscop
}
