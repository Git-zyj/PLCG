/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_16 = -2630;
        arr_3 [i_0] = ((((!((!(arr_1 [i_0] [i_0]))))) ? (arr_1 [7] [i_0 + 1]) : (((arr_0 [i_0 - 1]) ? var_3 : (~var_11)))));
        var_17 += ((min((arr_0 [i_0 - 1]), (arr_2 [i_0 - 1] [i_0 - 1]))));
        arr_4 [10] = ((((-656036172 | (min(656036172, (arr_0 [i_0])))))) ? (((!var_7) ? (arr_1 [4] [4]) : (min(-275231005, var_6)))) : (((max((((253 > (arr_1 [5] [i_0])))), (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_18 += ((((((arr_7 [i_1]) ? 656036155 : -656036156))) || 656036156));
        arr_8 [i_1] = (-((~(arr_0 [i_1]))));

        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            var_19 = var_2;
            arr_13 [i_1] = (~656036155);
            arr_14 [i_2] [i_1] [i_1] = (!((max(7, 1))));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_20 = var_11;
            var_21 = (!4193280);
            arr_18 [i_1] [i_1] [i_3] = -2216380;
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_22 = (arr_12 [i_1] [7] [i_4]);
            arr_21 [i_4] [i_4] = ((((((((-656036156 + 2147483647) >> (arr_9 [i_1] [2] [10])))) <= var_1)) ? (max(((min(656036152, var_7))), 11330751586420943499)) : (((((max(4398046511103, (arr_15 [i_4] [i_1] [i_1])))) ? (arr_0 [i_1]) : (arr_6 [i_4]))))));
        }
    }
    var_23 = var_1;
    var_24 = (min((!126), var_2));
    var_25 += (((min(var_4, (var_14 - 1))) >= (((var_11 || ((max(121, 656036174))))))));
    #pragma endscop
}
