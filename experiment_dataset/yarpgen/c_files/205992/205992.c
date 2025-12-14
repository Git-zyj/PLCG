/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 127;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((var_18 != (((!((((arr_1 [i_1]) * var_9))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] [3] [i_1] [i_1] |= var_14;
                            var_21 = max(57183, (!-5437356246839357585));
                            arr_13 [i_0] [i_1] = (max(21, (max(0, 23170))));

                            for (int i_4 = 2; i_4 < 16;i_4 += 1)
                            {
                                var_22 = (max(var_22, (((~((min(8191, 99))))))));
                                arr_16 [i_0] [i_1] [i_4] [i_3] [i_4 - 2] = ((9928 ? (arr_7 [i_1]) : (arr_11 [i_0] [i_0] [i_3 - 1] [i_3 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (((~var_9) != (!32767)));
    #pragma endscop
}
