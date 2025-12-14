/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = (max(var_18, (((11569 ? var_0 : (max(177, (arr_1 [i_0] [i_0]))))))));
        arr_2 [i_0] = var_1;
        var_19 &= var_12;
        var_20 = ((var_13 * (((((var_13 ? var_2 : (arr_0 [i_0])))) ? var_6 : 6854894883565883493))));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_21 = (max(8520989721255212396, 34773));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 12;i_3 += 1)
            {
                {
                    var_22 = (max(var_22, var_7));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_23 = max(-1982871524, -73);

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_15 [i_1] [i_4] [i_1] [4] [i_1] [i_1] = 17146024112611423204;
                            arr_16 [i_1] [i_4] [i_4] [i_4] [i_1] [i_1] = var_6;
                            var_24 = (max(var_24, ((((!17761) ? (arr_14 [i_2 - 3] [i_2] [i_2 - 3] [i_1 - 3] [i_5]) : var_12)))));
                            arr_17 [i_1] [i_1] [i_3] [i_4] [i_5] [i_4] = (((arr_13 [i_3] [i_3] [i_1 + 3] [i_3] [i_3] [i_2 + 2] [i_4]) != (var_17 - var_10)));
                        }
                        var_25 = ((-(arr_6 [i_1] [i_3 - 3] [i_3 + 1])));
                    }
                }
            }
        }
        var_26 = -var_4;
    }
    for (int i_6 = 3; i_6 < 10;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        arr_27 [i_6] = ((((var_3 - 59170) + (max(var_6, -60)))));
                        var_27 = var_4;
                        arr_28 [i_6] [8] = ((((max((arr_21 [i_6] [i_6]), ((1990902934 ? var_15 : var_15))))) || (((((!(arr_22 [0] [i_6]))) ? (1540751512759942196 >= var_17) : var_6)))));
                        arr_29 [i_6] [0] [i_6 + 3] [i_6] = var_4;
                    }
                }
            }
        }
        var_28 = max(var_9, var_8);
        arr_30 [i_6] = ((((!(var_7 || var_1))) || var_1));
    }
    var_29 = (max(var_29, ((((max((2021992026298690178 >= -9141308618520508057), ((8062879217026949259 << (var_10 - 11385036507118630715))))) == (min(var_11, var_15)))))));
    var_30 = ((((-26 - ((1 ? 96 : 1))))) ? ((var_6 ? (!var_10) : 2875380866785358882)) : -var_8);
    var_31 = (max(var_31, ((max(var_13, (var_12 * var_8))))));
    #pragma endscop
}
