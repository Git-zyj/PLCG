/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [0] [0] [i_2] = ((36807 ? -1 : 63));
                            var_12 *= (min(242, var_10));
                            var_13 = (arr_2 [i_2] [i_0]);

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_14 = (((((var_9 ? 30 : var_3))) ? (((2 >> (min(4, 639383733))))) : ((((min(-1, (arr_1 [i_0] [i_0])))) ? var_3 : (arr_1 [i_3] [i_1])))));
                                var_15 = (min(var_15, var_11));
                            }
                            arr_14 [i_1] [i_2] [i_3] = (((arr_10 [i_2]) ? (min(814611123, (-31 * var_8))) : (min(((-8068808001289051990 ? 39 : 120)), 14))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 12;i_7 += 1)
                            {
                                arr_24 [3] [3] [i_5] [i_1] [3] &= 22;
                                var_16 = (-((-((var_10 ? -20 : (arr_22 [i_0] [i_1] [i_5] [i_6] [i_0]))))));
                            }
                            for (int i_8 = 4; i_8 < 11;i_8 += 1)
                            {
                                var_17 = (min(var_17, ((min((arr_25 [i_0] [i_0] [i_8 - 3] [i_0] [i_8]), var_9)))));
                                var_18 = var_7;
                                var_19 = ((((-28 <= (arr_0 [i_1] [i_8 - 1]))) ? (arr_0 [i_8] [i_8 - 1]) : (((((arr_0 [i_0] [i_8 - 4]) == 6313920220786920054))))));
                            }
                            for (int i_9 = 0; i_9 < 12;i_9 += 1)
                            {
                                arr_30 [i_0] [8] [i_0] = ((((6313920220786920070 ? (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_28 [7] [i_1] [i_1] [i_5] [i_6] [i_1] [i_9]))) % -214));
                                var_20 = arr_13 [i_9] [1] [i_9] [i_6] [i_9] [i_0] [i_9];
                                var_21 = (((((-(arr_26 [i_0] [i_9] [i_9])))) ? (min(-14, (arr_26 [i_1] [i_1] [i_1]))) : (min((arr_26 [6] [i_0] [6]), (arr_26 [i_1] [i_9] [i_1])))));
                                var_22 |= (min(var_5, ((((arr_15 [i_0] [i_1] [i_6] [i_6]) ? (((-16257 != (arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) : ((var_4 >> (-20 + 50))))))));
                                var_23 = ((2843617409 ? -43 : -25));
                            }
                            arr_31 [i_1] [i_1] [i_1] [i_1] = (((((-6313920220786920071 - (((~(arr_15 [5] [i_1] [i_1] [i_6]))))))) ? (((((var_2 ? var_3 : (arr_25 [i_1] [i_1] [i_5] [i_5] [i_5])))) ? var_8 : ((min(var_7, var_6))))) : (((arr_9 [i_1] [i_1] [i_1] [8] [8] [8]) ? (arr_3 [i_0]) : (arr_27 [i_1] [i_1])))));
                            var_24 = var_3;
                        }
                    }
                }
                arr_32 [i_0] [i_0] [i_0] = -1060032457;
            }
        }
    }
    var_25 = (((-1989667143 ? 2 : 565270505)));
    var_26 ^= var_6;
    var_27 = (((~var_8) ^ var_10));
    #pragma endscop
}
