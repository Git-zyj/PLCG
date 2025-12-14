/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_2);
    var_19 = var_2;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] = 11544955356318319574;
            arr_6 [i_0] [i_1] [i_0] = ((!(arr_4 [i_0 - 1] [i_0 + 3] [i_0])));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_9 [i_0] = ((((max((arr_0 [i_2]), (arr_0 [i_0 + 1])))) ? (arr_1 [i_0] [i_0]) : (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0 - 1]) : var_13))));

            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                var_20 = ((-3 == (var_0 == 1)));
                var_21 = (min(var_21, (-17442 >= 11544955356318319574)));
            }
            for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
            {
                var_22 = (max(((max(10, (!var_13)))), (((-647554232 ? 5060467067322393993 : (arr_15 [2] [i_4] [i_0] [i_0]))))));
                arr_16 [i_0] [i_0] = var_17;
                var_23 = ((~(((((59 ? var_6 : var_8))) ? ((13 ? 8360603342557891371 : (arr_10 [i_0] [i_0] [i_4] [i_0]))) : 665663053))));
                var_24 ^= (((1280323728848709027 || var_10) ? (arr_13 [i_0] [3] [i_4]) : (arr_8 [i_0])));
                arr_17 [i_0] [i_0] [i_4] [i_4] = (((((329148340 ? ((3629304241 ? (arr_2 [i_0] [4]) : var_12)) : (((var_14 ? 14 : (arr_12 [i_4] [0] [i_0]))))))) ? ((max(((7815195055177301973 ? 4238 : 3)), var_7))) : (arr_10 [i_4] [i_2] [i_2] [4])));
            }
            for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
            {
                var_25 |= (((max((arr_21 [i_0 + 3] [i_2] [i_0 - 1] [i_0 + 3]), (arr_7 [i_2]))) != ((max(1, (max((-127 - 1), 9223372036854775807)))))));

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_26 = ((((((1 != 665663053) ? (~17269234515578340141) : (((1 ? -71 : var_4)))))) ? (max((~39), (!4796751327657625171))) : (max(((var_1 ^ (arr_3 [9] [i_0]))), ((~(arr_3 [i_0] [i_0])))))));
                    var_27 *= ((((max((max(var_10, var_17)), (~-2883253784487074437)))) ? (arr_22 [i_0] [i_2] [1] [i_5] [i_6] [i_6]) : ((max((max(13800, 22178)), ((((arr_7 [i_0]) && (arr_13 [i_0] [i_0] [i_5])))))))));
                }
                var_28 = ((-(max((arr_19 [i_0]), ((((arr_24 [i_2] [i_2] [i_5] [i_0 + 3] [i_0]) ? -103 : var_14)))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_29 [2] [2] [12] [i_7] [i_8] [i_7] |= (-((((var_4 < var_15) || (arr_22 [i_0 + 2] [i_0 + 2] [8] [i_7] [i_7] [i_7])))));
                            arr_30 [i_0] [0] [6] = 40010;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            arr_34 [i_0] = (arr_10 [8] [i_9] [i_0] [1]);
            arr_35 [i_0] [i_0] = (arr_21 [5] [i_0] [7] [i_9]);
        }
        arr_36 [i_0] = (!var_2);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
    {
        arr_39 [i_10] = ((var_10 ? 1565708418528298851 : ((((arr_38 [i_10]) ? var_11 : 8)))));
        var_29 = 18028292127800276464;
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
    {
        arr_42 [i_11] = (-((~(((arr_41 [i_11] [i_11]) ? var_9 : (arr_40 [i_11]))))));
        arr_43 [i_11] [i_11] = ((((var_9 ? var_17 : var_8)) != ((max(4294967295, 2434536846)))));
    }
    #pragma endscop
}
