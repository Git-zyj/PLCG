/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((1 & 1327815532747481873) ^ (min(1327815532747481873, 1327815532747481887)))), var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (max(-1327815532747481856, 4188125168));
                var_20 = (arr_1 [i_0]);
                var_21 = (max(((((arr_5 [i_0] [i_0] [i_1]) || (var_5 && -13039)))), 18106772197382502721));
            }
        }
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_15 [15] [i_3] [i_4] = (arr_14 [i_2] [0] [i_2] [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [i_2] = (arr_16 [i_6] [14] [i_4] [7]);
                                arr_23 [i_2] [i_5] [i_6] = (min(((((~0) <= ((max(40182, -32)))))), -0));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_30 [i_8] [7] [i_4] [5] [i_4] = (arr_29 [i_2] [i_2] [i_3] [i_4] [i_7] [i_4] [i_8]);
                                arr_31 [i_7] [i_8] [i_7] [i_4] [i_2] [i_2] = (arr_6 [5] [i_2]);
                            }
                        }
                    }
                    var_22 *= (0 / 3842202855508343835);
                    arr_32 [i_3] [1] [i_3] [i_3] = (~6403151896215228926);
                }
            }
        }
        arr_33 [i_2] = (min(((max(-1327815532747481856, (arr_28 [i_2] [i_2] [9] [i_2] [i_2])))), (((-1327815532747481884 != (arr_10 [i_2]))))));
    }
    #pragma endscop
}
