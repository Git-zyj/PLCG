/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 140737487831040;
        var_17 = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [8])))) ? (max(((66846720 ? var_11 : 0)), 140737487831040)) : ((max((arr_0 [i_0] [i_0]), -66846697))));
        arr_4 [i_0] [i_0] = (((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) % (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))));
        arr_5 [i_0] = ((((((max((arr_0 [0] [i_0]), -27))) ? (max(-140737487831041, -140737487831054)) : 193)) / ((max(((140737487831041 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))), var_15)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = 45145;
        var_18 = (arr_6 [i_1]);
        arr_10 [i_1] [i_1] = ((var_6 ? (arr_0 [i_1] [i_1]) : (((~(~-140737487831056))))));
        arr_11 [i_1] = (max((((1 ? 14279160685917985998 : var_1))), ((min(-336485240, (arr_8 [i_1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_15 [i_2] = (((((~(arr_0 [i_2] [i_2])))) ? ((((((8937446565956999870 ? -27 : (arr_7 [1])))) ? ((((arr_13 [i_2] [i_2]) < 1451960824))) : (arr_8 [i_2] [i_2])))) : (min(-140737487831026, 1086268222))));

        /* vectorizable */
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            var_19 = (max(var_19, (((((((arr_12 [i_2] [i_2]) / -66846748))) ? -1 : ((var_3 ? var_6 : (arr_6 [i_3]))))))));
            var_20 &= (((arr_12 [i_2] [i_3 + 2]) ? ((7849497583407272193 ? (arr_12 [i_2] [i_2]) : var_3)) : (arr_1 [i_3 + 1])));
        }
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            arr_20 [0] [i_4 + 2] = 174;
            var_21 = 36028797018963967;
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_22 += 1;

        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_23 -= ((var_13 ? (((((3968021763 ? (arr_21 [i_5]) : var_5))) ? (arr_22 [i_5] [i_5]) : -1)) : -8456));
                var_24 = (max((~9450), (arr_21 [i_5])));

                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    arr_32 [i_7] [i_5] [i_7] [i_5] [i_8] [i_5] = ((((((arr_22 [i_5] [i_5]) | (((max(43527, 26))))))) ? -140737487831041 : (arr_21 [i_5])));
                    arr_33 [i_7] [i_7] [i_8] [0] = (max(63, (arr_8 [i_6 + 1] [i_8])));
                    var_25 = ((-((-1 ? (arr_22 [i_6] [i_8]) : var_9))));
                }
            }
            var_26 -= (arr_8 [i_5] [16]);
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            var_27 = 3440060409;
            arr_38 [i_5] [i_9] [i_9] = ((((((arr_2 [i_5] [i_9]) ? var_0 : (-127 - 1)))) ? (((8128 || (arr_13 [i_5] [5])))) : ((max(1, 1)))));
            var_28 = (min(((((arr_30 [i_9]) ^ var_9))), (~1006632960)));
            arr_39 [i_5] [i_9] = (((((((max((arr_0 [i_5] [i_9]), -119))) ? 2374668214 : (((-453768800 ? -290786957 : (arr_30 [i_9]))))))) && ((((arr_25 [i_5] [i_5] [i_5]) ? (arr_28 [i_9] [i_9]) : (arr_28 [i_9] [i_9]))))));
        }
        arr_40 [i_5] &= (min(100, (max(((var_13 ? 134217727 : (arr_35 [i_5] [14]))), var_13))));
    }
    #pragma endscop
}
