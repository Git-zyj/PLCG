/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_10 ? (((var_15 | 60491) & (var_16 | var_0))) : (((57146 >= var_5) + (57 ^ var_4)))));
    var_21 = (min(var_21, (((((((max(8390, var_17))) ? (min(970253421569814754, 60493)) : (970253421569814736 || 5045))) < var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] = (min(((65535 ? var_14 : var_17)), ((min((arr_0 [i_1] [i_0]), 5042)))));

                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    var_22 = ((((arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 1]) ? (~var_5) : var_8)) >> (var_19 - 453691880803898057));
                    var_23 = (min(var_23, (((((max(var_15, (arr_5 [i_2 + 1] [i_2 - 1] [18] [i_2 - 2])))) ? (((arr_6 [i_2 - 3] [i_2 - 3] [i_2 - 3]) ? var_19 : 65535)) : (((var_0 & (arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1])))))))));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        var_24 = ((var_11 ? (arr_2 [i_2 - 2]) : var_1));
                        var_25 += var_1;
                    }
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_26 = (((((arr_6 [i_0] [i_0] [13]) ? (57136 - var_18) : (var_15 + var_5))) % var_7));
                    arr_12 [i_0] [i_1] [i_4] = (((((arr_10 [i_1]) + var_16)) - (min(26, (arr_10 [i_4])))));
                }
                var_27 = var_2;
                arr_13 [i_1] [i_1] [i_1] = (((var_3 | (arr_6 [i_0] [i_1] [14]))));
            }
        }
    }

    for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] [12] = (((((var_16 >> (arr_9 [i_5] [i_5] [i_5] [i_5]))) << (60479 - 60474))));
        var_28 = (min((((32766 << (22502 - 22494)))), (((max(490161323, 7386862636487481262)) << ((((((60493 ? -9147226646462259422 : 60493)) + 9147226646462259433)) - 11))))));
    }
    for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
    {
        var_29 = ((((((arr_11 [i_6] [i_6]) & ((-(arr_18 [i_6])))))) ? (((arr_0 [i_6 - 1] [i_6 + 1]) ? (min((arr_1 [i_6]), (arr_5 [i_6 - 1] [i_6] [i_6] [7]))) : (3804805963 != 255))) : ((((!(~var_15)))))));
        var_30 = ((((min(var_18, (200 | var_0)))) * (max(var_1, var_12))));
        var_31 += ((var_18 ? ((var_11 / (((arr_9 [i_6] [i_6 + 1] [i_6 + 1] [i_6]) | 490161332)))) : (((min(65535, 254))))));
        var_32 = (max(var_32, ((((((~(-1867317386 >= var_18)))) ? (arr_0 [i_6] [i_6]) : ((var_17 - (arr_6 [i_6 - 1] [i_6 + 1] [i_6]))))))));
    }
    #pragma endscop
}
