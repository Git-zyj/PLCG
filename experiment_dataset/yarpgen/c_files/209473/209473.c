/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = ((((((~67108864) ? ((max(1, (arr_1 [i_2] [i_0])))) : (((arr_1 [i_0] [18]) ^ 0))))) ^ ((((3875442269 ? (arr_3 [i_0] [i_1] [i_2]) : 54295)) & (arr_3 [i_1] [i_2 - 3] [i_2])))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_12 = (arr_3 [i_1 + 1] [i_3] [6]);
                        arr_8 [i_0] [i_1] [i_3] [i_2] = (((((!(arr_6 [i_2])))) * (arr_5 [i_1 - 1] [i_2] [i_2 - 2] [i_3])));
                    }
                }
            }
        }
    }

    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {
        arr_12 [i_4] = (((-(arr_9 [i_4]))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_13 = (((!(11249 && 0))));
            var_14 = ((+((+(((arr_14 [i_4]) | 6547))))));
            var_15 -= (arr_5 [i_4] [i_4] [i_4] [i_4 - 2]);
            var_16 = ((-(((min((arr_1 [i_5] [i_5]), (arr_6 [12])))))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_21 [i_6] [i_6] = (min(((((~116) ? (((arr_9 [i_6]) ^ -1463787225)) : 121))), ((120 ? (((-(arr_17 [i_6] [i_6] [i_4])))) : ((0 / (arr_16 [i_4] [10] [i_4])))))));

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_24 [i_6] [i_6] [i_7] [i_6] = (i_6 % 2 == 0) ? ((((arr_9 [i_6]) && ((((-1 > 15949886981465877491) >> (((arr_23 [i_6] [9] [i_6]) - 14098)))))))) : ((((arr_9 [i_6]) && ((((-1 > 15949886981465877491) >> (((((arr_23 [i_6] [9] [i_6]) - 14098)) + 8328))))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_17 = (arr_13 [i_6] [i_7] [10]);
                            arr_32 [i_6] [i_6] [i_7] [i_8] [i_8] [i_9] = min(((((1 < 2496857092243674143) && -1852707805))), 2147483647);
                        }
                    }
                }

                for (int i_10 = 2; i_10 < 10;i_10 += 1)
                {
                    var_18 = (arr_28 [i_4 - 1] [i_6] [i_4 - 1] [i_4 + 1] [i_4 + 1]);
                    var_19 = ((((arr_0 [i_4] [9]) | (arr_0 [i_4] [i_4]))));
                    var_20 += 56;
                }
            }
            for (int i_11 = 4; i_11 < 11;i_11 += 1)
            {
                arr_39 [i_6] = ((!(arr_28 [i_6] [i_6] [i_6] [i_11 - 3] [i_11 - 2])));
                var_21 = (--1);
                var_22 &= (!136);
            }
        }
        var_23 = (min(var_23, (--23735)));
        var_24 = (0 * 0);
    }
    #pragma endscop
}
