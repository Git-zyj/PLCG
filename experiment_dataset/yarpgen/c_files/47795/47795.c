/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (((((arr_0 [i_2]) || (((0 ? (arr_6 [i_0] [i_0] [i_2]) : (arr_2 [i_0])))))) ? ((3772599574 ? (((10871491943986722801 ? var_11 : (arr_2 [i_1 - 1])))) : ((var_2 ? -69 : (arr_8 [i_0] [i_1]))))) : var_12));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = arr_2 [i_1 + 1];
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 14;i_5 += 1)
            {
                {
                    var_18 ^= ((2853933176 > ((7716983211446798024 << (0 / -26211)))));
                    var_19 = ((-((0 ? 3330458235 : 0))));

                    for (int i_6 = 4; i_6 < 16;i_6 += 1)
                    {
                        arr_22 [i_3] [i_6] [i_4] [i_5 + 1] [i_6] = ((+(((!((((arr_18 [i_3] [i_4 - 2] [i_5 - 1]) ? 25416 : 4044974875))))))));
                        var_20 = var_7;
                        var_21 &= ((5 ? 0 : 0));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_22 = (((((arr_4 [i_4 - 1]) ? (0 + 3998285849) : (arr_18 [i_3 - 1] [i_4 + 1] [i_3 - 1]))) * (((((min(var_12, 17397))) ? ((1217 ? 0 : var_3)) : 6)))));
                        var_23 = 1393206563531751208;
                        arr_26 [i_3] [i_3] [i_5] [i_7] [i_7] = 4294967292;
                    }
                    var_24 = (min(var_24, (((1 >> (((max((arr_5 [i_4]), ((-4711265079845893225 ? var_3 : var_10)))) - 111)))))));
                }
            }
        }
    }
    var_25 = (var_15 % var_14);
    #pragma endscop
}
