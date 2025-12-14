/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = (~0);
        arr_2 [i_0] = (((-123 - 65505) * (((!(arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                arr_10 [i_3] = (((-100 ? (arr_8 [i_2]) : -5426697096399283467)));
                arr_11 [i_3] [i_1 + 4] [i_1 + 4] [i_3] = (((!18446744073709551615) * (14665 == var_1)));
            }
            arr_12 [0] = (~1698913526959744649);
            arr_13 [i_1] = (~13);

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_13 = (arr_4 [i_1]);
                arr_18 [i_1] [i_1] = (((var_1 ? -2412687454183998986 : var_7)));
            }
            var_14 = (max(var_14, 1));
        }
        arr_19 [i_1] = var_9;
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                {
                    arr_24 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6] = (arr_4 [i_1]);
                    var_15 = (min(var_15, (((~(arr_22 [i_6 + 1] [i_6] [i_5] [i_1]))))));
                    arr_25 [i_5 - 1] [i_5 - 1] = (--198);
                }
            }
        }
    }
    var_16 = (min(62493, (!var_10)));
    var_17 ^= ((-22665 ? ((4449037091918116202 ? 65489 : ((var_4 ? 0 : 1)))) : (((var_2 ? 230 : var_0)))));
    #pragma endscop
}
