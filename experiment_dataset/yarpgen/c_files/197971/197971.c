/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 46;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 *= ((2341415793788360089 | (((-(var_8 > 2341415793788360089))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_12 = 11639009960076864686;

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_13 = (((((-1432353938 ? 5208009058681087885 : var_4))) && (arr_9 [i_0] [i_1] [i_2] [i_2 - 2])));
                            var_14 = (arr_9 [i_1] [i_2 + 2] [i_2 - 2] [i_2 - 1]);
                            var_15 = (((arr_13 [1] [i_1] [i_2 + 2]) ? (arr_8 [i_1] [4] [i_2 + 1] [i_2 - 1]) : (((arr_2 [i_3]) ? (arr_0 [i_4] [i_4]) : 2341415793788360089))));
                            var_16 &= (((((12004 ? 4092 : 13234))) ^ ((-1457524377 ? (arr_8 [i_0] [i_1] [i_1] [i_1]) : (arr_6 [i_0] [3] [i_4])))));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_17 = (((5208009058681087877 ^ 1) ? (((arr_3 [i_5]) ? 29 : var_5)) : -var_7));
                            var_18 = ((((14187538474321383266 + (arr_12 [7] [i_1] [11] [i_1] [11]))) == (arr_6 [i_2 + 1] [i_2 + 3] [i_2 + 3])));
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_19 = (arr_1 [i_2 + 3] [i_2 - 1]);
                            var_20 = (arr_12 [i_0] [15] [3] [i_1] [i_6]);
                            var_21 *= (arr_1 [12] [i_0]);
                        }
                        for (int i_7 = 3; i_7 < 23;i_7 += 1)
                        {
                            var_22 = var_1;
                            var_23 = ((18446744073709551614 ? (-118275204659110608 + 17774332631275771795) : (((-(arr_17 [i_0] [i_1]))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_24 = -var_6;
                        var_25 = (min(var_25, 5208009058681087886));
                    }
                    var_26 = var_7;
                    var_27 = var_8;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                var_28 = -16256;
                                var_29 *= ((((((((-9223372036854775807 - 1) ? var_6 : var_6)) != ((((arr_2 [i_10]) << (((arr_21 [i_0] [i_2] [i_2 - 1] [i_9]) - 2704478834826881255)))))))) % 499247759));
                                var_30 = (255 & -1457524377);
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = (max(var_31, 18446744073709551606));
    var_32 ^= (!19793);
    var_33 = (min(((-6212891185912751261 ? var_3 : var_6)), ((((((var_5 ? var_3 : (-9223372036854775807 - 1)))) || (var_9 || var_1))))));
    #pragma endscop
}
