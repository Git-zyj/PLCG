/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = var_7;
                    var_12 ^= (((1812888898721627003 / 13867883104714409597) ? ((var_1 ? (((arr_8 [i_2]) ? 0 : 1)) : (arr_0 [i_0] [i_1]))) : (~-5347813160411783089)));
                    var_13 |= (arr_6 [i_0] [i_0]);
                }
            }
        }
        arr_10 [i_0] = (max(var_7, (((arr_1 [i_0 - 2]) + 411701121))));
        var_14 = ((((411701121 ? 0 : 1238051582)) == (((-(arr_8 [i_0 - 2]))))));
        var_15 = (max(var_15, (((-(arr_0 [i_0 - 1] [i_0 + 1]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                {
                    var_16 ^= ((((min((arr_11 [i_0 + 1]), (arr_12 [i_0 + 2])))) ? (min((min(0, 915423010)), (25 + -32))) : ((((!(arr_13 [i_4 - 1] [i_0 + 1] [i_0 + 1])))))));
                    arr_16 [i_3] [i_3] [i_0] [i_0] = (~231);
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_17 = ((arr_18 [i_5]) ? ((1 ? (min(16274, (arr_18 [i_5]))) : ((3056915714 ? var_3 : (arr_18 [i_5]))))) : (arr_18 [i_5]));
        arr_19 [i_5] &= ((~((-411701121 ? (arr_17 [i_5]) : (((arr_18 [i_5]) ? -1 : -1152630791))))));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_18 -= var_7;
        arr_22 [i_6] |= (((arr_20 [i_6]) ? (((-(arr_17 [i_6])))) : (max((arr_17 [i_6]), -1))));

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            arr_25 [i_7] [i_6] [i_7] = ((1 ? -32752 : -1999938684614182951));
            arr_26 [i_6] [i_7] = 1238051560;
            arr_27 [i_7] = ((!(-1983868186 & var_6)));
            arr_28 [i_7] [i_6] [i_7] = (((min((9 > 162), var_4)) >> (-10 + 15)));
        }
        var_19 = ((+(max(((max((arr_20 [i_6]), var_1))), (min(411701107, (arr_24 [i_6] [i_6] [i_6])))))));
    }
    var_20 = var_3;
    var_21 = var_9;
    var_22 = max(var_10, 3056915708);
    var_23 = var_8;
    #pragma endscop
}
