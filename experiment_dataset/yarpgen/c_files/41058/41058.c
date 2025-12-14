/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min((max(-4983, 28233)), var_2);
    var_11 -= (((~-26474) | (var_1 / var_0)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_5 [6] [i_0] [7] = (arr_4 [i_0 - 1] [i_1 - 1]);

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_12 = (32765 ^ 0);
                var_13 -= (((arr_2 [i_0 - 1] [i_2] [8]) ? (arr_2 [i_0 - 1] [i_2] [i_0]) : var_5));
                var_14 = ((3584 ? (arr_0 [i_0]) : var_3));

                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_12 [i_2] [i_1 + 1] [i_0] [10] = (var_7 < var_7);
                    arr_13 [i_0] [i_0] [i_0] [i_0] [i_1 + 1] [8] = ((0 ? 24454 : 26474));
                    var_15 ^= var_5;
                    var_16 += var_5;

                    for (int i_4 = 4; i_4 < 23;i_4 += 1)
                    {
                        var_17 += var_3;
                        var_18 *= (((~-26470) == (arr_1 [i_0 - 1])));
                        var_19 = (((arr_15 [i_0] [i_1 + 2] [i_2]) & var_1));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_20 = (min(var_20, ((((((arr_8 [i_0] [i_0] [i_2] [i_1 + 1]) + 2147483647)) << (((var_5 + 9479) - 5)))))));
                        arr_19 [0] [0] [i_2] [i_0] [0] = (--13291);
                    }
                }
            }
            var_21 = (-30912 + -5);
        }
        arr_20 [i_0] = ((-(arr_4 [i_0] [i_0 + 1])));
        arr_21 [i_0] = (arr_3 [i_0] [i_0 - 1]);
    }
    var_22 = var_0;
    #pragma endscop
}
