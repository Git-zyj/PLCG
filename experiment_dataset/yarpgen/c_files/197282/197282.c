/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = ((((min((arr_3 [6]), (min((arr_0 [11] [i_0]), var_2))))) ? 241 : (((((max(38, (arr_3 [12])))) <= var_6)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_1] = (max((((~-16923) ? 3743477202 : (~var_3))), ((((arr_6 [i_1] [i_1] [i_1]) && (((-46 ? 0 : 41020))))))));
            var_12 = (max(var_12, ((((((arr_6 [i_0] [i_1] [2]) ? (arr_6 [i_0] [i_0] [i_1]) : 1)) > (arr_5 [i_0] [4] [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_13 ^= (arr_2 [i_0]);
            arr_10 [i_0] [i_2] = ((38 ? 551490092 : 38));

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_14 = (arr_1 [7]);
                    var_15 += ((max(((min(12277, (arr_9 [i_0] [i_4] [i_3])))), ((1 << (((arr_8 [i_3] [i_3] [i_3]) - 1299662531)))))));
                    arr_15 [3] [i_2] [i_3] [i_4] [i_2] [i_4] = (((!var_2) & ((-(((!(arr_6 [i_2] [i_2] [i_3]))))))));
                    var_16 = (max((((551490092 ? (arr_0 [i_2] [i_2]) : 63246))), (((arr_1 [i_0]) ? (max((arr_2 [i_0]), (arr_14 [i_0]))) : (((min(var_6, 8192))))))));
                    var_17 = ((~(((((1361635285 ? var_9 : (arr_13 [i_0] [i_2] [i_2])))) ? 1 : (arr_8 [i_0] [i_2] [i_3])))));
                }
                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    var_18 = (!-266096329);
                    arr_19 [i_0] [i_2] [i_2] [i_2] [i_2] [i_5 - 3] = (i_2 % 2 == zero) ? (((((((arr_13 [i_5] [i_2] [i_5 + 1]) >> (((arr_5 [i_5 - 2] [i_5 + 1] [i_5 - 2]) - 13))))) | ((~((-38 ? 63246 : (arr_18 [i_0] [i_2] [i_2])))))))) : (((((((((arr_13 [i_5] [i_2] [i_5 + 1]) + 2147483647)) >> (((arr_5 [i_5 - 2] [i_5 + 1] [i_5 - 2]) - 13))))) | ((~((-38 ? 63246 : (arr_18 [i_0] [i_2] [i_2]))))))));
                    arr_20 [i_2] [i_2] = ((~(min(-1, 551490093))));
                }
                arr_21 [i_0] [i_3] [i_2] [i_0] = (arr_18 [i_3] [i_2] [i_3]);
            }
            var_19 = (((((arr_12 [i_0] [i_0] [i_0]) - var_4)) + (((var_3 ? (arr_9 [i_2] [i_2] [i_2]) : (arr_9 [i_2] [i_2] [i_2]))))));
        }
        arr_22 [i_0] &= (min(((-(max((arr_5 [i_0] [i_0] [i_0]), (arr_1 [0]))))), (1 / 38)));
    }
    var_20 = 12277;
    var_21 = (min((!var_5), ((3743477210 ? var_8 : var_8))));
    #pragma endscop
}
