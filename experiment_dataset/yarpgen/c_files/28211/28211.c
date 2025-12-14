/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] = 25;
                    var_20 = (((((var_4 || (arr_8 [i_1] [i_2] [i_2])))) >> ((((234192964 ? (arr_1 [i_0] [i_2]) : var_16)) + 1124253252827648369))));
                    arr_10 [i_2] [0] = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = (~234192968);
                                var_22 = -22566;
                                var_23 = var_7;
                            }
                        }
                    }
                }
                arr_19 [i_0] = (--1053);
                var_24 = 3250556338;
                var_25 = (((((max((arr_13 [i_0] [i_1] [4] [i_0]), var_2))) ? ((234192959 ? var_4 : (arr_0 [i_0]))) : -2777)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            {
                var_26 -= (arr_20 [17]);
                var_27 = ((4060774331 ? 2396 : ((var_12 ? var_12 : (max(var_8, 4060774331))))));
                arr_27 [8] [i_6] [i_6 + 1] &= ((-(((-4223 == (arr_26 [i_6 + 1] [i_5]))))));
            }
        }
    }
    #pragma endscop
}
