/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((31811 + var_3) ? (max(var_10, 26084)) : var_5));
    var_12 += (min(-1, 184));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = (((((~(9223372036854775807 / 99)))) ? 1133614986 : (max((min(-1, var_7)), (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_1] = ((~(((max(var_2, 11002))))));
                    arr_9 [i_0] [i_0] [i_0] = ((((((65512 ? var_8 : (arr_4 [i_0] [i_0]))))) ? (max(((59 ? (arr_3 [i_0] [i_2]) : 33)), (arr_0 [i_1]))) : 2147483647));
                    var_14 += (max((arr_1 [i_1 + 3]), (min((arr_6 [i_1 + 4] [i_1 + 4] [i_1] [i_1 + 3]), (arr_5 [i_1] [i_1 - 1] [i_1 + 2])))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_12 [16] = ((-((((~8388607) < ((-7714305713465111992 ? (arr_7 [1]) : 255)))))));
            var_15 = (min(var_15, (((118 * (((arr_4 [i_3] [i_0]) ? ((var_1 ? 18446744073709551615 : -9223372036854775801)) : (arr_4 [i_0] [i_0]))))))));
        }
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            arr_15 [i_4] = (var_3 ? (((var_10 >> (187413518209180100 - 187413518209180099)))) : (((arr_14 [i_4] [i_4 + 1] [i_4 + 1]) ? 197 : 7714305713465111991)));
            arr_16 [i_4] [i_4] [i_4] = min(((var_8 ? var_7 : (arr_2 [i_4 + 1]))), ((((((-32767 - 1) ? (arr_13 [i_4] [i_0] [i_4]) : 255)) - (!36028797018963967)))));
            /* LoopNest 3 */
            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((min((((112 <= (arr_6 [i_6 + 1] [i_5 + 1] [i_5] [12])))), 12182)))));
                            var_17 = 255;
                            var_18 += ((((((arr_7 [i_7 + 3]) % var_5))) >= (((-9223372036854775807 - 1) - (arr_10 [i_6 + 1] [i_5])))));
                            var_19 += ((+(((arr_0 [i_0]) ? (max(-187413518209180113, 1)) : 35405))));
                            var_20 = ((0 ? ((((!((!(arr_19 [i_7] [i_0]))))))) : (((arr_21 [i_0] [i_4 + 1] [i_4 + 1] [i_6 + 2] [i_7 + 2]) / (((arr_22 [i_4] [i_4]) ? -1247 : 3260056748140947402))))));
                        }
                    }
                }
            }
            arr_23 [i_0] [i_4] [i_4] = (max((((!(arr_7 [i_4 + 1])))), (!var_6)));
        }
    }
    var_21 = (((max(var_3, var_7))) ? var_4 : (max((var_10 ^ var_6), (0 < var_4))));
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 19;i_10 += 1)
            {
                {
                    var_22 = ((!((max((!40), ((~(arr_26 [1]))))))));
                    var_23 = var_10;
                    arr_30 [i_8] [i_8] [i_9] [5] = (((((((65535 ? var_0 : (arr_28 [8] [i_10] [i_9] [6])))) ? 8241 : ((0 ? (arr_26 [0]) : (arr_25 [10]))))) - (min((var_2 & var_0), (127 < var_8)))));
                    var_24 = ((((~(arr_26 [i_8 - 2]))) >> (((arr_26 [i_8 - 1]) + 2134665095))));
                }
            }
        }
    }
    #pragma endscop
}
