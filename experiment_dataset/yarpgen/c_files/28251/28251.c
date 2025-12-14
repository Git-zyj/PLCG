/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (max(0, ((-(var_5 && 211)))));
    var_14 = (((max(((1 ? var_10 : var_11)), ((var_2 ? var_3 : var_10)))) < ((max(var_0, 44)))));
    var_15 = -1730212838;

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((-211 >= (((arr_2 [i_0]) ? var_0 : var_1)))) ? (((arr_0 [i_0]) ? ((((arr_2 [i_0]) ? (arr_0 [i_0]) : 1))) : (((arr_1 [i_0] [i_0]) | var_0)))) : (~33578)));
        var_16 = (max(var_16, ((((~(min(var_10, (arr_1 [i_0] [i_0])))))))));
        arr_4 [i_0] &= ((((((arr_2 [i_0]) <= (arr_2 [i_0]))) || (241 || var_9))) || (1 + -1));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_17 = (((((((arr_1 [10] [10]) ? var_10 : (arr_1 [i_1 - 1] [i_1 - 1]))) > (~var_4)))) - ((min((arr_6 [i_1]), (((arr_1 [i_1] [4]) <= (arr_6 [i_1])))))));
        arr_8 [i_1] = (arr_7 [i_1]);
        arr_9 [i_1] = ((!(arr_7 [i_1])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_18 *= ((((max((arr_12 [i_2]), (((arr_11 [i_2] [i_2]) ? 68169720922112 : (arr_11 [i_2] [i_2])))))) != (min(var_2, (arr_12 [i_2])))));
        var_19 -= 4538188718596777988;

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_20 = (max(var_20, (!var_6)));
            var_21 = (arr_13 [i_2]);
        }
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            arr_18 [i_4] [i_2] = (((((((arr_10 [i_2]) ? 31960 : 13842))) ? ((-2497 ? -1033 : (arr_17 [i_2] [i_2]))) : ((62 * (arr_15 [i_2]))))) <= ((((((arr_17 [i_2] [i_2]) ^ (arr_14 [i_2] [i_4])))) ? var_0 : ((min(1, (arr_15 [13])))))));
            var_22 = ((((((((arr_13 [i_4]) / -2511)) - (((arr_17 [i_2] [i_4]) * -1046))))) / (min(((((arr_10 [i_4]) / 1842))), var_6))));
            arr_19 [i_2] [i_2] = (max((arr_17 [i_2] [i_2]), 1));
            arr_20 [i_2] [i_4] [i_4 + 2] = ((((((!(((arr_15 [i_2]) <= var_8)))))) | var_6));
        }
        arr_21 [4] = ((((((1073741820 < (arr_11 [i_2] [i_2]))))) + (min((arr_16 [i_2] [i_2] [i_2]), (arr_17 [i_2] [i_2])))));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_23 = (~var_8);
        arr_24 [i_5] = ((!1) * (((((arr_14 [i_5] [i_5]) >> (var_7 - 4839284815138164521))))));
        arr_25 [i_5] = (max(((((1882906647516525121 ? (arr_23 [i_5]) : (arr_22 [i_5]))) * (var_4 != 4294967295))), ((((((arr_17 [i_5] [i_5]) << (((arr_15 [i_5]) - 84)))) > (0 * 32256))))));
    }
    #pragma endscop
}
