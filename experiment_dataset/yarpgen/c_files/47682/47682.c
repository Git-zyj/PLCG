/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_12 = ((~((~(arr_1 [i_0])))));
        arr_3 [i_0] [i_0] = ((min((min(-1926837115, 1267047736), -var_6))));
        var_13 = (min(((min((arr_1 [i_0]), (arr_2 [i_0])))), (min(923929770326328511, 1267047736))));
        arr_4 [i_0] = ((min((((var_9 ? (arr_1 [i_0]) : var_6))), var_10)) <= ((((var_5 > (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((!((max((min(18446744073709551612, (arr_0 [i_1]))), 1267047754)))));

        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            var_14 = 1267047754;
            arr_11 [i_1] = var_10;
            var_15 = ((!(arr_9 [i_2 - 2])));
        }
    }

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_16 = ((((((var_8 ? -1289272687 : -1289272686))) ? (max(1267047754, 68719476735)) : (arr_5 [2]))));
        arr_15 [i_3] [i_3] = ((((arr_9 [i_3]) >> (1267047765 - 1267047761))));
        var_17 = (arr_13 [i_3]);

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_18 = ((((max(((var_6 + (arr_5 [22]))), (53986 | var_3)))) ? var_9 : (((10821 - var_1) / (((1926837115 / (arr_1 [i_4]))))))));

            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                arr_21 [i_3] [i_3] [i_5] = var_5;
                var_19 = (((arr_13 [i_5 - 1]) - ((1 ? (arr_13 [i_5 - 1]) : (arr_13 [i_5 - 1])))));
                arr_22 [i_5] [i_4] [i_5 - 1] = ((((min((arr_2 [i_3]), var_5))) ? -1926837115 : var_10));
                arr_23 [i_5] = 30463;
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_20 = ((var_8 ? (((arr_26 [i_3] [i_6] [i_6]) ? var_4 : (arr_26 [i_3] [12] [i_3]))) : -0));
            var_21 = (arr_24 [i_6]);
            var_22 = -1;
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_23 = (((arr_8 [i_7] [i_7]) | 0));
            var_24 = (((650885972 < (arr_25 [i_3] [i_7] [i_3]))));
            arr_30 [i_7] = ((((~(-24183 - 1482470941311060496))) <= (min(var_4, (var_6 - 17522814303383223105)))));
            arr_31 [i_7] = ((((max(((min(var_7, (arr_10 [i_3] [i_7])))), 8772))) ? 4171249879542148518 : ((((!(arr_5 [i_7])))))));
        }
    }
    for (int i_8 = 2; i_8 < 8;i_8 += 1)
    {
        var_25 = (((arr_16 [i_8 + 1]) >> ((var_8 / (min(var_1, (arr_33 [7])))))));
        var_26 = (((((-560699074 ? 1 : 0))) ? ((((max(0, (arr_5 [i_8])))))) : (arr_14 [i_8 + 2])));
    }
    #pragma endscop
}
