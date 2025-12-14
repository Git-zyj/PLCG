/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = (((arr_4 [i_0] [i_0] [i_2] [i_0]) << (((max(0, (arr_4 [i_0] [i_0] [i_2] [i_2]))) ? (((arr_5 [i_0] [i_1] [i_1]) ? (arr_4 [8] [i_0] [i_2] [i_2]) : 9)) : 1))));
                    var_18 = (((2130303778816 ? (((1 ? 1 : 1))) : ((1 ? var_7 : -3648504919965525588)))));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_19 = (max(var_19, (((920629325 ? ((max((arr_0 [i_3 - 1]), (arr_0 [i_3 - 1])))) : ((var_2 ? (arr_3 [i_3 - 1] [0]) : (arr_3 [i_3 - 1] [i_1]))))))));
                        var_20 = var_11;
                    }
                }
            }
        }
        var_21 = arr_2 [i_0] [i_0];
        var_22 = (max(var_22, (((~((((arr_5 [i_0] [i_0] [i_0]) == (arr_0 [i_0])))))))));
        var_23 = (((((-(arr_4 [i_0] [i_0] [i_0] [i_0])))) ? (((arr_4 [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : (arr_4 [1] [i_0] [i_0] [i_0]))) : ((var_14 ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0] [i_0])))));
        var_24 = 0;
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_25 = (min(var_25, (arr_0 [i_4])));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    {
                        arr_21 [i_5] [i_5] [i_5] [12] [i_7 + 1] = (max((max(1, 1)), 0));
                        var_26 = (arr_11 [i_7 - 1]);
                        arr_22 [2] &= (arr_16 [i_7 + 1] [i_6] [i_4] [i_4]);
                    }
                }
            }
        }
        var_27 = ((((((arr_18 [1] [11]) ? 0 : (-9223372036854775807 - 1)))) ? (!0) : (max(1, -2130303778800))));
    }
    var_28 = 1;
    #pragma endscop
}
