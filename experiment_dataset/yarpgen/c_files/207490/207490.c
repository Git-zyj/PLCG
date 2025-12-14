/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_10 = ((((~var_1) > (arr_0 [i_0]))));
        arr_2 [i_0] = (((((~(arr_1 [i_0])))) ? 0 : (((arr_1 [i_0]) ^ (-2147483647 - 1)))));
        var_11 *= ((+((min((min((arr_0 [i_0]), 8)), (min(1, (arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_12 = 2147483647;
        arr_7 [i_1] = -var_7;
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_10 [i_2] = (((15922965175866050903 > 127) || (((+(min((arr_5 [i_2] [i_2]), var_7)))))));
        arr_11 [i_2] [i_2] = (((min((arr_4 [3] [i_2]), (arr_4 [i_2] [i_2]))) ^ (arr_9 [i_2])));
        arr_12 [i_2] [i_2] |= ((~0) | (((((arr_5 [i_2] [1]) ^ var_8)) & -15)));
        arr_13 [i_2] [i_2] = (((min(((var_5 ? var_2 : var_4)), (arr_5 [i_2] [i_2]))) * (((((8838752932550214796 != (arr_8 [1])))) % (arr_4 [i_2] [i_2])))));
    }

    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        arr_16 [i_3] [i_3 - 1] = arr_14 [4] [i_3 - 1];
        var_13 = ((var_5 ? var_6 : (((arr_15 [i_3]) ? (arr_15 [i_3 - 1]) : 2014038540))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_14 += ((-16384 ? (arr_18 [5]) : (((!(arr_18 [i_4]))))));
        arr_21 [i_4] = (min((((!((min(var_5, var_0)))))), ((-1 ? 1351686602 : 1215604799))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                {
                    var_15 = (min(((var_4 ? (21353 - 18446744073709551615) : (arr_27 [i_6 + 2] [i_6 + 1] [i_6 - 1]))), var_9));
                    var_16 = ((~(((arr_24 [i_6] [i_6] [i_6 - 2]) ? 8 : -9940))));
                }
            }
        }
        arr_28 [i_4] = ((-(((arr_17 [i_4]) ? ((var_3 ? var_9 : 57368)) : ((min((arr_20 [i_4]), -1351686603)))))));
    }
    #pragma endscop
}
