/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_13 = (arr_1 [i_0] [i_0]);
        var_14 = (max((((var_3 && ((max(var_9, (-127 - 1))))))), var_2));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_15 = (max(var_15, ((((max((((arr_2 [i_1] [i_1]) ? (arr_0 [i_1] [10]) : -106)), var_4)) > ((min((((1 ? (arr_1 [i_1] [i_1]) : 32767))), ((3532179068 ? var_7 : (arr_1 [i_1] [i_1])))))))))));
        var_16 = (((arr_0 [i_1] [i_1]) ? (((((!(arr_1 [0] [0])))))) : 4199973501));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    {
                        var_17 = (min((((762788221 ? (arr_8 [i_4 - 1] [i_3] [i_2] [i_1]) : (arr_8 [i_2] [9] [i_4 + 2] [i_3])))), var_11));

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_18 ^= (((arr_6 [i_3] [i_2] [0]) != ((min((arr_1 [i_5] [i_3]), -1966387452)))));
                            var_19 ^= (((~1) ? (((((var_1 ? 30 : var_3))) ? (((arr_0 [i_1] [1]) | 8112193896554091306)) : ((var_11 ? var_9 : var_1)))) : ((((arr_4 [i_1] [i_2] [i_1]) ? var_8 : (((((arr_10 [i_1] [i_2] [i_3] [i_4] [i_5] [i_1]) + 2147483647)) << (((((arr_13 [i_2] [i_4] [1] [i_3] [i_2] [1] [i_2]) + 14362)) - 5)))))))));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_20 ^= ((!(arr_17 [i_6] [i_4] [i_3] [i_2] [i_1] [i_1])));
                            var_21 ^= ((((((arr_6 [i_1] [i_1] [i_1]) ? var_1 : -122))) | ((var_12 ? (arr_6 [i_4] [i_3] [i_2]) : (arr_6 [i_1] [i_3] [i_4 + 1])))));
                            var_22 = ((3431028848 ? ((+(max((arr_0 [i_1] [i_1]), (arr_12 [i_1] [i_1] [i_3] [i_4] [i_6]))))) : (((((arr_6 [11] [i_2] [i_4 + 1]) <= var_7))))));
                            var_23 = max(3431028871, ((-(arr_2 [i_1] [i_2]))));
                        }
                    }
                }
            }
        }
    }
    var_24 = var_10;
    #pragma endscop
}
