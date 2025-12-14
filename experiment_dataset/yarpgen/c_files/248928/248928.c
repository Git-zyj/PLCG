/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 -= var_4;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (max((arr_0 [11]), (arr_1 [i_0])));
        var_19 = ((2147483647 || (arr_1 [i_0])));
        arr_2 [6] &= ((+((max((arr_0 [i_0]), (arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] = (((arr_4 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_1])));
            var_20 = (min((min((~var_3), (min(5012, 2147483647)))), (arr_1 [i_0])));
            var_21 = (((((+(((arr_4 [i_0]) ? (arr_0 [0]) : (arr_0 [i_0])))))) > ((((min((arr_0 [i_1]), (arr_4 [i_1])))) ? ((((var_13 < (arr_3 [i_0] [i_0] [i_0]))))) : 2147483621))));
        }
    }

    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        var_22 -= ((!(-2147483647 - 1)));
        var_23 = ((((((!-7127406372022968449) ? var_14 : (arr_7 [17] [i_2])))) ? 1 : ((min((arr_7 [i_2] [i_2 - 2]), (arr_6 [i_2 + 1]))))));
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        var_24 -= (max(((((((-(arr_7 [i_3 + 1] [i_3])))) ? (arr_7 [i_3 + 1] [i_3 - 1]) : (arr_8 [i_3 + 1])))), (min((((var_14 ? var_3 : (arr_7 [i_3 - 1] [1])))), 17227535291384549969))));
        var_25 ^= ((!(arr_6 [i_3 + 1])));
        var_26 += (arr_9 [i_3]);
        var_27 -= ((+((((arr_8 [i_3 - 1]) == var_10)))));
        var_28 = (arr_6 [i_3 - 1]);
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_29 = ((var_11 <= (arr_7 [i_4] [i_4])));
        var_30 -= (min(((max((min(var_4, (arr_7 [i_4] [i_4]))), (arr_10 [0] [6])))), (-8 % var_6)));
    }
    #pragma endscop
}
