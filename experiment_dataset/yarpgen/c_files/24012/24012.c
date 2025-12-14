/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (min((6405784295568463404 / 2086982310), ((((((var_1 ? -127 : var_5))) ? var_6 : var_0)))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_18 = ((((((!248) || (((~(arr_1 [5]))))))) & (arr_1 [i_0 - 2])));
        var_19 = -78;

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = (max((arr_2 [i_2 - 1]), (arr_7 [i_0] [i_1] [i_3])));
                        var_21 = ((!(((((((arr_6 [i_0] [i_1] [i_2 - 2] [i_3]) ? var_11 : 2014))) ? (arr_4 [i_0 - 1]) : (((0 >> (-1 + 6)))))))));
                    }
                }
            }
            var_22 |= ((((max((arr_8 [i_0 + 1] [14] [i_0] [i_0]), (arr_1 [i_0 - 2])))) >= ((((max((arr_7 [i_0 - 2] [i_0] [i_0]), (arr_1 [i_0]))) >= (((arr_6 [i_1] [i_1 + 2] [i_0] [i_0 + 1]) ? (arr_2 [i_1]) : (arr_1 [i_0 - 1]))))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            var_23 = ((-71 || (arr_11 [i_0] [i_0 - 1] [i_0])));

            for (int i_5 = 4; i_5 < 15;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    arr_16 [15] [i_4] [i_5] [i_6] [11] [i_6] = 76;
                    arr_17 [i_0] [i_5 + 1] = (arr_5 [i_4] [i_5] [i_6]);
                    arr_18 [i_0] [i_6] = (arr_9 [1] [10] [i_0 - 1] [11] [i_0] [i_0 - 1]);
                    arr_19 [i_0] [i_4] [i_5] [i_6] = ((2014 << (arr_14 [i_0] [i_0] [i_0] [i_6] [i_0])));
                    arr_20 [i_0] [i_4] [i_5 - 3] [9] = (arr_1 [i_0 - 1]);
                }
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    var_24 -= (2207984986 > 1);
                    arr_24 [i_0] [i_0] [10] [i_5] [i_5] [i_7 - 2] |= var_4;
                    var_25 = ((-var_13 - ((var_2 ? 2086982337 : var_2))));
                }
                arr_25 [i_0 + 1] [i_4] = ((980841083 ? (arr_22 [i_5 - 3] [i_4] [i_5] [i_5 - 4] [i_0 + 1] [14]) : 1));
                var_26 = (((arr_0 [i_0 - 2]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1])));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_27 ^= ((5058910 ? (arr_8 [i_0] [i_9] [i_0 + 1] [i_4]) : (arr_30 [i_0] [i_0] [i_0 + 1] [i_5] [i_8] [8])));
                            var_28 = 2086982327;
                            var_29 = ((arr_30 [i_0] [i_4] [i_5] [i_8] [i_9] [i_4]) || (arr_32 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0]));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
        {
            var_30 = (min(var_30, ((max((arr_6 [i_0] [i_10] [i_0] [i_10]), ((((min(1073741823, 4035534842266387741))) ? (arr_35 [i_0 - 2]) : (max((arr_29 [i_10]), (arr_15 [i_0 + 1] [i_10]))))))))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 13;i_12 += 1)
                {
                    {
                        var_31 = (arr_37 [i_0] [i_11] [i_12 - 1]);
                        var_32 = var_8;
                    }
                }
            }
        }
    }
    #pragma endscop
}
