/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = 0;
        var_19 ^= 11511821343818909229;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [18] [i_0] = 65532;
                        arr_14 [15] [15] [i_0] [i_3] = ((-(~112)));
                        arr_15 [i_0] [i_1] [i_0] [i_3] = ((8870756122661961761 ? 61664 : 18446744073709551613));
                    }

                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_20 ^= (((14286872723897475656 | 1) ? -11043 : (var_13 / 2147483647)));
                        arr_18 [i_0] [i_1] [i_1] [i_1] = ((!(-102480905 > 18446744073709551607)));
                        arr_19 [i_0] [i_1] [i_0] [i_4] [i_4] = (var_7 - (((490176982 ? 4035713620 : 13864))));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_5] = -121;
                        var_21 ^= (4503599560261632 ? 1 : 124);
                    }
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] = -2136090481;
                        var_22 = (((((arr_3 [i_0]) <= (arr_20 [i_0] [i_2] [i_2] [i_6] [i_1] [i_0]))) ? 18446744073709551607 : 4834));
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_30 [i_0] [i_1] = ((-1480347250 ? 11 : -4503599560261607));
                        var_23 = ((-(arr_28 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])));
                        arr_31 [i_0] [i_1] [i_2] [i_7] = (arr_26 [i_2]);
                        arr_32 [i_0] = (((arr_12 [i_0] [i_0] [i_2] [i_0]) & ((var_7 ? 10 : var_1))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 21;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_24 = ((((max(var_5, var_15))) ? ((11761427422442018884 ? 51675 : 17424898652083155222)) : (((((arr_28 [i_8] [i_9 + 2] [i_10 + 1] [i_10 + 1] [i_11 - 1] [i_12]) == (arr_25 [i_9] [i_10])))))));
                                arr_46 [i_9] [i_9] [i_9] [18] [0] |= 40002;
                            }
                        }
                    }
                    var_25 = var_2;
                }
            }
        }
        arr_47 [i_8] = ((13219993358011844811 ? 3633043794981279654 : -4503599560261617));
    }
    for (int i_13 = 2; i_13 < 22;i_13 += 1) /* same iter space */
    {
        arr_51 [i_13] = var_6;
        arr_52 [i_13] = 1;
    }
    for (int i_14 = 2; i_14 < 22;i_14 += 1) /* same iter space */
    {
        var_26 = var_0;
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 21;i_16 += 1)
            {
                {
                    arr_61 [i_15] = ((max((max(10480934343198923634, 1815893231635410829)), ((max(17151, 247))))));
                    arr_62 [i_14] [i_15] [i_16] [i_14] = (min(113, 108));
                    arr_63 [i_16] [i_16] [i_16] [i_16] = (((min(var_8, (-1073741824 / -17151)))) ? ((var_16 ? ((((arr_55 [i_14]) / var_17))) : (max(var_15, -114)))) : ((((arr_58 [i_15] [i_16 + 1]) / (arr_58 [i_14] [22])))));
                }
            }
        }
    }
    var_27 = 13;
    #pragma endscop
}
