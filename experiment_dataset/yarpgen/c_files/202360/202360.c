/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((-(!var_4)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((var_7 ? 1 : (arr_1 [i_0])))) ? ((1 ? var_3 : 1)) : ((985851059 >> (((arr_3 [i_0]) + 2088742134)))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_11 ^= (~var_8);
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_14 [i_2] [i_2] = (arr_12 [i_1] [5] [i_1] [i_0]);
                        arr_15 [i_3] [i_2] [i_2] [i_1] [i_0] = ((-(arr_11 [i_2] [i_2] [i_2 - 1])));
                        arr_16 [i_0] [i_2] [i_1] [i_1] [i_1] [i_3] = ((~((var_4 ? (arr_7 [i_1] [i_1] [11]) : (arr_6 [i_0] [i_0])))));
                        var_12 = (arr_6 [i_0] [4]);
                    }
                }
            }
            arr_17 [i_0] [i_0] = ((~var_3) ? var_7 : 1);
            var_13 = (((1816199187 ? var_1 : 1)));
        }
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            arr_20 [0] = (-(arr_10 [i_0] [i_4 - 1] [11] [8]));

            for (int i_5 = 3; i_5 < 15;i_5 += 1)
            {
                var_14 = ((((!(arr_0 [1] [1]))) ? ((1 ? 2305843009209499648 : 31663)) : ((1 ? 6346222114083660994 : (arr_3 [i_0])))));
                arr_25 [i_5] = arr_22 [i_5] [i_0];
                var_15 = (arr_11 [i_0] [i_4] [i_5]);
            }
            arr_26 [i_4] [i_0] [i_0] = (arr_0 [i_4 - 2] [i_4 + 2]);
        }
        var_16 = ((~((~(arr_9 [0] [0] [0] [0])))));
    }
    #pragma endscop
}
