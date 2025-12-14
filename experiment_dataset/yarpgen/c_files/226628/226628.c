/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = ((((min((arr_3 [i_2]), (-1 >= 29256)))) & var_15));
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2] = (((((((var_5 ? var_8 : 0))) ^ ((2783394435 ? -4447444979149166486 : (arr_6 [i_0] [i_0] [i_2] [i_3] [i_4])))))) ? (min((arr_1 [i_0] [i_1]), var_13)) : ((max(7909, var_5))));
                            }
                        }
                    }
                    arr_11 [i_0] [i_1] [i_1] = (arr_4 [i_1] [i_1] [i_2] [i_0]);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_5] [i_1] = (((0 ? 32761 : (arr_4 [i_0] [i_0] [i_1] [i_5]))));
                    var_21 = (!var_13);
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    arr_19 [i_6] [i_6] [i_1] [i_0] = (((-8768 ? 3018530571 : var_17)));
                    var_22 &= ((var_6 ? ((~(~-64))) : ((18446744073709551615 ? ((~(-127 - 1))) : 0))));
                    arr_20 [i_0] [i_1] = (((min(((127 | (arr_15 [i_0] [i_0]))), ((min(-17939, var_6)))))) ? ((((min(-5911333265029018939, 1))) ? (((3115154540 ? var_13 : 96))) : (267911168 | 3))) : ((1861141170 & (15 & var_1))));
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                {
                    var_23 = ((((133169152 / (arr_1 [i_0] [i_1]))) * ((min((140 * var_13), ((8188 ? var_13 : (arr_6 [i_0] [i_1] [i_1] [i_7] [i_7]))))))));
                    var_24 = ((1 ? var_0 : var_6));
                    arr_23 [i_0] [i_1] [i_7] &= (((((var_15 ? 2147483647 : -3))) ? var_11 : (((((min(3458764513820540928, 5296775675888575161)) > (((arr_7 [i_0]) ? var_15 : -1))))))));
                    arr_24 [i_0] [i_1] [i_1] [i_7] = var_7;
                    arr_25 [i_7] [i_1] [i_0] = ((-91 ? 1 : 1));
                }
                arr_26 [i_0] &= 35;
            }
        }
    }
    var_25 = (((((((((var_15 ? var_4 : var_9))) == 7911971970786918323)))) == (((~54) ? ((min(var_1, var_0))) : ((-114 ? var_8 : var_17))))));
    var_26 = var_7;
    #pragma endscop
}
