/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = ((~(((arr_6 [i_1 + 1] [i_0 + 1]) ? (arr_4 [i_0 - 1]) : (arr_4 [i_0 + 1])))));
                    var_12 = (min(var_12, ((((~(~var_7)))))));
                    var_13 = ((-((var_9 ? ((var_2 ? (arr_7 [i_1 - 2] [i_0 + 1] [i_1 - 2]) : var_8)) : (var_5 == 10520)))));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        var_14 = var_8;
        arr_11 [i_3] = (10498 ? -2863921343922798689 : 950720231);
    }
    for (int i_4 = 4; i_4 < 11;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_15 = 2863921343922798689;
            arr_18 [1] [i_5] [i_5] = (((var_5 / var_9) ? (max(4069355869, 414)) : (arr_12 [i_4 - 4] [i_5])));
            arr_19 [i_4 - 1] [i_5] &= ((~(arr_2 [i_4 - 1] [i_4 + 1])));
        }
        for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_16 = (min(var_16, (arr_8 [i_4])));
            arr_23 [i_4] = ((((max(28362, (max(-69, 64920))))) ? 2863921343922798692 : (((((((arr_9 [5]) ? var_6 : var_1))) ? (arr_12 [i_6 - 1] [i_4 - 4]) : var_6)))));
            var_17 = ((((((var_8 != (0 != var_6))))) != ((~(max(2863921343922798689, var_5))))));
            var_18 = ((min(var_0, var_7)));
        }
        for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_19 = (((((arr_5 [i_7 + 1] [7]) >= 3762624980299607598)) ? (((arr_15 [i_4] [i_4]) ? (arr_7 [i_4 - 1] [i_7] [i_7 - 2]) : var_8)) : ((min(var_4, (arr_20 [i_4] [i_7]))))));
            var_20 ^= (min((!14061148499235900402), (max(var_1, (arr_13 [i_7 + 2])))));
        }
        arr_28 [i_4] &= var_2;
        var_21 = (-((((arr_3 [i_4 - 2]) <= (~6937)))));
        var_22 = (((((var_6 ? (var_1 % var_9) : (arr_7 [i_4 - 4] [i_4] [i_4])))) ? (max((arr_13 [i_4 - 1]), var_10)) : (~var_4)));
    }
    for (int i_8 = 4; i_8 < 11;i_8 += 1) /* same iter space */
    {
        var_23 = 1;
        var_24 = 3167827953;
        var_25 |= (((-(arr_7 [i_8 - 3] [i_8 - 2] [i_8 + 2]))));
    }
    var_26 = (max(((var_8 ? (28376 == var_3) : var_9)), (~4385595574473651214)));

    for (int i_9 = 2; i_9 < 12;i_9 += 1)
    {
        var_27 = -var_0;
        var_28 &= ((var_0 + (arr_32 [i_9 + 2])));
    }
    #pragma endscop
}
