/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) ^ -5710));
        arr_2 [i_0] [13] = ((0 ? 1 : ((1 ? 1943960068 : 1319819432))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_1] [3] [i_1] = (arr_1 [10]);
            arr_6 [i_1] [5] = (arr_4 [16] [9] [i_1]);

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                arr_11 [i_1] [i_1] [i_1] [i_0] = -1;
                var_14 = ((arr_9 [i_0] [i_1] [i_1] [0]) > (0 - -113));
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_17 [9] [i_3] [10] = (max((((61 ? (arr_10 [i_3] [i_3] [i_0] [i_3]) : 2975147883))), 1));
                    var_15 = (min(var_15, (arr_13 [i_4] [i_4] [i_4])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        var_16 = (max(var_16, ((((30974 ? var_4 : -122))))));
        var_17 = (min(var_17, (arr_19 [i_5])));
        arr_20 [i_5] [1] = (16 ? 2812228523 : ((((-24951 + 2147483647) << (((var_1 + 144) - 31))))));
        arr_21 [6] = var_9;
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_18 = (arr_25 [i_5] [i_5] [i_7] [i_6]);
                    arr_28 [1] [i_6] [13] [i_6] = ((0 <= (arr_25 [i_5] [i_5] [i_6 + 1] [i_6])));
                }
            }
        }
    }
    var_19 = ((((max(var_10, ((6041 ? var_4 : var_11))))) ? ((((max(241850553745646596, 2443535840))) ? ((138 ? var_7 : 288230341791973376)) : 65535)) : var_8));
    var_20 = 1161227244585846186;
    #pragma endscop
}
