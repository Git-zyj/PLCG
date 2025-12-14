/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_14 = var_5;
                            var_15 = ((~(arr_1 [i_0] [i_0])));
                        }
                    }
                }
                var_16 = ((1542715517 >= 1) ? (var_6 * 0) : (((arr_8 [i_0]) >> 16)));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_17 = ((1 ? 1 : (arr_11 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 + 3] [i_2])));
                    var_18 = ((1 ? (arr_13 [i_2 - 1] [i_2] [i_2] [i_0]) : (arr_13 [i_2 - 1] [i_1] [i_1] [i_1])));
                }
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    var_19 = ((2233948276 ? (arr_12 [i_6] [i_6] [i_0] [i_6 + 2]) : -2107060957));
                    arr_16 [i_0] [i_0] [i_0] [i_0] = (-75 && ((((arr_6 [i_0] [7] [0] [i_6] [i_1 + 2] [i_6]) ? 1 : -1542715525))));
                    var_20 -= (((((-(arr_0 [i_0])))) ? 1 : var_11));
                }
            }
            arr_17 [i_0] [i_0] = max((!1), (arr_3 [i_0] [i_1 + 3]));
        }
        arr_18 [i_0] = ((~((-28024 ? 1 : 64))));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        var_21 = arr_6 [i_7] [7] [i_7] [i_7] [i_7] [i_7];
        var_22 = ((65535 ? var_3 : ((0 % (37070 & -1)))));
    }
    var_23 = 1;
    var_24 += ((((-var_2 ? 1 : 1)) - 0));
    var_25 -= (-(-3 == 4294967295));
    #pragma endscop
}
