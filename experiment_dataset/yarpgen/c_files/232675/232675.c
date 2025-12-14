/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1 + 1] = 960215412;
                    var_15 = (((((!(((-80254546 ? var_14 : var_12)))))) << (3334751884 - 3334751871)));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = 18446744073709551588;
        arr_14 [i_3] = (max((min(-116, (var_1 <= var_10))), 960215412));
        var_16 = (min((!4), (((arr_10 [i_3]) == 84))));
        arr_15 [i_3] = (arr_10 [i_3]);
        var_17 = (arr_10 [i_3]);
    }
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        var_18 = (max((min(-var_4, (max(59, 1615585426)))), (96 ^ -852385174)));
        arr_18 [i_4] = (((((arr_17 [i_4 + 2] [i_4]) ? (((arr_10 [1]) ? var_1 : var_2)) : (var_13 >= var_8)))) / 725364443);
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_19 = (max(var_19, (arr_24 [i_7] [i_6] [i_7 + 1])));
                        var_20 |= ((-((((var_13 <= (arr_31 [i_5] [i_6] [i_7] [i_7])))))));
                        var_21 = ((((((((((arr_31 [i_5] [i_5] [i_5] [i_6]) ? 30 : 3569602853))) || (((var_2 + (arr_19 [i_5])))))))) < ((var_3 + (arr_27 [i_5] [6] [i_7 + 2] [i_6])))));
                    }
                }
            }
        }
        var_22 -= (max((arr_21 [i_5]), (max((((arr_31 [i_5] [i_5] [16] [0]) ^ 0)), (var_12 & var_1)))));
        arr_33 [0] [i_5] = (max((min((arr_9 [i_5] [i_5]), (arr_9 [i_5] [i_5]))), (arr_9 [i_5] [i_5])));
    }
    var_23 = var_9;
    #pragma endscop
}
