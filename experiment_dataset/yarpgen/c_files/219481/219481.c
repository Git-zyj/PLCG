/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 63032));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_15 = (1 | 10);
                            var_16 = (((min((arr_4 [i_0] [i_1] [i_1]), (110 + 29276))) * (((((var_3 >> (((arr_7 [i_3]) + 87)))) > ((min(127, 29264))))))));
                            var_17 = (max(var_17, (((-((var_6 / (arr_9 [i_1] [i_1 + 1] [i_1]))))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_18 = (-127 || 1);
                                arr_20 [i_0] [i_0] [i_4] [i_0] [i_6] [i_6] = (((arr_19 [i_1] [i_0]) ? (((arr_12 [i_1 - 2] [i_1 - 2] [i_1 + 1]) ? var_1 : (arr_12 [i_1 + 1] [i_1 - 1] [i_1 + 1]))) : (~var_9)));
                                arr_21 [i_0] [i_0] = -18446744073709551612;
                            }
                        }
                    }
                }
                var_19 = (arr_15 [i_1] [i_0] [i_0] [i_0]);
            }
        }
    }
    var_20 = -119;
    #pragma endscop
}
