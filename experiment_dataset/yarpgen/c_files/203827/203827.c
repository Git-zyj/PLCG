/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_7));
    var_11 |= var_3;
    var_12 = (min(var_12, var_8));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 *= var_9;
                    arr_7 [9] [14] [i_2] = var_8;
                }
            }
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_10 [4] [16] = arr_9 [3] [7];
            arr_11 [1] = ((6 / (-123 / 122)));
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_15 [i_0] &= var_5;
            var_14 = (((arr_14 [i_4] [12] [i_4]) <= 122));
        }
        for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
        {
            arr_20 [11] [i_5] [1] = (min((arr_18 [5] [12]), (arr_17 [13] [16] [12])));
            arr_21 [i_5] [i_5] = (min(var_6, ((min(var_5, (arr_12 [i_5]))))));
        }
        for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                var_15 |= var_1;
                arr_26 [11] [13] [16] = var_1;
            }
            for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
            {
                var_16 = (min(var_16, var_3));
                arr_29 [5] [16] [3] [9] = (min((((arr_4 [3] [i_0 - 2]) / (arr_4 [16] [i_0 - 2]))), (arr_4 [3] [i_0 - 2])));
            }
            for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
            {
                var_17 *= ((((min(((var_7 + (arr_4 [8] [9]))), ((max(var_7, var_5)))))) / (((((arr_24 [10] [9] [7]) / (arr_30 [8] [15]))) + var_5))));
                var_18 = (((122 + 104) / 21));
                var_19 &= (max(var_2, (arr_30 [1] [6])));
            }
            arr_33 [12] [12] = (arr_3 [i_0 + 2] [i_6 + 2] [i_6 - 1]);
        }
        var_20 += var_9;
        var_21 |= var_7;
    }
    #pragma endscop
}
