/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (min(var_14, (((((min(var_11, var_6))) / (min((arr_0 [0]), var_7)))))));
        var_15 = ((((min((max(var_3, 13691127010406763349)), (max(68719475712, var_2))))) ? (((((max((arr_1 [i_0]), 3021874823))) ? (arr_0 [i_0]) : (3186161022 + var_5)))) : var_2));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_16 ^= ((!(var_1 & var_5)));
            var_17 ^= max((arr_6 [i_1]), ((var_10 | (min(var_2, var_12)))));
            var_18 = min(4755617063302788279, ((-(arr_2 [i_0]))));
        }
        var_19 = (((((~(-2147483627 >= 1)))) % var_5));
    }
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    {
                        var_20 = (((((~(arr_14 [i_4] [i_3] [i_5 - 2] [i_5])))) ? (!var_7) : (((arr_13 [i_2] [i_2 + 1] [i_2] [i_2]) ? var_8 : (arr_13 [i_2] [i_2 - 1] [13] [i_2])))));
                        var_21 = ((((((((384013035 & (arr_12 [i_2] [i_3] [i_4] [i_5])))) ? (((min(-57, var_12)))) : var_2))) ? (~18446744073709551598) : (((min(5912, (arr_8 [i_5 - 1] [i_2 + 1])))))));
                        var_22 = (arr_13 [i_3] [i_3] [i_5 + 3] [i_5 - 1]);
                    }
                }
            }
        }
        var_23 = (((((-5 ? (var_8 | -20736) : 1273092472))) || var_4));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 21;i_8 += 1)
            {
                {
                    var_24 = ((-((-1974607799 ? (!var_8) : (var_8 * 2147483647)))));
                    var_25 *= ((68719475714 ? 35533 : 23681));
                    var_26 = (min(var_26, (((~((min((!var_5), 0))))))));
                }
            }
        }
        var_27 = (min(var_27, (((((min(-1885971313, ((6 >> (((arr_21 [i_6] [0]) + 130))))))) < (~var_6))))));
        var_28 = (min(var_28, ((((arr_21 [i_6] [i_6]) < (((min((arr_10 [i_6] [7] [8]), (arr_15 [0] [i_6] [i_6] [i_6] [21]))))))))));
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_29 *= (min(((var_4 - (min(14762, var_3)))), ((((min(var_12, (arr_21 [i_9] [i_9])))) ? var_2 : var_4))));
        var_30 = ((((max(108, 3186161022))) ? (arr_14 [i_9] [i_9] [i_9] [i_9]) : var_9));
    }
    var_31 = var_9;
    var_32 = var_12;
    var_33 *= var_10;
    #pragma endscop
}
