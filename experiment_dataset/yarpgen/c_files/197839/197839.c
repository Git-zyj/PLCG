/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [0] [i_0] = (!((1 <= (arr_4 [7]))));
                arr_6 [3] [i_0] [i_1] = ((((arr_4 [i_0]) ? -4913284723970616841 : var_3)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_11 [i_2] = ((((((((arr_7 [i_2]) / var_3))) ? 1 : ((min((arr_8 [4] [i_2]), (arr_3 [i_2] [i_2] [20])))))) * 4913284723970616836));
        var_16 = var_13;
        arr_12 [i_2] [7] = ((((24660 | 20) ? var_4 : ((max((arr_3 [i_2] [i_2] [6]), var_14))))) == var_8);
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            {
                arr_19 [i_3] = -var_14;
                arr_20 [i_3] [i_3] = ((!(arr_1 [i_3 - 1] [i_3 - 1])));
                var_17 = 2113055820;
                var_18 = ((((min((arr_4 [i_3]), 134))) ? ((((max(var_14, -70))) ^ (225 >= -16))) : var_10));
                var_19 = ((((((var_8 == 12074786827156131797) ? ((var_3 ? var_10 : var_4)) : (arr_18 [i_4 - 2] [i_4 + 1])))) ? (((arr_10 [i_3 - 1] [i_3 - 2]) ? (arr_10 [i_3 - 1] [i_3 + 2]) : (arr_10 [i_3 - 1] [i_3]))) : (((!((!(arr_16 [i_3] [i_4]))))))));
            }
        }
    }
    #pragma endscop
}
