/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = (max(var_16, ((((max(((var_6 ? var_4 : var_9)), var_0))) ? var_10 : (((((var_5 ? var_14 : var_14))) ? var_11 : var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = (var_12 >= 6956958835484174469);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 -= (6278601008847124682 ? 4611685949707911168 : 13835058124001640448);
                                var_19 = (max(var_19, (((var_4 > var_13) ? (((arr_12 [i_0 - 3] [i_0 - 3] [i_0 + 1]) ? (arr_12 [i_0 - 3] [i_4] [i_0 - 2]) : var_1)) : (max((arr_12 [i_0 - 3] [12] [i_0 - 1]), var_11))))));
                                var_20 = (min(13835058124001640448, 4611685949707911171));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_0] [i_0] = arr_15 [i_0];
                    var_21 = (min(var_21, ((((((var_13 << (var_9 - 9026624572776629153))))) ? (((min(7107775230299070112, (arr_8 [i_1] [i_1] [i_1]))) << (((~1) + 26)))) : (((~var_12) ? var_1 : (~var_7)))))));
                    var_22 = (max(var_22, ((((min((arr_6 [i_0 - 3] [i_5]), 11421607181593082650))) ? (((~((min(1, var_14)))))) : var_12))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_23 ^= (arr_27 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_7] [1]);
                                var_24 = (arr_11 [i_0] [i_0] [i_0 - 2] [i_0 - 3] [i_0 + 1]);
                                var_25 -= (!var_4);
                            }
                        }
                    }
                    var_26 += 2;
                    arr_30 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((((((arr_14 [1] [1] [i_6] [i_1] [i_0] [22] [22]) || (arr_1 [i_1] [i_1]))))) / (arr_4 [i_1] [i_1]));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    var_27 = (max(var_27, ((min((((arr_10 [i_0 + 1] [i_0 + 1]) ? (min(var_8, var_6)) : 9948709729815347563)), (((((var_4 ? var_0 : var_13))) ? var_8 : ((var_13 ? var_5 : var_8)))))))));
                    var_28 = (max(var_28, var_11));
                }
                arr_35 [i_0] = (((arr_28 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] [i_0]) != (min((arr_23 [i_0 + 1] [i_0 + 1] [i_0 - 3]), (arr_23 [i_0 + 1] [i_0] [i_0 - 3])))));
                var_29 -= (min(var_9, (arr_27 [i_0 - 3] [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 - 2])));
            }
        }
    }
    #pragma endscop
}
