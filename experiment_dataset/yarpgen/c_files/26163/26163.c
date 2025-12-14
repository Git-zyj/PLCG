/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            arr_8 [i_0] = arr_3 [i_1];
            var_14 = var_11;

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_15 = (var_12 ? (arr_2 [i_1 + 1]) : (arr_3 [i_0]));
                var_16 = (arr_1 [i_0] [i_0]);
                var_17 = (min(var_17, (((((((arr_4 [i_2]) ? (arr_5 [i_2] [i_1] [i_2]) : var_8))) ? 57084 : (arr_7 [i_1] [1]))))));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_18 = ((13490274211957839174 ^ ((((arr_9 [i_0] [i_0] [i_0]) ? 57085 : (arr_2 [i_0]))))));
                var_19 = ((0 % (arr_1 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_20 = (18446744073709551601 && 16027300904832460819);
                            var_21 |= ((9052530503258676167 ? (arr_9 [i_5] [14] [i_3]) : (arr_9 [i_0] [0] [i_3])));
                            var_22 = (((arr_18 [i_0] [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_5 + 2] [i_5 + 1]) && (arr_14 [i_0])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_26 [i_0] [i_1] [14] [i_6] [i_0] = ((!(arr_22 [i_0] [i_1 + 1] [i_0] [i_0])));
                            var_23 = ((((((arr_24 [i_7] [i_7] [i_0]) ? (arr_24 [i_0] [i_0] [i_0]) : (arr_16 [i_0] [i_0])))) ? 1 : var_4));
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                var_24 = (min(var_24, ((((arr_23 [i_1] [i_1 + 1] [i_1 - 2]) ? (arr_23 [i_0] [i_1 - 1] [i_0]) : (arr_23 [i_0] [i_1 - 1] [i_1]))))));
                var_25 = (((arr_16 [i_1 - 1] [i_1 + 1]) / (arr_16 [i_1 + 1] [i_1 - 1])));
            }
        }
        arr_29 [i_0] = ((((min(((((arr_28 [i_0] [i_0] [i_0]) ? (arr_3 [i_0]) : 1))), (arr_21 [i_0])))) ? (((-(~var_9)))) : (((8432 ? var_3 : (arr_13 [i_0] [i_0] [i_0]))))));
        var_26 -= 459001866842644862;
        arr_30 [i_0] = (min((((arr_14 [i_0]) ? (arr_11 [i_0] [i_0]) : (arr_11 [i_0] [9]))), (arr_27 [i_0])));
    }
    for (int i_9 = 4; i_9 < 15;i_9 += 1)
    {
        arr_33 [9] = var_4;
        arr_34 [i_9] |= (arr_31 [i_9 - 4]);
    }
    var_27 = var_7;
    var_28 = max(((var_13 ? -var_9 : (min(var_10, var_2)))), ((((max(var_5, var_6)) == (var_3 != 2464239669)))));
    #pragma endscop
}
