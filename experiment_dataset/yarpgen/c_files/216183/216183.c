/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 2587101458;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 ^= var_11;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                            {
                                arr_13 [i_3] [i_3] [2] [i_1] [i_1] [i_0] [i_3] = (arr_11 [i_0]);
                                var_18 = (arr_12 [i_2] [i_2] [i_2] [i_2] [1]);
                                arr_14 [i_3] [i_3] [6] [i_2] [6] [6] [i_3] = 8191;
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                            {
                                var_19 *= ((-(((arr_8 [i_3 + 3]) ? 0 : (arr_11 [i_3 - 1])))));
                                arr_17 [i_3] [i_5] [i_3] [i_3] [i_1] [i_1] [1] = var_12;
                            }
                            arr_18 [i_0] [i_0] [i_0] [i_3] [i_2] [i_3] = (max(-8192, 2147483629));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_7;
    #pragma endscop
}
