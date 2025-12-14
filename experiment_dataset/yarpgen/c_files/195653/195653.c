/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_10 = ((((((arr_0 [i_1]) ? var_1 : (arr_5 [i_1] [i_1] [i_1])))) ? (arr_0 [i_2]) : var_9));
                    arr_7 [i_2] [i_1] = (((arr_5 [3] [i_2] [i_2]) ^ 182));
                    var_11 *= (((~var_2) ? 73 : (arr_5 [i_0] [i_1] [i_2])));
                    var_12 = (arr_5 [i_0 - 1] [4] [i_2]);
                    var_13 = (min(var_13, (((180 >= (arr_4 [1] [1]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                {
                    var_14 = (max(var_14, (((-(arr_8 [i_0] [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [0] [0] [0] [i_0] [i_0 + 1] [i_0] |= ((!(arr_16 [i_3] [i_0 - 1] [8])));
                                var_15 = ((arr_1 [2]) == (~var_5));
                            }
                        }
                    }
                    arr_21 [i_0] [i_3 - 1] [i_4] [i_3] = (((!var_2) >> ((((var_2 ? (arr_1 [i_0]) : (arr_6 [2] [i_3] [2] [2]))) - 46))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_16 = ((-((-(arr_4 [i_0] [0])))));
                                var_17 = (arr_14 [i_0 + 1] [i_7] [0] [i_3] [i_0 + 1] [i_0 + 1]);
                                var_18 = (arr_6 [i_7 - 1] [i_4 + 1] [i_0 + 1] [i_3 - 2]);
                                var_19 -= (arr_16 [i_0 + 1] [i_0] [i_0 - 1]);
                            }
                        }
                    }
                    var_20 += ((((-(arr_24 [i_0] [i_0] [i_0]))) << (((arr_2 [i_0] [i_3] [5]) + 8320424410510829737))));
                }
            }
        }
    }
    var_21 = var_6;
    #pragma endscop
}
