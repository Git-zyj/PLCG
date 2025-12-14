/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = (max((((!(((3584 ? (arr_5 [i_0] [i_0]) : -1824080694490328285)))))), (arr_5 [i_1] [i_2])));
                    arr_7 [i_0] [i_1] = (max(((((((-41 ? (arr_2 [i_2] [i_1] [i_0]) : (arr_5 [i_1] [i_2])))) ? ((((arr_0 [i_1] [i_1]) && (arr_3 [i_0])))) : (arr_4 [i_0])))), (((16382 ? var_9 : (arr_1 [4]))))));
                    arr_8 [13] [i_2] = (-723612466 - (arr_5 [i_0] [i_1]));
                    arr_9 [i_0] [i_1] = (((arr_3 [i_2]) % (((arr_3 [i_1]) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
                    arr_10 [i_0] [0] [i_2] [i_2] = 8720932900407840107;
                }
            }
        }
        arr_11 [i_0] = ((!(!-29)));
        arr_12 [i_0] [i_0] = 54963;
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] [i_3] |= (arr_14 [i_3]);
        var_19 *= var_13;
        arr_18 [i_3] = arr_5 [i_3] [i_3];
        var_20 = ((-(((!4815439771168654778) ? -723612478 : 31678))));
        arr_19 [i_3] = (((var_7 ? ((var_4 ? var_12 : -460241333)) : ((max((arr_14 [i_3]), (arr_13 [i_3])))))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_21 = (((((arr_24 [i_4] [i_6]) && (arr_22 [i_5]))) ? (((((((var_12 / (arr_6 [i_4] [i_5])))) || ((min((arr_3 [i_5]), (arr_21 [i_6] [i_4])))))))) : var_16));
                    arr_31 [i_5] [i_5] [1] [i_5] &= var_15;
                    var_22 = max((max(4932200794526832267, (arr_3 [i_4]))), (arr_26 [i_4] [i_5] [i_6]));
                }
            }
        }
        var_23 = ((((((arr_26 [i_4] [i_4] [i_4]) ? (arr_2 [i_4] [i_4] [i_4]) : var_15))) ? ((((arr_20 [i_4] [i_4]) - (arr_28 [i_4] [6] [0])))) : (max((((-(arr_15 [i_4] [i_4])))), var_6))));
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 16;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        arr_41 [i_7] [i_8] [i_9] [i_10 + 1] = (var_8 % (arr_5 [i_9 + 1] [i_8 - 1]));
                        var_24 = 3504884747;
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_44 [i_7] [i_8] [i_8] [i_11] = min(3504884747, 723612460);
                        var_25 = ((((min((((arr_37 [i_11] [i_8 + 1] [i_8 + 1] [i_7]) + (arr_40 [i_7] [i_7] [i_7] [6]))), -var_4))) && var_0));
                        var_26 = (i_8 % 2 == 0) ? (((1786783224424776615 << ((((9725811173301711508 + (((var_10 + (arr_39 [i_7] [i_8])))))) - 9725811173301711718))))) : (((1786783224424776615 << ((((((9725811173301711508 + (((var_10 + (arr_39 [i_7] [i_8])))))) - 9725811173301711718)) - 21)))));
                    }
                    arr_45 [i_8] [i_8] [i_8] = ((!(arr_1 [i_9])));
                }
            }
        }
    }
    #pragma endscop
}
