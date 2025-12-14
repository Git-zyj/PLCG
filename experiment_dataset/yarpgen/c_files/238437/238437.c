/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= 255;
        var_11 = ((!(arr_1 [i_0])));
        var_12 ^= ((((!(arr_0 [i_0] [i_0]))) ? (!var_0) : (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
        {
            var_13 = (arr_0 [i_0 - 2] [7]);
            var_14 = (arr_6 [i_0 - 3]);
            var_15 = (-(arr_3 [i_1]));
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
        {
            var_16 = ((var_3 ? (arr_1 [i_0]) : (arr_6 [i_0])));

            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                arr_12 [i_0] [7] [i_3] = (arr_5 [i_0 - 1] [i_2 + 1] [i_2 + 1]);
                var_17 = (min(var_17, (arr_1 [i_0 - 3])));
                arr_13 [i_3] = (((-(arr_8 [1] [i_2 + 1] [i_2 + 1]))));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_18 = (arr_10 [i_0 + 1] [i_4] [i_2 + 1] [i_2 + 1]);
                var_19 ^= (arr_7 [i_0] [i_4]);
            }
        }
    }
    var_20 &= var_2;
    #pragma endscop
}
