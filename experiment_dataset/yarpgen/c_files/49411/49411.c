/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_11;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (min((min(var_4, var_15)), ((min((arr_0 [i_0]), -1308454730)))));
        arr_3 [i_0] = min(((min(3840, var_17))), (min((arr_1 [i_0 + 3] [i_0 + 1]), 5840772898166839002)));
        arr_4 [i_0] [i_0] = (max((min(((max(var_1, (arr_0 [i_0])))), var_12)), ((max(var_1, var_18)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            {
                arr_10 [i_1] [i_1] [i_1] = (min((max(var_2, var_3)), ((max(var_9, (max(173, var_0)))))));

                for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_1] [i_3] [4] = (max(((min((arr_7 [i_3 + 1] [i_1] [i_1]), -7098132977835251105))), (max(13446736194624781603, (arr_7 [i_1] [7] [i_1])))));
                    var_20 *= min(24, (max(-484728768, 255)));
                    var_21 = (max(var_21, ((max(((max((arr_8 [i_2 - 1] [i_3] [i_3 + 1]), -1))), (min((min((arr_6 [i_1] [i_2 + 2]), 13446736194624781588)), ((max(var_7, 369634502))))))))));
                    arr_14 [i_1] [i_1] [i_3] [i_1] = max(1800937895237787758, 27);
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_4] [i_2] [i_1] [i_1] = 995824830;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_22 = 2161727821137838080;
                                var_23 += -9140679751902457806;
                                var_24 += 29756;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
