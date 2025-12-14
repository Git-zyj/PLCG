/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [5] [i_1] [i_4] [i_3] [i_0] [5] [i_2] = var_5;
                                var_13 = (max(var_13, (((var_12 && ((min(var_2, (((arr_3 [i_0] [i_0] [i_2]) ^ (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                                arr_14 [i_1] [i_1] [i_2] = -2147483639;
                            }
                        }
                    }
                    var_14 = ((arr_3 [i_0] [i_0] [i_0]) || (arr_1 [i_0]));
                    arr_15 [i_2] = ((((4294967287 ? (((-25158 != (arr_2 [3] [3])))) : var_9))) ? (max((arr_5 [i_2] [i_2] [1] [i_2]), (arr_9 [i_2] [i_1] [i_1] [i_2]))) : var_8);
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_15 = ((-(min((-126 / -25148), var_12))));
                                arr_23 [i_0] [i_2] [i_0] = 7428885211437383813;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 8;i_8 += 1)
                        {
                            {
                                var_16 = (min(var_16, (arr_22 [i_8 + 2] [i_0] [i_2] [i_8 + 2] [i_8] [i_8] [i_8 + 2])));
                                arr_28 [i_0] [i_0] [i_0] [i_1] [i_2] [3] [i_8] = (min(2, ((((var_8 & var_3) >= (min(var_8, (arr_0 [i_2]))))))));
                                var_17 = (max(var_17, (((-(((((arr_21 [i_2] [i_1] [3]) ? var_6 : -25158)) >> var_5)))))));
                                arr_29 [i_1] [i_2] [i_1] [i_8 + 2] = (max(((((arr_3 [1] [i_8] [i_2]) << (((~var_1) + 1735032388271428326))))), (arr_10 [i_0] [i_0] [i_2] [i_1] [i_2] [i_2] [i_8])));
                                var_18 = ((var_1 ? (((((max(var_4, (arr_17 [1] [1] [i_2] [i_2] [i_2]))) != var_5)))) : var_8));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (~var_2);
    #pragma endscop
}
