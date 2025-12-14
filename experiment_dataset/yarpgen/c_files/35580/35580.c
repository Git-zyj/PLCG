/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((arr_1 [i_0]) >= (arr_1 [i_0]))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) | (arr_1 [i_0])))));
        arr_3 [10] = (~-8892);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_7 [11] = min((((arr_4 [i_1]) & (((((arr_4 [i_1]) || (arr_5 [i_1]))))))), (arr_4 [i_1]));
        arr_8 [1] [1] = ((!((((arr_6 [i_1]) & (arr_6 [i_1]))))));
        arr_9 [i_1] = -4734566544799630445;
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_13 [i_2] = (arr_11 [i_2]);
        arr_14 [i_2] [i_2] = ((((((arr_11 [5]) ? (arr_11 [i_2]) : (arr_11 [i_2])))) || ((((arr_11 [i_2]) ? (arr_11 [i_2]) : (arr_11 [i_2]))))));
        arr_15 [i_2] = (((((min(8388607, 8388593)))) | (arr_12 [i_2])));
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_19 [i_3] [i_3] = ((((((2816488788 ? (arr_18 [i_3] [i_3]) : 1)))) ? ((((arr_16 [i_3]) || (arr_17 [i_3])))) : (((!((min((arr_16 [i_3]), 30))))))));
        arr_20 [i_3] [i_3] = ((((+((12747 << (((arr_17 [i_3]) - 259)))))) % ((min(-22135, 63)))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_25 [i_4] = 8388601;
        arr_26 [i_4] [i_4] = ((!((((arr_23 [i_4] [i_4]) * (arr_23 [i_4] [i_4]))))));
        arr_27 [i_4] [i_4] = (arr_23 [i_4] [i_4]);
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    arr_39 [i_7] [i_7] [i_7] = (arr_17 [6]);
                    arr_40 [i_5] [i_7] = 624902646733739875;
                    arr_41 [i_7] [i_7] = (20 * 10253571457275706574);
                }
            }
        }
        arr_42 [i_5] = ((!(((((~(arr_24 [1])))) || ((((arr_6 [i_5]) ? (arr_28 [i_5] [i_5]) : 59654)))))));
        arr_43 [i_5] [i_5] = (16888343324747952967 % -1);
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    arr_52 [i_10] [i_9] [i_9] [i_8] = (((-(((arr_45 [i_8] [i_9]) + 4286578711)))));
                    arr_53 [i_9] [i_9] = (arr_50 [i_10] [i_8] [i_8]);
                }
            }
        }
    }
    var_20 = ((min((((var_18 ? 31 : 243))), (13 % 12028135286366025354))));
    #pragma endscop
}
