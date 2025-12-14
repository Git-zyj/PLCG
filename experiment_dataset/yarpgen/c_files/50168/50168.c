/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] = 0;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = var_8;
                                arr_16 [12] [i_0] [i_0] [i_0] [i_2] [i_2] [i_4] = (arr_13 [0] [i_3 - 4] [2] [9] [i_4] [i_4]);
                            }
                        }
                    }
                }
                var_12 = (arr_2 [i_0] [i_1] [i_0]);
                var_13 |= (arr_1 [i_0 - 1] [i_0 - 1]);
                var_14 = (((1 == -4952258807377318828) <= 144));
            }
        }
    }
    var_15 = ((var_0 ? ((((2933893482 || 329371450) <= var_7))) : ((65535 ? var_0 : -var_0))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                var_16 = (((min((arr_17 [i_6] [i_5]), ((var_3 << (((arr_7 [i_5] [i_5] [i_5]) + 30544)))))) | ((((2933893484 > (min(var_6, 1))))))));
                var_17 |= (((arr_2 [i_6] [i_6] [i_5]) ? -28354 : 53531));
            }
        }
    }
    var_18 ^= var_8;
    var_19 += (!1);
    #pragma endscop
}
