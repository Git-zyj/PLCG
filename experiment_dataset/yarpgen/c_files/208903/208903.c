/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (max(27662, 2));
    var_11 -= ((min((~var_3), ((max(var_1, 27662))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] &= min((((7532912569433643495 ? (~26442) : 80))), ((1796120969 ? 4294967273 : 2337856511634362022)));
                var_12 = (min(var_12, ((((arr_2 [i_0] [i_0]) > var_6)))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 -= (arr_4 [i_0] [i_1 - 3] [i_1 - 3]);
                                var_14 = (max(var_14, ((max((((3836524301082255331 < (arr_7 [i_3] [i_4])))), (min(var_3, var_6)))))));
                                var_15 = (max(237, 27662));
                                var_16 *= ((((max((arr_1 [i_4]), (var_5 || var_1)))) ? (arr_1 [9]) : (max(((var_0 ? var_9 : var_3)), (arr_9 [i_2] [4] [i_1] [i_2])))));
                                var_17 = (((((arr_9 [i_0] [i_3 - 1] [i_0] [i_1]) ? (arr_10 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]) : var_5)) >> (((((~0) ? (~var_8) : (arr_8 [i_1 - 2] [i_2 - 2] [i_1] [i_2]))) + 153))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                var_18 = (!3892484508);
                var_19 = (min((max((arr_15 [i_5]), var_7)), ((-((max(50, 2)))))));
                var_20 = (min(var_20, (((((((arr_14 [i_5]) && (arr_17 [i_5])))) >= (!32))))));
            }
        }
    }
    #pragma endscop
}
