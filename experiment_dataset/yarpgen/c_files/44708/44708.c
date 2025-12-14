/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_2] [11] [5] = arr_2 [0];
                    arr_8 [i_0] [i_1] [i_1] [i_2] = (min((~-64), (min((min(7211137670038275002, 38129)), (max(38145, -1))))));
                    var_11 ^= ((-(min((min(38, var_0)), (((1 ? 27406 : 15468)))))));
                    var_12 = (min(var_12, (arr_2 [1])));
                }
            }
        }
    }
    var_13 = var_3;

    for (int i_3 = 4; i_3 < 19;i_3 += 1)
    {
        arr_11 [8] = 12755669402209002019;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_3] = 7564242279592526665;
                    arr_19 [i_3] [12] [7] [i_4] = ((-60 ? (arr_12 [i_4] [i_4]) : (((var_7 ? -9223372036854775797 : var_3)))));
                    var_14 += var_5;
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 16;i_6 += 1) /* same iter space */
    {
        arr_22 [12] = (min(9054698376471071975, (((75 > ((2 ? 9759701821856663820 : 18446744073709551615)))))));
        arr_23 [i_6] [15] = 1;
        var_15 ^= var_7;
    }
    for (int i_7 = 2; i_7 < 16;i_7 += 1) /* same iter space */
    {
        arr_27 [4] = ((((min((max((arr_15 [19] [i_7]), (arr_21 [8] [i_7]))), (((!(arr_5 [4] [4] [i_7]))))))) ? ((-9223372036854775797 ? ((203 ? (arr_20 [i_7]) : 2875170604097953958)) : 38123)) : (~var_5)));
        var_16 = (((arr_14 [i_7] [i_7] [14]) << (((max((!var_1), (min(12755669402209002019, -4321090995107252113)))) - 12755669402209002009))));
        arr_28 [4] = (min(7502136621331096795, 880753381878495358));
        var_17 = ((-(arr_9 [i_7 - 2] [i_7 - 2])));
    }
    #pragma endscop
}
