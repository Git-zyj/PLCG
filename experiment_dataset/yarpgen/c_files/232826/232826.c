/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(65534, var_14));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = var_17;
        arr_2 [8] |= 18446744073709551615;
        var_22 = (((arr_0 [i_0] [i_0]) ^ (18446744073709551615 / var_4)));
        arr_3 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            var_23 = ((-3930 ? -3930 : -32128));
            var_24 += arr_6 [i_1];
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_25 += 2888776399;

            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                arr_12 [i_0] [i_0] [4] = (~78);
                var_26 = (max(var_26, 1406190896));
                arr_13 [i_0] [i_2] [5] [i_3] = (-(arr_1 [i_0] [i_0]));

                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    var_27 = (~(~-26204));
                    arr_16 [i_0] = (((18446744073709551590 ^ (arr_4 [i_0] [1] [i_0]))));
                    arr_17 [9] [i_0] [i_0] [i_2] [9] [i_4 + 2] = (arr_1 [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
