/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4 + 1] = (((((-2254440726461672528 ? 1 : -19865)) >= 241)));
                                var_14 ^= var_0;
                                var_15 = (-241 + 13091644308219939904);
                                arr_14 [i_1] [i_3] [i_2] [i_1 - 2] [i_1] [i_1] = (min((arr_1 [i_1] [i_4 + 1]), var_13));
                            }
                        }
                    }
                }
                var_16 = ((((min(var_2, (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (max(var_4, ((~(arr_9 [i_0] [i_1 - 1] [i_1 + 2] [i_1 - 1]))))) : var_7));
                var_17 = 8989607068696576;
                var_18 *= 241;
                var_19 = (((arr_5 [i_0] [i_0] [i_0]) - ((((min(31, 13387))) ? ((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - (arr_6 [i_0] [i_0] [i_0])))) : (min((arr_5 [i_0] [i_0] [i_1]), var_12))))));
            }
        }
    }
    var_20 = max(var_0, var_3);
    var_21 = (~1420165044);
    #pragma endscop
}
