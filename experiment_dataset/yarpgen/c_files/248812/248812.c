/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 = (max(var_16, ((((!var_13) ? var_0 : (!var_11))))));
    var_17 |= ((-(((((var_9 ? var_10 : var_2))) ? var_4 : var_11))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~(!1));
        arr_3 [i_0] |= -204502311777327537;
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        arr_6 [7] |= ((204502311777327533 ? 18446744073709551610 : 26218));
        var_18 = (min(var_18, ((((((-(arr_4 [i_1 + 1])))) ? (~1048575) : ((var_8 ? (arr_4 [i_1 - 2]) : var_7)))))));
        var_19 = (((((((!(arr_5 [i_1] [i_1 + 2]))) ? (((-(arr_4 [5])))) : ((var_14 ? var_7 : var_6))))) ? (!39319) : ((18446744073709551589 ? 26240 : -31191))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [1] = ((39328 ? -26396 : -25));
        var_20 = (((((-((var_12 ? var_1 : (arr_9 [i_2])))))) ? (((204502311777327537 ? 39339 : 44976))) : ((var_5 ? (arr_1 [13]) : var_4))));
        var_21 = (((-26214 ? ((243 ? 241 : 43459) : ((-(arr_7 [i_2])))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_20 [i_2] [i_2] [i_3] [i_2] |= ((!(((-((52018 ? (arr_12 [i_2]) : var_2)))))));
                        var_22 &= ((~(~var_9)));
                        var_23 = var_3;
                        var_24 = (min(var_24, (((var_14 ? ((~(arr_19 [i_5] [i_4 - 2] [i_4 + 2] [2]))) : (((!(arr_13 [i_4 - 2] [i_4 + 2] [12])))))))));
                        var_25 = (((var_7 ? var_0 : 163)));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    arr_28 [i_6] [i_8] [i_6] &= ((((((arr_21 [i_6]) ? 137438953471 : var_6))) ? ((57 ? (arr_27 [i_6] [16] [i_8] [i_8]) : var_10)) : (!26269)));
                    var_26 = ((((((arr_27 [i_6] [i_6] [i_7] [i_8]) ? -8130 : (arr_23 [2])))) ? (!-15655) : (arr_26 [i_6] [i_8])));
                }
            }
        }
        arr_29 [i_6] [i_6] = (((((200 ? 13501 : 8128))) ? (((1 ? 53 : 39302))) : ((13028121302261557081 ? 39329 : ((1 ? 14774 : 3478505920843892313))))));
        var_27 = ((979368364196855425 ? 127 : 52016));
        arr_30 [i_6] [18] = (!(((504815118 ? (~1) : ((var_9 ? var_7 : 39334))))));
    }
    #pragma endscop
}
