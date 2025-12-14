/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_15 = ((((62105 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0 + 2]))) % ((var_8 ? var_5 : -8044))));

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0 - 1] [i_0 - 1] = ((!(-32767 - 1)));
            arr_6 [i_0] [i_0 - 1] [i_0 + 2] = (arr_3 [i_0 - 2] [5]);
        }
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_16 = (min(((var_1 ? 32756 : ((min(43682, (arr_0 [i_2] [6])))))), 21851));
        var_17 = ((((((((27098 ? var_12 : (arr_3 [i_2] [i_2])))) ? -65535 : (var_13 && 21838)))) ? ((((arr_3 [i_2] [i_2]) && (arr_3 [i_2] [i_2])))) : (((arr_3 [i_2] [i_2]) ? var_2 : ((var_0 ? (arr_2 [0]) : 43680))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {

                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        var_18 = (~var_13);
                        arr_19 [i_4 + 1] [i_3] = (((((-32767 - 1) ? -13616 : 1498)) / (((((arr_9 [i_3]) * var_10)) / (((arr_4 [i_2] [i_3] [i_4 - 1]) ? (arr_11 [i_3] [i_3] [i_5]) : 59134))))));
                    }
                    arr_20 [i_2] [i_3] [i_3] = ((((min((min(var_7, var_1)), 29721))) ^ (((var_0 && ((min(32763, var_6))))))));
                }
            }
        }
        var_19 = arr_8 [10];
    }
    var_20 = (max(((((max(48010, 43698))) / var_12)), ((((!var_12) && (!6242))))));
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            {
                arr_27 [i_6] [i_6] [i_7] = ((-3566 <= (~-32755)));
                var_21 = ((0 ? 21854 : (-32767 - 1)));
                arr_28 [i_6] = (max((((((arr_24 [i_6]) ? var_5 : 32740)))), ((((min((arr_21 [i_6]), -1165))) | 43682))));
            }
        }
    }
    var_22 = (!var_0);
    #pragma endscop
}
