/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = ((var_0 - (arr_1 [9])));
        var_15 |= (((arr_1 [i_0]) << (((24055 & var_6) - 1039))));
        var_16 = (max(var_16, ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) + (arr_1 [i_0]))))));
    }
    for (int i_1 = 3; i_1 < 8;i_1 += 1)
    {
        var_17 = (max(((((((arr_0 [i_1 - 1]) | (arr_1 [i_1])))) ^ 7730310454646692788)), ((min((arr_2 [i_1] [i_1]), ((var_9 ? -1676777244 : 2)))))));
        var_18 = (min(var_18, 6266959986413531228));
        var_19 = (max(var_19, (((((((((arr_3 [i_1 - 3]) ? 7730310454646692788 : var_13)) | (~6613677451584207566)))) ? (((arr_0 [i_1 - 2]) ? (arr_1 [i_1 - 1]) : (((arr_1 [i_1]) ? (arr_1 [i_1]) : var_7)))) : 4096733345)))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_10 [i_4] = 6313;
                    var_20 = 2;
                }
            }
        }
        arr_11 [i_2] = (arr_0 [i_2]);
        var_21 = (max(var_21, (((~(max((((!(arr_7 [i_2] [i_2] [1])))), (((arr_7 [i_2] [i_2] [3]) ? (arr_9 [i_2] [i_2]) : 0)))))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {
            var_22 = (arr_9 [i_6 - 1] [i_5]);
            var_23 -= ((!(arr_13 [i_6 - 3] [i_6 + 1])));
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 7;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_24 += ((-(~var_8)));
                        var_25 = (max(var_25, ((((arr_9 [i_6 + 1] [i_5]) >> (((arr_13 [i_6 - 3] [i_7 + 4]) + 6140544371956987153)))))));
                        var_26 = 1;
                    }
                }
            }
        }
        var_27 -= (!-1660154042);
        var_28 = ((!(arr_12 [10])));
    }
    var_29 = ((var_8 ? (~var_8) : (max(var_3, (14 | 26860)))));
    var_30 = (!0);
    #pragma endscop
}
