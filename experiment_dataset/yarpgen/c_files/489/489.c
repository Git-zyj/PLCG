/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = (((max(0, var_2)) >> ((((26 ? var_16 : 17722)) + 1928932025))));
    var_19 = (var_10 == var_4);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_20 *= (((arr_1 [i_0 - 2]) ? (arr_1 [i_0 + 2]) : var_3));
        arr_2 [i_0] [i_0] = ((~(arr_0 [i_0])));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_21 ^= ((!((((arr_3 [i_1 - 2]) ? 26 : (max(8388607, 44)))))));
        var_22 *= (~77);
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_23 = (27 >> 8);
        var_24 = (max(var_24, (((arr_5 [i_2] [i_2]) ? ((((max(-70, (arr_8 [i_2])))) >> (((min(var_10, var_6)) + 4001978020111482662)))) : ((((!var_5) < var_3)))))));
        arr_9 [i_2] = (((((arr_8 [i_2 + 2]) || (arr_8 [i_2 + 1]))) && (17713 && 51)));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3 - 1] [10] [i_3] = ((((((min((-32767 - 1), -37))) == 24449)) ? 1308261372 : ((9223372036854775807 ? (26 >= var_11) : var_15))));
                    var_25 = (max(((((41249 && var_0) > ((((arr_13 [2] [i_3] [2] [i_3]) >= (arr_12 [i_2] [i_2] [i_2]))))))), 65535));
                    arr_15 [20] [i_2] [9] = (max((~55659), (max(var_12, (arr_4 [i_3])))));
                }
            }
        }
    }
    #pragma endscop
}
