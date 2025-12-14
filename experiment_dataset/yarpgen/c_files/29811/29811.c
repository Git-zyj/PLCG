/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((28066 % 65510), (((65514 * var_2) ? ((var_4 ? 37264 : var_9)) : ((var_7 ? var_0 : var_3))))));
    var_11 = (((~var_6) ? var_6 : (0 & 65529)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_12 = (((((var_2 ? (arr_1 [i_0]) : ((25 ? 7782 : var_3))))) ? ((65496 ? (arr_2 [i_0 + 1]) : var_3)) : (arr_3 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [i_0 + 1] [0] [i_0] = ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))) ? ((((((arr_1 [i_0]) ? 50593 : 51419))) ? ((378 ? 40263 : 34550)) : (((var_7 > (arr_7 [i_1] [i_0])))))) : 44719));
                            var_13 += arr_2 [i_3];
                            arr_10 [i_3] [i_0] = (((arr_8 [i_0]) ? (arr_8 [i_0 + 2]) : 25273));
                            var_14 += (max((((!(arr_5 [i_1] [4] [i_3])))), (((0 && 65528) ? 26 : 50819))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_4] [10] [i_4] = ((~(((((arr_6 [i_0]) && 0)) ? (40263 * var_2) : ((var_3 >> (var_6 - 59527)))))));
                            arr_16 [i_0] [i_4 + 1] [i_1] [i_0] = (5 & 14659);
                            var_15 = ((+(((arr_13 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_4 + 1]) ? var_7 : (arr_13 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_4 + 1])))));
                        }
                    }
                }
                arr_17 [i_0] [i_0] = ((((((arr_2 [i_0 - 1]) ^ (32997 < 21843)))) ? var_1 : ((((var_4 > var_6) >= ((var_8 ? var_2 : (arr_1 [i_0]))))))));
                var_16 = (max(var_16, (((var_7 ? (((arr_2 [i_0 - 1]) ? var_6 : var_9)) : (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1]))))))));
            }
        }
    }
    var_17 = 16350;

    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_21 [i_6] = 0;
        arr_22 [i_6] = ((-((0 / (arr_6 [i_6])))));

        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_18 = (((((36982 ? 0 : 65535))) ? (((arr_7 [i_6] [i_7]) << (((arr_26 [i_6] [i_6] [i_7]) - 19170)))) : ((max((arr_7 [i_7] [i_7]), var_7)))));
            var_19 = (min(var_19, ((((((((var_2 ? 65535 : 22))) ? (arr_13 [i_6] [i_6] [i_6] [i_7] [i_7]) : 658)) < (((arr_23 [i_6] [i_7] [i_6]) ? ((32997 ? 62794 : 16)) : ((64871 ? 32997 : var_0)))))))));
        }
        arr_27 [i_6] = arr_18 [i_6] [7];
    }
    #pragma endscop
}
