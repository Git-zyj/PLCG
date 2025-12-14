/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = ((((max((arr_1 [i_0 - 1]), var_0))) ? (((((arr_6 [i_2 + 1] [i_1] [3]) ? var_10 : -2002651129)))) : (arr_0 [i_0 + 2])));
                    arr_9 [i_2] [i_1] [i_0] [i_0] = ((~(250 | 30621)));

                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            arr_17 [i_4] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (0 << 1);
                            var_11 = ((1 ? 113 : 255));
                            arr_18 [i_0 - 1] [i_1] [i_4] [i_3] [i_4] = var_3;
                            var_12 = ((~((~(1 ^ var_9)))));
                        }
                        var_13 = var_9;

                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            var_14 &= ((var_3 ? var_1 : (((var_7 ? ((var_5 ? 255 : 48)) : (arr_15 [i_0] [2] [4] [10] [i_5] [4] [i_0]))))));
                            var_15 = 1;
                            var_16 = ((-((~(max((arr_14 [i_0 - 1] [i_5]), (arr_20 [i_0] [i_1] [i_1] [i_1] [i_5])))))));
                            var_17 = (min(var_17, ((max(var_6, -113)))));
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_18 *= ((!((max(27661, (arr_5 [i_2 + 1] [i_0] [i_0 + 2]))))));
                            var_19 = (min(var_19, (((((((((var_5 ? -145015059 : var_9))) ? ((min(var_10, 142))) : var_7))) ? (4095 + -1887470876) : 1)))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_20 = (arr_2 [i_0 + 1] [i_0 + 1] [i_1]);
                            var_21 += (((((1 ? 41 : 63301))) ? 1 : (((arr_16 [i_0] [i_1] [0] [i_3] [i_7]) ^ 78))));
                            arr_25 [i_7] [i_1] [i_1] [i_1] [i_1] [i_1] = (((~(arr_21 [i_7] [i_7] [14] [i_2] [i_1] [i_1] [i_0]))));
                            arr_26 [i_0] [i_1] [i_1] [i_3] [8] |= ((var_4 ? (arr_2 [i_3 + 2] [9] [i_0 + 2]) : var_10));
                            arr_27 [i_0 + 1] [i_1] [i_7] [i_3] [i_7] = 169;
                        }
                        for (int i_8 = 3; i_8 < 22;i_8 += 1)
                        {
                            var_22 &= var_6;
                            arr_31 [i_8 + 1] [i_8] [i_3 - 1] [i_2 + 1] [i_2] [i_8] [i_0 - 1] = (((((((((arr_5 [i_0 + 1] [i_0] [i_0]) ^ var_4))) ? (max(4294963201, 41)) : 42))) ? (max(((130 ? var_0 : 4095)), 1357571451)) : (arr_12 [i_0] [i_1] [i_2])));
                            var_23 = ((var_6 != (arr_16 [i_1] [i_1] [i_8] [4] [17])));
                            var_24 = (max(var_24, ((((arr_3 [i_1]) ? -1877737475 : -1)))));
                            var_25 = var_4;
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 1; i_9 < 12;i_9 += 1)
    {
        arr_34 [i_9] = 18;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 13;i_11 += 1)
            {
                {
                    var_26 = (min(var_26, ((((min((960991291 / 52), ((221 / (arr_24 [i_11]))))) + (((((4294967295 ? 1583811544 : 26440))) ? (arr_35 [i_9 - 1] [i_11 - 1]) : 1281611907)))))));
                    arr_41 [2] [i_9] [i_11] [2] = (arr_6 [i_9] [i_9] [i_11]);
                    var_27 = (min(var_27, ((((var_3 / var_3) == ((145015040 * (49925 / 2023034085))))))));
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        var_28 = ((-1398377464022078352 / ((((arr_44 [i_12]) * (arr_44 [i_12]))))));
        arr_46 [i_12] = (((min((arr_45 [i_12]), var_3))) ? -1 : ((-30331 ? (arr_45 [i_12]) : (arr_45 [i_12]))));
        /* LoopNest 3 */
        for (int i_13 = 3; i_13 < 23;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    {
                        var_29 = (min(var_29, ((((arr_51 [i_12] [i_13] [i_14]) ? (((arr_44 [i_13 - 3]) ? (34 > 192) : (1 == 4294967295))) : (((!(arr_43 [i_13] [i_13 - 3])))))))));
                        var_30 = 145015055;
                    }
                }
            }
        }
        var_31 = (arr_47 [i_12] [i_12] [i_12]);
    }
    var_32 |= var_2;
    var_33 = 234;
    #pragma endscop
}
