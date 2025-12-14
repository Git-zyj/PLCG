/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {
                        var_17 += (max(-var_1, ((~(arr_9 [i_2] [i_1] [i_2] [i_3] [i_2] [i_1])))));
                        var_18 ^= ((~(((arr_10 [i_1] [i_1] [i_2] [i_1 + 1] [i_3] [8]) & 255))));

                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            var_19 ^= ((((var_16 ? var_1 : (arr_8 [i_0])))));
                            var_20 = (min(((max((arr_10 [i_1 + 1] [i_1 + 1] [i_0] [i_3 + 1] [i_4] [i_4 + 1]), (arr_10 [i_1 + 1] [i_1 + 1] [i_0] [i_3 + 1] [i_1 + 1] [i_4 + 1])))), (((arr_10 [i_1 + 1] [i_3] [i_0] [i_3 + 1] [i_1 + 1] [i_4 + 1]) ? (arr_10 [i_1 + 1] [i_2] [i_0] [i_3 + 1] [i_3 + 1] [i_4 + 1]) : (arr_10 [i_1 + 1] [9] [i_0] [i_3 + 1] [i_1 + 1] [i_4 + 1])))));
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_15 [i_0] [3] [i_3] [i_2] [i_0] [i_0] = ((((346923419 / (arr_1 [i_0] [7]))) + 65523));
                            var_21 = (max(var_21, (arr_0 [i_3])));
                            var_22 += var_3;
                        }
                        /* vectorizable */
                        for (int i_6 = 4; i_6 < 7;i_6 += 1)
                        {
                            var_23 = (!var_2);
                            var_24 = 6847093022935421299;
                            arr_20 [6] [i_0] = ((6847093022935421291 ? 6847093022935421306 : 4294967274));
                            var_25 -= (((~var_5) ? (arr_8 [i_1 + 1]) : (((arr_10 [i_0] [i_1] [i_6] [i_0] [i_2] [i_3]) ? 6847093022935421292 : (arr_2 [i_6])))));
                        }
                        for (int i_7 = 4; i_7 < 9;i_7 += 1)
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_2] [4] [i_0] [i_7 + 1] = (min(((+(min((arr_3 [i_0]), (arr_18 [i_7] [7] [i_1] [i_1]))))), 12));
                            arr_24 [i_0] [6] [i_0] [i_2] [i_3 - 1] [i_7] = ((((((((arr_0 [i_1]) ? 218446791 : (arr_5 [i_0]))) & (((max((arr_1 [i_0] [i_7]), var_15))))))) / (max(252, ((5 ? 6847093022935421297 : 7536759668212482755))))));
                        }
                    }
                }
            }
            var_26 = (arr_6 [i_0] [i_1 + 1] [7]);

            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                var_27 = (min((max(((~(arr_17 [i_0] [i_8 + 1] [i_1] [i_0]))), ((((arr_0 [i_0]) ? var_8 : 6147))))), (((((arr_14 [i_0] [i_0] [i_0] [i_1] [i_8] [i_8]) - var_2))))));
                arr_27 [i_0] = ((((((!(!240))))) & (arr_17 [i_0] [i_0] [i_0] [i_0])));
            }
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                var_28 += ((var_14 ? (((arr_26 [i_9] [i_1 - 1]) | var_0)) : var_10));
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 7;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_29 = var_16;
                            var_30 = min(248, (arr_19 [i_0] [i_1 - 1] [i_11] [i_11] [i_0] [i_0]));
                        }
                    }
                }
                var_31 = (arr_8 [i_1 + 1]);
                arr_34 [i_0] [i_0] [i_0] [i_0] = (~41910);
            }
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_32 = (min(var_32, (((((-69277689 ? (arr_1 [i_12] [i_12]) : -11238))) ? (arr_1 [i_12] [i_12]) : (((!-5320796768116730379) ? var_7 : (max(var_10, var_7))))))));
            var_33 = var_6;
        }
        var_34 += (max((arr_4 [i_0]), (arr_31 [2] [2] [i_0])));
    }
    var_35 = (min(((((var_5 ? 10 : var_8)))), 2889515024327695577));
    var_36 = ((var_6 ? ((var_5 ? (((-11 ? 32751 : 13))) : (var_4 - var_9))) : var_8));
    var_37 ^= (max(((var_13 >= (!var_15))), (((~134217720) >= (var_10 && var_1)))));
    /* LoopNest 3 */
    for (int i_13 = 2; i_13 < 18;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 19;i_15 += 1)
            {
                {
                    arr_47 [i_13] [0] [i_13] [i_14] |= (min((((arr_45 [i_15] [i_15] [i_15 - 1]) ? (arr_43 [i_13 - 2] [i_15] [i_15 + 1]) : (arr_43 [i_14] [i_14] [i_15 - 2]))), (!18)));
                    var_38 = (((~(var_1 < 4068231395))) % ((((arr_43 [i_13 - 1] [i_15 - 1] [i_15 + 1]) && (arr_46 [i_13 - 1] [i_15 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
