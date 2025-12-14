/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_0] [0] = (--4791);
                    arr_9 [i_1] [i_1] [i_2] = 60737;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_13 = ((!(!3850475194743699305)));
                                arr_21 [i_0] [5] [i_4] [i_5] = (max(((max(60721, 255))), 60721));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_14 = ((42 ? -38 : -3850475194743699316));
                                arr_28 [i_0] [i_3] [i_3] [i_3] [i_7] [i_7] [i_8] = (((((-((max(2116, 1)))))) ? (!65535) : (~4786)));
                            }
                        }
                    }
                    arr_29 [i_3] [i_3] = -2689357251231092792;
                    arr_30 [i_0] [i_0] [i_0] [i_4] = (min((max(1, 3850475194743699305)), (((31 ? (!17661479130918156077) : (~53203))))));
                }
            }
        }
        arr_31 [9] = (min(9223372036854775807, 9223372036854775807));
    }
    for (int i_9 = 2; i_9 < 16;i_9 += 1)
    {
        var_15 += (max(((!(((-1408576410 ? 14466526623407005965 : 1))))), (!1)));
        arr_35 [i_9 + 2] = ((!(!3850475194743699316)));
        var_16 = ((~(~28400)));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_17 = 1;
        arr_38 [i_10] = ((min(-2, 6170781023270336458)));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 20;i_13 += 1)
                {
                    {
                        var_18 = ((min(1, ((max(1, 31208))))));
                        var_19 += (--1);
                        var_20 = (!1);
                    }
                }
            }
        }
        arr_47 [i_10] = (!9223372036854775807);
    }
    for (int i_14 = 0; i_14 < 18;i_14 += 1)
    {
        arr_50 [i_14] = ((!(((125 ? 2147483647 : 28543)))));
        arr_51 [i_14] = (!1);
    }
    /* LoopNest 2 */
    for (int i_15 = 4; i_15 < 20;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 18;i_16 += 1)
        {
            {
                arr_57 [i_15] [i_16] = ((7433 ? -3850475194743699316 : (((-(!-3850475194743699316))))));
                arr_58 [i_15] [i_16 + 2] [8] = ((-((2040875857 ? 210 : 1814683313149574576))));
            }
        }
    }
    var_21 -= (!var_4);
    #pragma endscop
}
