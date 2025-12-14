/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (24 ? (1426997706 - 82) : (min(4294967295, 4107824885)));
                var_17 = (max(var_17, 13));
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_18 = (min(var_18, (((-(((!(156 - 11)))))))));
        var_19 &= 13;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_20 |= 4398046511103;
                    arr_13 [4] [4] [17] = (min(-31791, 4802539490176305009));
                    arr_14 [i_2] [17] [i_3 + 1] [i_4] = var_6;
                }
            }
        }
        arr_15 [i_2] = var_0;
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_21 -= var_12;
        var_22 = (min(var_22, (arr_16 [i_5] [i_5])));
        var_23 = (min(var_23, (min(var_10, (min(((min(var_2, -29496))), (arr_17 [i_5])))))));
    }
    for (int i_6 = 2; i_6 < 20;i_6 += 1)
    {
        arr_20 [i_6 + 1] [i_6 + 3] = (17941823096382870407 ? 13 : ((((!(((1 ? 2095901686 : 25))))))));

        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            arr_23 [i_6 + 3] [6] [i_6] |= ((((min(((((arr_19 [i_7]) || (arr_21 [i_6])))), (var_13 * -4398046511103)))) ? ((((arr_17 [i_6 - 1]) && var_7))) : ((50 ? (!var_8) : 12855))));

            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                arr_26 [i_6] [i_7] = ((~(((arr_25 [i_7] [i_7] [i_7] [i_7]) ? 11857050144678805553 : ((var_11 ? (arr_22 [i_6 + 1] [i_6]) : -3154292172358218781))))));
                arr_27 [12] [i_7] [i_8] [i_8] = (((min((arr_19 [i_6 - 2]), 731359818)) - (arr_19 [i_6 - 2])));
            }
            var_24 -= ((var_10 || (arr_16 [i_6 + 2] [i_6 + 2])));
            arr_28 [i_6] [i_6] &= var_7;
        }
        var_25 -= (((min((min(7621325114304176635, 4294967279)), (((5 ? var_2 : var_4))))) - (((18446708889337462784 ? 0 : -5311249237068570041)))));
        var_26 = (((arr_22 [i_6 - 2] [i_6]) ? var_10 : (((var_3 ? var_15 : -76)))));
        var_27 = (min(((~(min(128, (arr_16 [i_6] [i_6 - 1]))))), ((min(4294967268, (arr_21 [i_6 - 2]))))));
    }
    for (int i_9 = 1; i_9 < 13;i_9 += 1)
    {
        var_28 += (arr_24 [i_9] [i_9]);
        var_29 = (!(((arr_18 [i_9 + 1]) && 4294967295)));
        var_30 &= ((!((((arr_21 [i_9 - 1]) ? (arr_21 [i_9 + 1]) : (arr_12 [i_9 - 1]))))));
    }
    var_31 = (((2147483647 | -68) ? (((var_4 ? 4294967281 : 625092890))) : var_5));
    #pragma endscop
}
