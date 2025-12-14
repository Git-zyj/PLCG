/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_15 = (arr_3 [i_0]);
        arr_4 [i_0] = ((max((min(29, 240)), (max((arr_0 [i_0]), 0)))));
    }

    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_16 = (max(var_16, (((!(((4153544087 ? (((min(3, -1)))) : (((arr_7 [i_1] [i_1]) - 16))))))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        var_17 *= (~-233);
                        var_18 -= (((max(81366227, 141423209))) ? (((!(arr_9 [10] [i_3 - 1] [i_4 - 1])))) : (((((arr_2 [i_1 + 3] [i_3 - 1]) + 2147483647)) >> (((arr_2 [i_1 + 3] [i_3 - 1]) + 6772)))));
                        arr_18 [i_1 - 1] [i_2] [0] [i_1 - 1] = ((((min(((var_10 ? 4153544087 : 141423218)), (!-742491443)))) + ((((var_6 ? var_2 : 4118203355870139972)) - var_0))));
                        var_19 = -0;
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, ((((arr_13 [i_1 - 1] [8] [i_1 + 3] [i_1]) ? 1 : (arr_13 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 1]))))));
                        arr_21 [i_2] [i_2] [i_2] [i_2] = (~1);
                    }
                    var_21 *= (max(((((((-(arr_15 [i_1] [i_1])))) || (17433020821523242649 | 16)))), (max(var_8, (arr_11 [12] [i_1 + 1])))));
                }
            }
        }
        var_22 = ((((((16 % 7674381571747643653) ? (!-28137) : (~var_12)))) < (max((520093696 * -1), (min(var_13, 123))))));
    }
    #pragma endscop
}
