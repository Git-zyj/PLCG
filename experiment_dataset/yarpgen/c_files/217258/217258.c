/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 249;
        var_13 = (max(var_13, (arr_1 [i_0])));

        for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_0] [i_1] &= (((arr_6 [i_1 + 4] [i_2 - 2] [i_0] [i_0]) + (arr_6 [i_1 - 2] [i_2 + 1] [i_2] [3])));
                var_14 ^= 224;
            }
            arr_9 [i_1] [i_1] [i_0] |= 2322906069915633307;
            var_15 -= (arr_5 [i_1]);
        }
        for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] = (((arr_0 [i_3 + 2] [i_3 + 2]) ? (arr_11 [i_3 + 3] [i_3 - 2]) : (arr_7 [i_0] [i_3 + 2])));
            arr_13 [i_0] [i_0] [i_0] |= (arr_11 [i_0] [i_0]);
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_16 = (i_4 % 2 == zero) ? ((((arr_7 [i_4] [i_4]) >> (((arr_7 [i_4] [i_4]) - 61))))) : ((((arr_7 [i_4] [i_4]) >> (((((arr_7 [i_4] [i_4]) - 61)) - 72)))));
            arr_16 [i_0] [i_4] = var_11;
        }
    }
    var_17 = (((((var_3 / ((var_1 ? var_2 : var_8))))) ? (2147483647 + var_12) : var_6));
    var_18 ^= ((var_5 >> (((((max(2147483647, var_4)) ^ var_9)) - 2147483625))));
    #pragma endscop
}
