/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_8 [i_1] [i_0] = (arr_4 [i_0] [i_1]);
            arr_9 [i_0] = (((((1 ? (arr_7 [i_0] [7]) : var_13))) ? (1 < 32741) : (arr_2 [i_0] [i_1])));

            /* vectorizable */
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                var_16 &= (92 <= 1043032181);
                arr_12 [i_0] [i_2] = (27 ? (arr_10 [i_2 + 1] [i_2] [i_2]) : 9641986923442519758);
                arr_13 [i_0] [i_1] [i_2] = ((var_8 ? var_0 : var_12));
                var_17 = -7655992503088802117;
                arr_14 [i_0] [i_2] [i_0] = (((((1 ? (arr_11 [i_0] [i_1]) : var_9))) ? (arr_7 [i_0] [i_1]) : -var_7));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_18 [i_0] [i_0] [i_3] [i_0] = var_4;
                arr_19 [4] [i_3] [4] = ((var_3 * (((arr_10 [5] [i_1] [i_0]) ? ((((arr_10 [i_0] [i_1] [i_3]) * (arr_16 [i_0] [i_1] [i_1] [i_3])))) : ((var_7 ? 1877514104 : var_1))))));
            }
        }
    }
    for (int i_4 = 4; i_4 < 9;i_4 += 1)
    {
        var_18 = (-1120950252238579826 <= -7655992503088802113);
        arr_22 [i_4] = ((var_3 * var_13) / ((-var_4 ? ((-7655992503088802117 ? 1 : 4294967295)) : var_4)));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_19 = (arr_23 [i_5]);
        arr_25 [i_5] [i_5] = 1070294421;
        var_20 = (((((((((arr_23 [i_5]) ? (arr_23 [4]) : var_10))) ? (var_1 | var_4) : (max(var_7, var_1))))) ? (arr_23 [i_5]) : (((((arr_23 [i_5]) ? var_2 : var_13)) - (((~(arr_24 [i_5]))))))));
        var_21 = var_11;

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            arr_28 [i_5] [i_5] [i_5] = ((-(!var_2)));
            var_22 = 2140549022;
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_23 = ((~(max(var_6, (arr_20 [i_7])))));
                var_24 = (((!2667035000366719836) ? (((var_0 ? 940376466652978459 : (arr_1 [i_7])))) : (((var_10 ? var_9 : (arr_5 [i_7] [9] [i_7]))))));
            }
        }
    }
    var_25 = var_9;
    var_26 = var_9;
    var_27 = var_2;
    #pragma endscop
}
