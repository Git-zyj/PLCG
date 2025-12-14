/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 *= (((arr_0 [i_0]) || ((((arr_1 [i_0] [i_0]) ? 127 : (arr_1 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] = (((((-1278886984 ? (arr_2 [i_0] [7] [i_0]) : (arr_2 [i_1] [i_0] [i_0])))) || ((((arr_2 [i_1] [i_0] [3]) % (arr_2 [i_0] [i_0] [i_1]))))));

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_8 [i_0] [i_1] [i_1] [i_2] = (7 - 9223372036854775789);

                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_19 |= ((var_3 >= (arr_0 [i_3])));
                    var_20 = (min(var_20, ((((arr_3 [i_0] [17]) ? (((var_9 + 2147483647) << (var_6 - 62150))) : var_5)))));
                    var_21 ^= ((((arr_0 [8]) ? (arr_10 [i_0] [i_1] [i_2] [i_3]) : (arr_6 [i_3] [i_1] [i_2] [i_3]))) + 65409);
                    var_22 = (arr_7 [6] [i_1]);
                }
            }
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                var_23 = (max((((((20 ? 1880831500604454810 : 9)) <= (~18013298997854208)))), ((((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << (((arr_10 [i_0] [i_1] [i_1] [i_0]) - 1902319007764925233)))))));
                arr_14 [i_0] = (3176509159 < 9223372036854775789);
                arr_15 [i_0] [i_0] [i_4] &= (arr_6 [i_4] [i_4] [i_0] [i_0]);
            }
            arr_16 [i_0] [18] = ((((arr_2 [i_0] [i_0] [i_1]) - (arr_7 [i_0] [i_0]))));
        }
    }
    #pragma endscop
}
