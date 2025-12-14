/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = (min((min((max(9223372036854775807, -9223372036854775807)), 1)), ((min((min(var_8, var_3)), 24)))));
    var_17 ^= 120;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    var_18 = 255;
                    arr_7 [i_0] = ((9223372036854775804 * 0) >> 1);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = var_8;
                                arr_13 [i_1] [i_0] [i_2 + 1] [i_0] [i_0] = 15;
                            }
                        }
                    }
                    var_20 |= (1 && -9223372036854775807);
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] = (max(((max(var_7, (min(3554, 1))))), var_0));
                            var_21 = (max(var_21, (max(var_13, (min((max(var_5, var_14)), ((max(32766, 1)))))))));

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                            {
                                arr_22 [i_0] = (-25 || 9223372036854775807);
                                var_22 |= 9223372036854775807;
                                var_23 *= 32750;
                            }
                            for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                            {
                                var_24 += 1940782326;
                                arr_27 [i_0] [3] [i_5] [i_6] [i_5] [i_5] [i_6] = 9223372036854775807;
                            }
                            var_25 = (((9223372036854775807 < (min(-9223372036854775794, 1)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
