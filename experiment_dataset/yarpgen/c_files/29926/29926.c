/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = (arr_4 [i_1] [i_2]);

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        arr_11 [i_3 - 1] [i_0] [i_2] [i_3] = (((((((arr_7 [i_2] [i_2] [i_2 + 2]) ? 4024032112 : 241)))) ? ((((arr_8 [i_3 + 1] [i_2] [i_1 - 1] [7]) ? 1 : 270935185))) : 14));
                        var_15 = 216;
                        arr_12 [i_3] [i_2] [i_1] [11] = ((-((((min(32767, 1))) ? (arr_1 [i_0]) : 241))));
                        arr_13 [i_0] [i_1] [i_2 + 2] [i_2 - 3] [9] &= 4294967295;
                        arr_14 [i_0] [i_1] [i_2 + 2] [i_3] = 270935159;
                    }
                    arr_15 [2] [i_1] [i_1] [i_1] = (min((((!(((var_13 ? var_4 : var_12)))))), var_8));

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_16 = (arr_5 [i_0] [4] [i_0]);
                        arr_18 [i_0] [i_4] [i_2] [i_4] [i_0] [i_1] = ((((-var_7 ? ((-4133875749291243513 ? 4024032110 : 1)) : (~270935185))) / var_11));
                        var_17 = 0;
                    }
                    arr_19 [6] [0] [i_1] [2] = ((1075 == ((-1954191732045046225 ? var_5 : (~17582435967030097519)))));
                }
            }
        }
        var_18 = (((((var_12 ? 4133875749291243494 : 10380))) / 4294967280));
        var_19 = -2103014544070674806;
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        var_20 = 37714;
        arr_22 [i_5] [i_5] = ((((max(-1448332082, var_0))) ? ((270935183 & ((-7204226072406902548 ? 8915 : 8984318874665207533)))) : (!var_0)));
    }
    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        arr_25 [i_6] = (min((!32768), 270935174));
        arr_26 [i_6] = ((-(((arr_20 [i_6]) & 6575079094507110024))));
        var_21 = (max(var_21, 0));
    }
    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {
        arr_30 [1] = ((var_7 ? 120 : ((var_3 ? (((48 >= (arr_23 [i_7])))) : (arr_5 [i_7] [i_7] [0])))));
        arr_31 [i_7 + 1] [4] = (!27);
    }
    var_22 |= (+-679896930979152753);
    var_23 = ((((-955833373002870094 ? 237 : 3585267247))));
    #pragma endscop
}
