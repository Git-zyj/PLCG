/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((!((max((max(var_2, var_0)), (max(var_2, var_8))))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max((min(var_8, (min(var_5, (arr_1 [i_0]))))), (arr_2 [i_0])));
        var_14 = (-(min((min((arr_1 [i_0]), (arr_0 [i_0]))), (arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_5 [i_1] = ((((max((var_5 ^ 120), -7724300202547137433))) ? var_1 : (arr_3 [i_1])));
        var_15 = (((arr_3 [i_1]) != var_10));
        var_16 = (min((max(var_7, (arr_4 [i_1] [i_1]))), (1 && var_2)));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_17 -= 40;
        var_18 = -41;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_19 = (!(arr_7 [i_3]));
            arr_12 [i_2] [i_2] = ((!(arr_4 [18] [i_2])));
            var_20 = arr_4 [i_2] [i_2];
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 3; i_5 < 22;i_5 += 1)
            {

                for (int i_6 = 4; i_6 < 24;i_6 += 1)
                {
                    arr_20 [i_4] [i_6] = var_10;
                    arr_21 [i_4] = (((((1 != ((40 ? (arr_11 [i_5]) : (arr_13 [i_2] [i_5] [i_4])))))) << (((((~var_8) ? var_1 : 115)) - 4294963317))));
                }
                for (int i_7 = 4; i_7 < 22;i_7 += 1)
                {
                    arr_25 [i_2] [i_4] [i_5] = ((((((min(var_1, var_1))) && ((!(arr_16 [i_4] [14] [i_7]))))) || (arr_15 [i_5 + 2] [i_7 - 3] [i_7])));
                    var_21 = (arr_7 [i_2]);
                }
                var_22 -= (~(((arr_19 [i_5 + 3] [i_4] [i_5 - 2] [i_5]) ? var_10 : 0)));
            }
            var_23 = (((max((arr_16 [i_2] [i_4] [i_2]), (max((arr_13 [i_4] [i_2] [i_4]), (arr_19 [i_2] [i_4] [i_2] [i_4])))))) ? (var_7 + var_7) : (((arr_7 [i_2]) ? (arr_7 [i_2]) : var_4)));
            var_24 = 1;
            arr_26 [i_2] [i_4] [i_4] = max(var_11, ((-(((arr_24 [i_4]) ? 905822611429439402 : 40)))));
            var_25 = (min(var_25, ((min(-77, (max((min(var_3, 40)), 0)))))));
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 23;i_10 += 1)
                {
                    {
                        arr_36 [i_9] [i_8] [4] [4] = (((((arr_34 [i_9] [i_10 - 2] [i_9]) ? var_11 : (arr_34 [i_9] [i_10 - 2] [i_9 - 1]))) >= ((max((arr_32 [i_2] [i_8] [i_9 + 1]), var_6)))));

                        for (int i_11 = 2; i_11 < 23;i_11 += 1)
                        {
                            arr_39 [i_9] [i_8] [i_8] = (arr_13 [i_2] [i_2] [i_9]);
                            var_26 = (max(var_26, (((min(40, (((arr_35 [i_8] [i_2]) ? (arr_7 [i_2]) : 1184039896506915701))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
