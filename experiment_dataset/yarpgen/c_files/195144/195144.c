/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_12 = var_6;
        var_13 = 1;
        var_14 = ((-(arr_1 [i_0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            {
                arr_11 [i_2] [10] = var_3;
                var_15 = (arr_6 [i_1]);
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_16 |= (((1 != 38) ? (arr_5 [i_3]) : (arr_7 [i_1] [i_1])));
                            var_17 = (!-1310083573699779492);
                            arr_17 [i_2] [i_3 + 1] = (!12254637935398390872);
                        }
                    }
                }
            }
        }
    }
    var_18 = (-1310083573699779492 / 1998093354);
    var_19 |= 584507877351815596;
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                arr_23 [i_5] [i_5] = (((arr_21 [i_5]) < (1998093357 / 11)));
                var_20 = (((((((3 ? (arr_22 [i_5]) : var_11))) ? (!var_2) : var_11)) >> (var_2 - 13825)));

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_21 = ((9169 ? (arr_20 [i_5]) : ((((arr_24 [i_5 - 2]) > (~2759639551009082885))))));
                    var_22 = ((((((((var_6 ? var_4 : 122))) ^ var_8))) | ((2759639551009082885 ? var_8 : (arr_22 [i_5 - 1])))));
                    arr_26 [i_5] [i_6] [i_5] = (arr_18 [i_6]);
                }
                arr_27 [i_5] [i_6] [i_5] = var_9;
                var_23 = (min(var_23, (arr_20 [20])));
            }
        }
    }
    #pragma endscop
}
