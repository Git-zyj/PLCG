/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_15 >> (((max(((var_14 ? 5877685975200685491 : 81)), var_13)) - 5877685975200685430))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_18 = (arr_4 [i_0 + 3]);
                        arr_10 [i_3] [i_3] [i_2] [i_3] = (3689609981 * 252);
                    }

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_19 *= (min((((arr_13 [9] [i_0 + 2] [i_4] [i_4]) | (arr_13 [8] [i_0 + 3] [8] [8]))), ((1 ? -1752510552 : 1084556167))));
                        var_20 -= ((var_14 && ((!(arr_7 [i_2] [1] [i_2] [i_2])))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_21 = (((((!((min(48, (arr_9 [i_1] [i_1]))))))) * (((!((min((arr_7 [i_0] [i_0] [i_2] [i_0]), 19009))))))));
                        var_22 |= ((arr_14 [i_0 + 2] [i_0 + 2] [i_0 + 2]) <= ((((arr_5 [i_0] [i_1] [i_2] [i_5]) || (arr_3 [i_0] [i_5])))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_23 = (arr_12 [i_0] [i_1] [i_2] [i_6] [i_0] [2]);
                            var_24 = (~3346117766);
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_0 + 3] [i_0 + 3] [i_1] [i_1] [i_2] [i_6] [i_1] = 67108864;
                            var_25 = ((!(arr_7 [i_0] [i_2] [i_0] [i_0])));
                        }
                        var_26 = 16846006816991551489;
                    }
                    var_27 |= (arr_2 [i_0]);
                    var_28 = (min(((((!var_4) < (arr_11 [i_1] [i_0 + 2])))), var_15));
                }
            }
        }
        var_29 |= (arr_7 [i_0] [i_0] [i_0 + 3] [i_0]);
        var_30 ^= (min((((((min(var_8, 1355910404))) > (min((arr_9 [i_0] [i_0]), var_11))))), (((17908145104775028210 >= var_6) ? (var_11 * var_9) : (min((arr_3 [i_0 - 1] [i_0 - 1]), (arr_2 [i_0])))))));
    }
    #pragma endscop
}
