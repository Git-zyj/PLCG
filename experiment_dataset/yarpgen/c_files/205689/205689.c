/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= 3493289630;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_4] = 575897802350002176;
                                var_12 ^= ((~(((9223372036854775807 / -575897802350002176) / (94766334761272087 + var_5)))));
                                var_13 = (max(var_13, (+-6874622532370038071)));
                                var_14 = (!-1);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_23 [i_1] [i_1] [i_2] [i_1] [i_6] = -575897802350002176;
                                var_15 ^= (var_6 && -575897802350002176);
                                var_16 = (max(-20346, (((38 + var_9) - var_10))));
                            }
                        }
                    }
                    var_17 = 0;
                }
            }
        }
    }
    var_18 = ((-(var_7 + -575897802350002152)));

    /* vectorizable */
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        var_19 = (575897802350002176 - var_0);
        var_20 = (var_1 == 575897802350002176);
    }
    var_21 = (max(-var_6, -36028797018963904));
    #pragma endscop
}
