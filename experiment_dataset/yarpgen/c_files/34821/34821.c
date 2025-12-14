/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 *= (arr_3 [18]);
                var_18 = (arr_3 [i_0 - 1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (~-74);
                                var_20 |= ((var_0 < ((((min(8019222238655746604, 0))) ? ((max(26076, 11131))) : (arr_0 [i_4])))));
                                var_21 = (min((((((min((arr_8 [i_0 + 3] [i_0] [i_0 + 3]), 4817))) ? (arr_9 [15] [i_1] [15] [15] [i_1] [i_1]) : ((-(arr_10 [i_0] [i_0])))))), (((54 & (arr_2 [i_0]))))));
                                var_22 ^= ((~(arr_1 [i_2])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
