/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 13;
    var_16 = 30720;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_0] [i_0] [i_0] = (-1284244563 >= var_4);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (13429 + var_3);
                                arr_19 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = ((3458820592 && (arr_17 [i_0] [i_0] [i_2] [i_3] [i_0])));
                            }
                        }
                    }
                    arr_20 [i_1] [i_2] = 3458820592;
                    arr_21 [i_0] [i_0] [i_0] [i_0] = -132922414;
                }
            }
        }
    }
    var_17 = ((max(1529524963, var_7)));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    arr_31 [i_5] [i_5] = (max((((!((min(var_4, 22565556)))))), ((-(arr_3 [i_6])))));
                    arr_32 [0] [i_6] [i_6] = ((((((-2123410077 - (arr_25 [i_5] [i_6] [i_7]))) + (var_11 + var_4)))));
                    arr_33 [i_6] [i_6] [i_7] = 3;
                    arr_34 [i_5] [i_6] [i_6] = min(17485, var_1);
                }
            }
        }
    }
    #pragma endscop
}
