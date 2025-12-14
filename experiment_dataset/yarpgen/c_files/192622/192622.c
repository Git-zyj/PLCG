/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 = (((((var_7 + (var_11 * var_14)))) <= (((((max(var_5, var_10)))) | (arr_0 [i_0] [i_0 + 1])))));
        var_16 = (((7857373122739240135 < (7857373122739240135 != 10589370950970311480))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_17 = ((var_10 << ((((-9 ^ (~2992378653))) - 2992378636))));
        arr_6 [i_1] = var_2;
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3 - 2] [i_4] [i_3] = (arr_7 [i_4] [i_3 - 1]);
                    var_18 = (min(var_18, ((max((((!((((arr_13 [i_2] [i_2] [i_4]) & var_11)))))), var_6)))));

                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_19 = (max((max((min(var_3, 10589370950970311462)), ((((arr_20 [i_6] [i_6] [i_3] [i_5 - 1] [i_3] [i_3] [i_2]) >= var_6))))), ((((((var_8 != (arr_22 [i_3] [i_5] [i_4] [i_3] [i_3] [i_2] [i_3])))) < (((((arr_7 [i_2] [i_2]) + 2147483647)) << (var_5 - 19023))))))));
                            var_20 = (((((max(var_9, var_8)) >= (255 * 245))) && (((max(var_1, (arr_11 [i_3])))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            var_21 ^= arr_13 [i_2] [i_2] [i_5];
                            var_22 &= var_4;
                            arr_25 [i_3] [i_5] [i_5] [i_4] [i_3] [i_3] = ((var_1 < (arr_18 [i_3] [i_3])));
                            arr_26 [i_2] [i_2] [i_7] [i_5] [i_7] [i_2] &= (var_12 <= var_12);
                        }

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_23 = var_10;
                            var_24 = (((arr_28 [i_3] [i_3] [8] [i_5 + 1] [i_8]) % (arr_16 [i_3] [i_3] [i_4])));
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            arr_33 [i_3] [i_5 - 2] [i_4] [i_3 + 2] [i_3] = (arr_24 [i_2] [i_3] [i_5] [i_3]);
                            var_25 &= ((((min((var_2 < var_2), var_9))) || ((min(var_11, (min((arr_11 [i_2]), (arr_32 [i_3] [i_3] [i_3] [i_3 + 3] [i_9] [i_3] [i_5]))))))));
                            var_26 &= (min(((min(-306947807, 35558))), (arr_11 [i_2])));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_27 = var_1;
                            var_28 = -14;
                            var_29 = ((var_11 - (arr_22 [i_3] [i_3] [i_5 - 2] [i_5] [i_3 + 3] [i_5 - 2] [i_3])));
                            arr_36 [i_2] [i_3] [i_3] [i_5] [i_3] = (arr_20 [i_2] [i_2] [i_3] [i_2] [i_2] [i_10] [i_10]);
                        }
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            var_30 += ((((-(arr_28 [i_2] [i_2] [i_4] [18] [14]))) >= ((max(var_1, var_0)))));
                            var_31 = ((((var_8 | var_14) * ((min(var_10, (arr_34 [i_2] [i_4] [i_5] [i_11])))))));
                            arr_39 [i_11] [i_5] [i_3] [i_4] [i_3] [i_3] [i_2] = ((min((max(var_13, var_3), ((min((arr_16 [i_3] [i_3] [i_11]), (arr_34 [i_11] [i_4] [i_3] [i_2]))))))));
                        }
                    }
                }
            }
        }
        arr_40 [i_2] [i_2] = var_1;
        var_32 += var_8;
    }
    var_33 = var_7;
    #pragma endscop
}
