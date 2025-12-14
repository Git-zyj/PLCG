/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = (((~-127) + 2933659705));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_20 = -var_4;
                            arr_11 [i_3] = ((201956456845267681 ? -254091680608974434 : 0));
                        }
                    }
                }
                arr_12 [i_0] [i_1] = 45;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_21 = ((var_6 ? ((((max((arr_8 [1] [9] [1] [i_5]), 19188))) ? (~2933659729) : 2933659715)) : (~0)));
                            var_22 = (min(var_22, var_17));
                            var_23 = ((-(~32748)));
                            arr_19 [i_0] [i_0] [i_4] [i_5] = (((!-1408244602) || (arr_10 [i_5] [0] [i_4] [i_1] [9] [23])));
                        }
                    }
                }
                arr_20 [i_0] [i_0] = (max(((((arr_14 [i_0 + 2]) ? (arr_1 [i_0 + 2]) : var_8))), (arr_8 [i_0 + 1] [i_0] [i_0 - 1] [i_0])));
            }
        }
    }
    var_24 = 1361307578;
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 20;i_8 += 1)
            {
                {
                    arr_27 [i_8] [i_7 + 2] [i_8] = 3483361382825919065;
                    arr_28 [13] [i_7] [i_8] = (((((var_9 | 2933659729) * 0)) == (((+(((arr_21 [i_7]) ? var_2 : -10)))))));
                    arr_29 [i_8] [i_7 + 2] [i_8] = (arr_1 [i_7]);
                    var_25 = -67;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                {
                    var_26 = (arr_8 [4] [4] [i_9 - 1] [4]);
                    var_27 = (arr_34 [i_9] [i_10] [i_11]);
                    var_28 = ((123 / ((-(arr_6 [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9])))));
                }
            }
        }
    }
    var_29 = ((!((max(var_8, (var_15 | var_6))))));
    #pragma endscop
}
