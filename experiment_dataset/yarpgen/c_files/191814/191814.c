/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_15 < var_15);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (max(9359357105429703487, 0));
        arr_3 [i_0] = var_7;
        arr_4 [i_0] [i_0] = 1511039527;
        var_18 = ((-(arr_0 [7])));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_19 += ((((max((max(5, (arr_5 [20]))), 1))) ? ((~((min(52107, (arr_6 [i_1 - 1] [i_1])))))) : ((1 ? 8 : 52084))));
        var_20 = var_3;
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_15 [12] [i_2] [i_2 + 1] [i_4] [i_4] [i_3] &= 1;
                        arr_16 [i_1] [i_1] [i_1] [i_1] = ((var_10 ? 14369587068092440082 : (((-339667465 ? 11966 : 139)))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_21 = (0 == 30979);
                            var_22 = ((!(arr_14 [i_3] [i_1] [i_5] [i_3] [3] [i_3])));
                        }
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            arr_24 [i_1] [i_2] [i_1] [i_4] [i_6] = (arr_5 [i_1]);
                            arr_25 [i_2] [i_3] [i_1] [i_6] = (max((((arr_5 [i_1]) * ((-(arr_11 [i_1] [i_1]))))), 16368));
                            var_23 = (arr_14 [22] [i_6] [i_3] [i_3] [i_6] [i_6 - 1]);
                            var_24 &= ((6117458485888944927 || 132120576) != 4077157005617111543);
                        }
                    }
                }
            }
        }
        arr_26 [i_1] = (((arr_22 [i_1] [i_1] [i_1]) ? 46257 : (((!((max(19279, 2047))))))));
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 22;i_8 += 1)
            {
                {
                    var_25 = -1;
                    arr_32 [i_1] [i_7 - 3] [i_1] = ((1 ? (arr_8 [i_1]) : 1));
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_35 [i_9] [i_9] = ((((((min(16368, 0))) / var_1)) / ((max((max((arr_9 [i_9]), 35592)), (max(13428, 46257)))))));
        arr_36 [i_9] = (min((((arr_11 [i_9] [i_9]) * 0)), 2047));
        arr_37 [i_9] = (((((((min(0, 27823))) ? var_2 : (max(2, 5))))) ? (min((((-851271517 ? 67108608 : 2147483631))), (arr_11 [2] [i_9]))) : (arr_20 [i_9])));
    }
    var_26 = (max(var_26, (12122600815048455175 ^ 35975)));
    var_27 = var_4;
    #pragma endscop
}
