/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] [i_0] = ((max((arr_4 [i_0] [i_1] [i_1] [i_2]), (arr_4 [i_0] [i_0] [i_2] [i_2]))));
                    arr_7 [i_2] [i_1] [i_0] = (((-22230 - (max(8, (arr_1 [i_2] [i_1]))))));
                }
                arr_8 [i_0] [1] = ((~(min((18446744073709551610 % var_2), (arr_0 [i_0])))));
                arr_9 [i_0] [i_1] = (((max(14055423476173083741, 4294967279)) < var_15));
            }
        }
    }
    var_16 = ((((max((3 * 3), var_11))) >= 7076512938509921153));

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = (i_3 % 2 == 0) ? ((((arr_11 [i_3]) >> ((((16801146430865909220 && (arr_10 [i_3]))) ? (arr_10 [i_3]) : (var_3 / -14689)))))) : ((((arr_11 [i_3]) >> ((((((16801146430865909220 && (arr_10 [i_3]))) ? (arr_10 [i_3]) : (var_3 / -14689))) - 20)))));
        arr_13 [i_3] = ((!(arr_11 [i_3])));
    }
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        var_17 = (max(var_17, (max((arr_14 [i_4]), (31744 * var_10)))));
        arr_16 [i_4] = ((14784256021681643715 ? (max((arr_15 [i_4]), 8616966472559663920)) : ((max((var_11 % 17), 4)))));
        var_18 *= (max(-2, 122));
    }
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        arr_20 [i_5] = (arr_17 [i_5] [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    {
                        arr_29 [i_5 - 2] [i_5] [19] [i_8] [i_5 - 1] = (((((var_1 / (arr_28 [i_8] [14] [i_8 + 1] [i_5] [i_8 + 1] [i_8 + 1])))) % (7796315215965601824 * 89)));
                        arr_30 [i_5] = (~12);
                        arr_31 [i_5] [14] [15] = 32767;
                    }
                }
            }
        }
    }
    var_19 = var_5;
    var_20 = ((!((((~var_15) | -1)))));
    #pragma endscop
}
