/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((var_0 ^ (1 < -895))))));
    var_14 = (max(var_14, (var_2 * var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 ^= var_8;
                                var_16 += var_11;
                                var_17 = (max(var_17, (((!((min(var_0, -280348387))))))));
                                var_18 = (((arr_6 [5] [i_2] [i_2 + 3] [i_2 + 1]) ? 1 : var_3));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = (!-280348387);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_20 [i_6] [i_6] = ((-(((arr_9 [i_0] [i_1] [i_5] [i_6]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [i_6])))));
                            var_19 = ((+(max((((arr_0 [i_0] [i_0]) ? 1 : 3636218531)), var_10))));
                        }
                    }
                }
                arr_21 [i_0] [i_1] [i_1] = (((~var_2) ? (min(0, (((arr_1 [i_0]) | 1)))) : (var_1 > -1497178180)));
                var_20 = ((!(((((min(var_3, 895))) >> var_10)))));
            }
        }
    }
    var_21 = (var_10 & var_1);
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    arr_33 [i_7] [i_7] [i_7] [i_9] = 64759;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_39 [4] [i_9] [i_9] = var_5;
                                var_22 = (var_7 + 1);
                                var_23 = 57762;
                                var_24 = (max(var_24, ((min((var_8 / 5838694780144765835), (-5867226937886293740 / var_4))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
