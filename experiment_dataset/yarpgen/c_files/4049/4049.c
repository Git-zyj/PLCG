/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 -= (((var_14 ? ((var_4 ? 0 : (arr_2 [i_0]))) : -0)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (((((((arr_5 [i_0] [i_0 - 1] [8] [i_2]) ? (arr_5 [19] [i_0 - 1] [i_0] [i_0]) : (arr_5 [i_0 - 1] [i_0 - 1] [22] [i_0])))) ? (min(var_10, (arr_5 [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_2]))) : ((((arr_5 [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_1 - 1]) ? 63082 : 0))))))));
                    var_19 = (max(var_19, (arr_1 [i_1])));
                }
            }
        }
        var_20 = (max(((0 ? ((63082 ? 11 : var_0)) : 65535)), var_0));
        var_21 = ((((((((min(-1, var_16)))) / (arr_4 [14] [i_0] [1])))) ? (arr_3 [i_0] [i_0 - 1] [i_0]) : ((-1107711049 ^ (arr_2 [i_0 - 1])))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_22 ^= (max((((arr_9 [i_3]) ? (arr_3 [i_3] [i_3] [i_3]) : (arr_5 [i_3] [i_3] [i_3] [i_3]))), ((((1394908916 ? 1886 : (arr_0 [i_3] [i_3])))))));
        var_23 = ((((min((arr_2 [i_3]), (arr_2 [i_3])))) / (((arr_2 [i_3]) / (arr_2 [i_3])))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {

                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            var_24 = ((((var_16 > (arr_16 [i_7 - 2] [i_7 - 2] [i_4] [i_6] [i_7 + 2]))) ? ((((arr_16 [i_7 - 2] [i_7] [i_4] [i_6] [i_7]) && (arr_16 [i_7 - 2] [i_7 + 4] [i_4] [i_7 - 2] [i_7 + 1])))) : ((-(arr_16 [i_7 - 2] [i_4] [i_4] [3] [i_7])))));
                            var_25 = (((((arr_1 [i_7 + 1]) << ((((max(250, var_1))) - 30171)))) >> (((((arr_22 [i_3] [i_3] [i_7 + 1] [i_4] [i_6]) ? (arr_22 [i_6] [9] [i_7 - 1] [i_6] [i_5]) : (arr_22 [i_3] [i_3] [i_7 + 1] [i_6] [i_4]))) - 2982555653359658107))));
                            var_26 -= 255;
                            var_27 *= (min((!181), (~-6304770345039537668)));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_28 = (min(var_28, (((168 ? (arr_5 [11] [i_5] [i_6] [i_8]) : (arr_5 [i_3] [i_3] [2] [i_8]))))));
                            var_29 = (63061 >> 16);
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_30 = (((var_2 ? 0 : -712117836)));
                            var_31 &= (0 + -17);
                            var_32 = (arr_25 [i_4] [i_9]);
                        }
                        var_33 = ((var_0 ? 0 : (((arr_24 [i_4] [i_3] [i_4] [i_5] [i_6]) / (arr_24 [i_4] [i_4] [i_5] [i_6] [i_3])))));
                        var_34 = arr_23 [8] [i_3] [i_4] [i_6] [16] [i_4];
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        var_35 = ((+(((arr_29 [i_10]) / (arr_22 [i_10] [14] [i_10] [i_10] [i_10])))));
        var_36 = (((((((((arr_25 [i_10] [i_10]) & 0))) ? (var_4 > 1926222466) : (var_4 >= var_15)))) - (((arr_0 [i_10] [i_10]) ? (arr_0 [i_10] [i_10]) : (arr_14 [i_10] [i_10] [i_10])))));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            {
                                var_37 = min(((((arr_26 [i_11 - 1] [i_10] [i_11] [i_10] [i_11]) || 4294967293))), (max((arr_13 [i_11] [i_11] [i_11]), (arr_33 [i_11] [i_11]))));
                                var_38 = (arr_29 [i_14]);
                            }
                        }
                    }
                    var_39 = (min(((max(28423, (arr_21 [i_11] [i_11 - 1] [i_10])))), (max((arr_2 [i_11 - 1]), -7148322721523220932))));
                }
            }
        }
    }
    for (int i_15 = 3; i_15 < 10;i_15 += 1)
    {
        var_40 = (max(234, ((~(arr_29 [i_15 + 3])))));
        var_41 = 65519;
        var_42 = ((((min((arr_8 [i_15] [i_15 - 3]), (((0 * (arr_21 [13] [i_15] [i_15]))))))) ? (arr_14 [i_15 + 1] [i_15 + 4] [i_15 + 1]) : ((((4294967295 ^ var_4) ? ((12833 ? 808400912 : var_1)) : (50468 >= 1))))));
    }
    var_43 = (max(var_43, ((max(var_6, (((var_12 || var_2) ? (0 <= 40607) : ((21 ? -37 : var_9)))))))));
    #pragma endscop
}
