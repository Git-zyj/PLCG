/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = (var_12 / var_3);

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_15 = 985771950401752107;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_10 [i_3 + 1] [i_2] [i_2] [i_0] = ((((((arr_9 [i_3 + 1]) ? 2371108457678092209 : (((max(0, var_7))))))) == var_7));
                        var_16 = var_6;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    var_17 = ((1 == (min((arr_4 [i_4] [i_5]), (((var_11 ? (arr_1 [i_4]) : 176)))))));
                    var_18 = arr_8 [i_6] [i_5] [i_4];

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_19 = (!4294967294);
                        arr_20 [i_6] = (((((((455321913 ? -23140 : 2626597690))) ^ ((var_5 ? (arr_17 [i_4]) : var_7)))) | ((((min(var_10, 1645))) / 2371108457678092209))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_28 [i_9] [i_9] [i_8] [i_9] = ((((min(23139, (-127 - 1)))) ? (arr_19 [i_8 - 1]) : (~71281822)));
                    arr_29 [i_9] [i_8 - 1] [11] [i_4] = (arr_12 [i_4]);
                }
            }
        }
        var_20 ^= var_5;
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
    {
        arr_32 [i_10] = ((!(((arr_21 [i_10] [i_10]) && (arr_9 [i_10])))));
        var_21 = (max(var_21, (max((arr_14 [i_10] [7]), 1639))));
    }

    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
    {
        var_22 += (((min(var_10, (~var_4))) & (((arr_26 [i_11] [i_11]) ? var_4 : var_4))));
        arr_37 [i_11] [i_11] = (!63894);
        arr_38 [i_11] = var_3;
    }
    for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
    {
        var_23 = (max(var_23, ((((!1) != (((67 && ((max(173, -279648995611908402)))))))))));
        var_24 = (max(var_24, -1));
        var_25 = (max(((87 ? (arr_12 [i_12]) : (arr_12 [i_12]))), ((((arr_23 [1] [1] [i_12]) != ((var_10 ? 1743567648230931410 : var_5)))))));
        var_26 = 205;
    }
    #pragma endscop
}
