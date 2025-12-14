/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_13 = (((((arr_2 [i_0]) || var_8)) ? var_7 : (max(var_12, var_2))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_0] [15] [i_0] = (max(((var_6 ? var_12 : var_9)), ((min(var_5, (arr_4 [i_0] [i_1 + 1]))))));
                    var_14 = ((-(~var_12)));
                }
            }
        }
        var_15 = ((((var_4 ? 10014709187189833686 : 8432034886519717929)) - ((((min(var_4, 760578882)) & (arr_0 [i_0]))))));
        var_16 = (max(((-7045503204236197104 ? (arr_8 [i_0 + 2] [i_0 + 2] [i_0] [i_0]) : 2147483647)), ((((min(15, 0))) ? (((arr_7 [i_0 + 3] [14] [10]) ? 0 : 370271430)) : (arr_9 [i_0] [i_0] [i_0] [i_0])))));
    }
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_17 = min(8432034886519717929, var_3);
                    arr_18 [i_5] [i_4] [i_4] [i_4] = ((~(((-1 & var_3) | ((min((arr_6 [i_3 + 1] [i_4] [i_3 + 1]), 0)))))));
                    var_18 = ((61401 ? ((min((!2866590389038476677), ((var_4 ? -1 : (arr_2 [i_3])))))) : (min(0, var_6))));
                }
            }
        }
        arr_19 [i_3] [i_3 - 2] = (min((max(((0 ? 0 : 8432034886519717930)), ((max(var_8, -13))))), (((var_5 ? var_6 : 30)))));
        arr_20 [i_3] [i_3] = ((((min((arr_1 [i_3 + 1]), var_4))) ? (max((((arr_17 [i_3] [0] [i_3 - 2]) ? 18446744073709551615 : 171)), ((max(-1608455126, 126))))) : var_1));
        var_19 = (((((var_6 ? (375177590052291165 * var_8) : -760578882))) ? (((max(var_12, var_3)) % (15 <= 2441800056))) : var_10));
    }
    for (int i_6 = 4; i_6 < 19;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = ((~(((((2075720296 ? var_7 : var_9))) ? ((var_12 ? 15955967083153053838 : 0)) : (arr_8 [i_6] [i_6 - 2] [i_6 - 4] [12])))));
        var_20 = ((((min(var_1, 760578904))) ? var_7 : (((-((5224508267498892404 ? -130309324 : 0)))))));
        arr_24 [i_6] = (var_0 >= var_12);
    }
    var_21 = (min(5626732366927133021, var_1));
    var_22 = (max(var_10, (536870896 || var_1)));
    #pragma endscop
}
