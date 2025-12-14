/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 13388296716144860983;
        var_12 -= 2910;
        arr_3 [i_0] = 2910;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_13 = ((!(arr_4 [i_1])));
                        var_14 = (((((2910 ? 7311 : (arr_11 [i_1 - 1] [i_2 + 1] [i_2] [i_4])))) == 4));
                        var_15 = 26;
                    }
                }
            }
        }
        arr_16 [i_1] &= ((min((arr_7 [i_1]), 4021436497)));

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_16 = ((((((arr_7 [i_1 - 1]) ? 26 : (arr_8 [i_1] [i_1] [i_1])))) ? (((~((-2906 ? (arr_5 [i_1]) : -2911))))) : (max(48381, 13))));
            var_17 = (max(var_17, -2911));
            var_18 = (~34480);
            var_19 = 118;
        }
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            arr_21 [i_1] [1] &= -65510;
            var_20 = 18446744073709551612;
        }
    }

    /* vectorizable */
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        arr_24 [i_7] = ((2894 ? ((122 ? 17257 : (arr_23 [i_7]))) : 273530786));
        arr_25 [i_7] = 18446744073709551611;

        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_21 = ((17231 ? 1219769980 : -2655));
            arr_30 [i_8] [7] = (((arr_19 [i_7 + 1] [i_7 - 2]) != (arr_19 [i_7 - 1] [i_7 + 1])));
        }
        var_22 ^= 1;
    }
    for (int i_9 = 4; i_9 < 23;i_9 += 1)
    {
        var_23 = (max(var_23, 4294967295));
        var_24 = (max(var_24, (max((((1 ? (arr_34 [i_9 - 1] [10]) : (arr_34 [i_9 - 4] [18])))), ((1219769970 ? 2665 : 4))))));
        var_25 = (((1 ? 0 : 34500)));
    }
    #pragma endscop
}
