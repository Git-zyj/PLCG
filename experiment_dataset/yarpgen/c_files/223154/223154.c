/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min((2 | 29), (var_14 ^ var_4))) >= 1039689872427151404));
    var_16 = (((var_2 + 2147483647) >> ((var_5 & (min(4294967288, var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_6 [2] [i_1 + 3] |= var_4;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [3] [i_1 - 1] [i_2 - 3] [i_2] = (arr_9 [i_0 + 1] [i_1] [i_2] [i_3 - 1]);

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                arr_15 [i_1] [4] [i_3] &= (881590808 ? 6511 : -5708493);
                                var_17 = (((arr_12 [i_1] [5] [i_3 - 1] [i_4] [1]) - 17407054201282400212));
                                var_18 = (min(var_18, (((((var_4 >> (17407054201282400221 - 17407054201282400208))) ^ (arr_4 [i_1 + 1] [3]))))));
                            }
                            for (int i_5 = 0; i_5 < 10;i_5 += 1)
                            {
                                var_19 = (min(var_19, (((~((18 >> (((var_12 == (arr_5 [4] [i_1] [1])))))))))));
                                var_20 = 75;
                                var_21 = (max(var_21, (9 % 1251588320)));
                                var_22 = var_10;
                            }
                            var_23 = (arr_17 [i_0] [i_1] [i_2] [6] [i_2] [i_2]);
                        }
                    }
                }
                arr_19 [i_1 - 1] = 1;

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_22 [i_6] [i_1] [i_6] = 1251588320;
                    var_24 *= 245;
                }
            }
        }
    }
    var_25 = var_8;
    #pragma endscop
}
