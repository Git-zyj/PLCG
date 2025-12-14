/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            arr_4 [i_1] = ((-5759802500049490095 ? 2097151 : 253));
            arr_5 [i_1] = 5759802500049490097;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_10 -= arr_2 [10] [i_2];
            arr_9 [i_0] [i_2] = (((((var_8 ? var_2 : var_1))) ? (!2147483647) : (arr_1 [i_2])));
            arr_10 [i_2] [19] [i_2] = (((((-2097152 ? (arr_8 [i_2] [15] [i_2]) : -1669077617861836283))) ? -1826062092 : ((-(arr_2 [i_2] [i_2])))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_11 = var_9;

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_12 = (((arr_6 [i_0]) != 57842));
                    var_13 = (min(var_13, (((-(arr_14 [i_0] [i_0]))))));
                    var_14 = (min(var_14, (((-9033562946404436891 + (arr_2 [2] [2]))))));
                }
                arr_18 [i_0] [i_3] [i_4] = 0;
                arr_19 [i_3] [i_3] [i_3] = 1;
                arr_20 [i_3] [i_3] = -5759802500049490095;
            }
            arr_21 [i_3] [i_3] = (arr_6 [11]);
        }
        var_15 = -16;
    }
    var_16 = var_7;
    #pragma endscop
}
