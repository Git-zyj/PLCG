/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = 2354651489556371003;
        var_17 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])));
        var_18 = (min(var_18, ((-(arr_1 [i_0])))));

        for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_19 = (((((567144868 ? (arr_1 [i_0]) : var_15))) || ((((arr_0 [i_0]) ? -567144868 : var_12)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_12 [i_3] = (((arr_7 [13] [i_1 + 1] [i_1 - 1] [i_1 + 1]) ? (arr_0 [i_1 + 2]) : (arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 2])));
                        arr_13 [i_0] [i_1] [i_2] [i_3] &= (((arr_3 [i_0] [8] [i_2]) <= (arr_3 [17] [i_1] [i_1 - 2])));
                        var_20 = (((((arr_5 [i_0] [i_0] [i_0] [i_0]) ? 567144860 : 567144895))) ? (((arr_3 [i_0] [5] [i_2]) ? (arr_9 [i_0] [i_1]) : (-9223372036854775807 - 1))) : (arr_6 [18] [i_1] [5] [i_1 + 1]));
                    }
                }
            }
            var_21 += (((0 * 165) <= 1172940996));
            arr_14 [i_0] [i_0] = arr_11 [i_1];
        }
        for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
        {
            var_22 = (((arr_11 [i_4]) ? (arr_8 [i_4] [i_4] [i_0] [i_4]) : (arr_16 [i_4])));
            var_23 = (arr_0 [i_4 + 1]);
            var_24 ^= (((arr_15 [i_4 - 1] [i_4 - 1]) ? (arr_15 [i_4 - 1] [22]) : (arr_15 [i_4 - 1] [i_4 - 1])));
        }
        for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
        {
            var_25 *= ((~((((arr_5 [i_0] [i_0] [i_0] [4]) <= (arr_17 [15]))))));
            var_26 = (arr_1 [i_0]);
            var_27 &= (((arr_10 [i_5] [i_0] [i_5] [i_5 + 2] [8] [i_5]) ? (((-1 ? 567144868 : 241))) : ((var_9 ? -2174288213448023864 : 4388252101306457032))));
        }
        for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
        {
            var_28 = -1996931074814236431;
            arr_22 [i_6] = (((arr_10 [i_6] [i_0] [i_0] [i_0] [6] [i_6 - 1]) ? (arr_10 [i_6] [i_6] [i_0] [i_0] [i_0] [14]) : (arr_10 [i_6] [i_0] [i_0] [i_0] [12] [i_6 - 1])));
            var_29 = (min(var_29, 105));
        }
        var_30 = arr_19 [i_0] [i_0] [i_0];
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] = (((min(((max(var_7, 1172940996))), (min(1790562707678775100, 343887125)))) + (min((((arr_0 [i_7]) ? (arr_11 [6]) : (arr_25 [i_7]))), (((arr_10 [8] [i_7] [i_7] [i_7] [i_7] [i_7]) ? (arr_21 [i_7] [i_7] [i_7]) : var_11))))));
        var_31 = -567144860;
    }
    #pragma endscop
}
