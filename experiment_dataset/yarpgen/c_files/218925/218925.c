/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_3 / (~8158989345146216310)));
    var_13 = var_8;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [23] = (((!8158989345146216310) % (~var_5)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [23] [i_0] [i_2] = (((((3062562217 ? var_5 : 10287754728563335294)) | 70)));
                        arr_14 [i_2] = 11007248222388486604;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_14 = var_2;
                    var_15 = (((max(((min(var_2, var_9))), (73 % 12707389829064185656))) >= ((-70 % (max(var_5, (arr_18 [i_5] [i_5] [i_4] [i_0])))))));
                    arr_20 [i_0] [i_4] [7] = (min(11007248222388486604, 6356092826320074982));
                    var_16 -= (((((max(-7587088832277346921, 60822)) ? 10323363434605641821 : (arr_19 [i_0])))));

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_0] = (min(((max(11401, -126))), ((238225901 ? 1232405079 : 7806))));
                        arr_26 [i_0] [i_4] [i_0] [i_6] [21] = (arr_15 [i_0] [i_5]);
                    }
                }
            }
        }
        arr_27 [i_0] [i_0] = 39195;
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 0;i_11 += 1)
                        {
                            {
                                var_17 &= var_10;
                                arr_40 [i_9] [i_9] [i_9] [i_9] [i_7] = (((-88 + 2147483647) >> ((((var_9 / 501085100) < 18148958832923933839)))));
                                var_18 = (min(var_18, ((((6745 * 33) & (((-17672 ? 51232 : var_3))))))));
                            }
                        }
                    }
                    var_19 ^= 70;
                }
            }
        }
    }
    #pragma endscop
}
