/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = (min(var_18, ((max(var_15, (min((max(18446744073709551615, -1)), 4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((~(((!(arr_3 [i_0] [i_1]))))));
                arr_5 [i_0] = min(1870560132, (arr_1 [i_1] [i_1 + 1]));
                var_19 = (~(!60660));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_20 = (min(var_20, (arr_6 [i_2])));
        var_21 = (min(var_21, (arr_7 [i_2] [i_2])));
        var_22 = (min((arr_7 [i_2] [i_2]), (((!(arr_7 [i_2] [i_2]))))));
        var_23 *= 0;
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_24 = (arr_3 [i_3] [0]);
        var_25 = (arr_6 [i_3]);
        var_26 = arr_8 [i_3];
    }
    for (int i_4 = 3; i_4 < 21;i_4 += 1)
    {
        var_27 = (max((arr_12 [i_4]), ((~(arr_12 [i_4])))));
        var_28 = ((!((max((arr_11 [i_4] [i_4]), (arr_11 [i_4] [i_4]))))));
        var_29 = ((!((!(arr_12 [i_4])))));
    }
    #pragma endscop
}
