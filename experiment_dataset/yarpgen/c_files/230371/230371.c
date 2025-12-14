/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(-9223372036854775807 - 1)));
    var_21 = (max(var_5, (((~var_16) | var_5))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1]))) % ((max((-9223372036854775787 != var_17), var_14)))));
        arr_3 [i_0 + 1] [i_0 + 1] = (min((((((arr_1 [i_0] [i_0]) | 9223372036854775787)))), 0));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_22 = (~11468050768895766133);
            var_23 = (max(var_23, ((!(((arr_0 [i_0]) || 3570042609572349991))))));
            arr_7 [i_1] = 3867499027;
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            {
                var_24 ^= ((-(((5034322649929364231 ? (arr_5 [i_3 + 1] [i_2] [i_2]) : (arr_0 [i_3]))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 3; i_6 < 14;i_6 += 1)
                            {
                                arr_19 [i_3] [i_3] = (((arr_13 [i_4 - 1]) >= -321470351816249297));
                                arr_20 [i_2 - 1] [i_3] [i_2] [i_5] [i_3] [i_4 + 2] = ((8191 | (arr_0 [i_3 - 1])));
                            }
                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 15;i_7 += 1)
                            {
                                arr_25 [i_3] [i_4] [i_3] = -5034322649929364234;
                                var_25 ^= -3474497111098243654;
                                arr_26 [i_7] [i_3] [i_2] [i_3] [i_2] = ((!(arr_24 [i_3] [i_7 - 1] [i_3 - 1] [i_3 + 3] [15] [i_3] [i_3])));
                                var_26 ^= (9223372036854775787 > 6505);
                                arr_27 [i_3] [i_5 + 2] [i_4 - 1] [i_4] [i_3] [i_2] [i_3] = (arr_23 [i_3] [i_3]);
                            }
                            arr_28 [i_2] [5] [i_4] [i_4 + 2] [i_5 - 1] [i_3] = ((~(((arr_21 [i_5] [i_5 + 1] [i_5] [i_3] [i_5]) ? 4 : 321470351816249296))));
                            var_27 = ((((0 ^ 64) / (3570042609572349991 / var_14))) > (((((max((arr_10 [i_5]), (arr_12 [i_4]))))) / (arr_17 [i_2 + 1] [i_3] [i_4] [3] [i_3] [i_3 - 1]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
