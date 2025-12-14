/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (min((((((-9223372036854775807 - 1) + (arr_0 [i_0] [i_0]))) + (arr_0 [i_0] [i_0]))), var_9));
        var_20 = (min(var_20, (((15 || (((arr_1 [i_0]) != -6184501812937401341)))))));
        var_21 ^= var_12;
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] [i_1] &= (max((((44206 >= (((((arr_4 [i_1]) + 2147483647)) << (((((arr_4 [i_1]) + 20542)) - 19))))))), (min((arr_3 [i_1 + 2] [i_1]), (arr_3 [i_1 - 1] [i_1])))));

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            arr_9 [i_2] [i_2] [i_2] = (min(((((2589988646 ? 1704978664 : -4211727234793307939)))), (max((arr_7 [i_1 + 1]), (arr_7 [i_1 + 1])))));
            arr_10 [i_1] [i_2] [i_1] = var_18;
        }
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            var_22 = 4075531289;
            arr_14 [i_3] [i_3] = (arr_8 [i_3] [i_3]);
            var_23 = (min(var_23, ((min(((((max((arr_7 [i_1]), var_15))) ? (var_5 & 4427675923537793023) : (((1 ? (arr_8 [i_1] [i_3]) : 8319856536051605979))))), ((max((arr_8 [i_1] [i_3]), (((arr_8 [i_1] [i_3]) ? 3 : (arr_3 [i_1] [i_3])))))))))));
            arr_15 [i_3] = var_4;
            var_24 = (min((max((min(var_7, 18446744073709551609)), var_3)), 0));
        }
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            var_25 ^= var_7;
            var_26 = (min(var_26, (arr_8 [i_1] [i_4])));
            arr_19 [i_4] [i_4] = ((-3 == (max(-var_16, (min((arr_11 [i_4] [i_1]), 4294967277))))));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_29 [i_1] [i_1] = (arr_11 [i_5] [i_6]);
                        var_27 = var_12;
                    }
                }
            }
            var_28 = (((!24) ^ (max((arr_25 [i_1 - 2] [i_1 + 1] [i_1 + 2]), 18446744073709551584))));
        }
    }
    #pragma endscop
}
