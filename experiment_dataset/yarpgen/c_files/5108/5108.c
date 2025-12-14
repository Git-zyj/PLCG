/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = (((((max(13124170839994635105, var_7)) ? var_6 : 255))));
    var_12 = (min(((((var_2 ? 48 : var_8)) ^ var_3)), (((var_6 || (var_0 && var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((32768 && ((((arr_1 [i_0]) ? (arr_1 [i_0]) : 9)))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_13 |= (arr_2 [i_0] [i_1 + 1]);
                        arr_10 [i_0] [i_0] [i_2] [i_0] = (arr_8 [i_0] [i_1] [10] [i_2] [i_3] [1]);
                        var_14 = (max((arr_5 [i_0] [i_2] [i_0]), 0));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((((max((arr_5 [i_0] [i_2] [i_0]), 1))) | var_2));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] = 65533;
                        var_15 = (((min(15181468958989498214, -1315996264)) / 1315996277));

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_16 = (!255);
                            arr_20 [i_1 + 1] [i_0] = (max(var_8, (((var_5 ? (var_3 > var_1) : ((var_1 >> (((arr_2 [i_0 + 1] [i_2]) - 5076332902633421191)))))))));
                            var_17 *= ((((max(0, 1348509289))) ? (arr_14 [i_0 + 1] [i_1] [i_2] [i_5]) : ((min(0, (arr_19 [i_0 - 1] [i_1 - 1]))))));
                            arr_21 [i_0] [1] [i_0] [i_1] [i_0] [i_5] = (max(((((1896728954 | 0) > 65525))), (2398238341 % 1)));
                            var_18 = ((max((arr_19 [i_1 + 3] [i_1]), (arr_9 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_1 + 2]))));
                        }
                        arr_22 [i_0] [i_1] [i_0] [i_0] [i_4] [i_4] = ((!((((((arr_8 [i_4] [i_2] [10] [12] [i_1] [1]) & (arr_5 [7] [7] [i_0])))) || (var_6 - 3939692958)))));
                        arr_23 [i_1 + 2] [i_2] [i_0] = (min((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_1 - 1]), var_7));
                    }
                    arr_24 [i_0] [i_2] = (max(12, 1));
                    arr_25 [i_1] [i_1] [i_0] = (max(18446744073709551605, ((max(var_6, (arr_19 [i_2] [i_0 + 3]))))));
                }
            }
        }
    }
    #pragma endscop
}
