/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((max((max((arr_3 [i_0 + 1] [i_1] [i_1 - 1]), (arr_1 [i_1 + 1]))), (arr_0 [i_1] [1]))))));
                arr_6 [i_0] [i_0] [i_0] = var_10;
                var_12 = ((4191679707275786393 ? 62986 : 3911167464412486117));
            }
        }
    }
    var_13 = (min(var_13, var_8));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_2] = (max((~var_5), var_4));
                var_14 = (min(var_14, var_3));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_15 = (--4624855972029419898);
                            var_16 += (max((!1), ((min(var_10, var_10)))));
                            var_17 = (min(var_17, -var_6));
                            var_18 = (~1);
                            var_19 = (max(var_19, var_0));
                        }
                    }
                }
                arr_18 [i_2] [i_2] = 1;
            }
        }
    }
    #pragma endscop
}
