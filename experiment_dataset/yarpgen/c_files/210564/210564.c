/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (((((((min((arr_1 [i_0] [9]), (arr_0 [6]))))) ^ (min(var_1, -23932)))) - (arr_1 [i_0] [i_0])));
        var_15 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 4; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_16 = -89;
        var_17 = var_4;
        arr_5 [i_1] [i_1] &= min(((((min(23931, (arr_2 [7] [14]))) | -89))), (((arr_3 [i_1]) ? 255 : var_4)));
    }
    for (int i_2 = 4; i_2 < 14;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_18 = ((-77 ? 2322889072 : 4264536618));
                    var_19 &= (!10);
                    var_20 = (((arr_10 [i_3]) != (!23932)));

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] = (((((7 ^ ((((arr_10 [i_3]) > var_7)))))) ? (11092395290577602377 < 1972078223) : (min((~254), (!0)))));
                        arr_19 [i_3] [i_3] [i_4] [i_3] = ((~(~173)));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_2 - 1] [i_3] [i_4] [15] [15] [i_5] [i_3] = 1;
                            var_21 = (max(var_0, (((!var_3) % 923117695))));
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_22 = 2322889072;
                            var_23 = (max(var_23, var_8));
                        }
                    }
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        arr_30 [i_3] [i_3] [i_8] [i_8 + 1] = (!-103);
                        arr_31 [i_4] [i_4] [i_3] [9] = (max(2451319315, (max((arr_3 [i_2]), 5199287178930586489))));
                        var_24 = ((!((((((var_1 ? (arr_9 [i_2] [i_2]) : -89))) ^ ((3515759034 ? (arr_29 [i_3] [i_8] [i_2 + 2] [i_3] [i_2 + 2]) : var_10)))))));
                    }
                    for (int i_9 = 3; i_9 < 15;i_9 += 1)
                    {
                        var_25 = (((var_8 + 0) <= ((((((((arr_9 [i_2] [i_2]) ? var_12 : var_11))) != 3236883659))))));
                        arr_34 [i_3] [i_4] [i_9 - 3] = -21035;
                        arr_35 [i_2] [i_2] [i_3] [i_9] [i_3] = ((255 % ((-(arr_10 [i_3])))));
                        var_26 += ((~((-(arr_24 [i_2] [i_3] [i_2 + 2] [i_9 + 1] [i_9 + 1])))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 16;i_12 += 1)
                {
                    {
                        arr_43 [0] [0] [0] [i_12] [i_10] [i_10] = 2097151;
                        var_27 &= (((((arr_6 [i_2 - 1]) ? 3739566110 : ((2875657871 ? var_5 : 13290370569590192893)))) >> (var_9 - 1113296728953716509)));
                    }
                }
            }
        }
        var_28 = (((arr_29 [i_2] [i_2] [i_2 - 2] [i_2 + 3] [i_2 - 1]) ? (min((arr_3 [i_2 + 2]), 32208)) : (arr_12 [i_2] [i_2] [10])));
    }
    var_29 = ((var_2 != (((var_6 ? (48144 > var_6) : var_7)))));
    #pragma endscop
}
