/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((var_3 < (~845399632)));
    var_11 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 = (min(845399632, 845399632));
                                var_13 = (max(var_13, (((-((((7607072002824272404 == (arr_6 [i_4]))))))))));
                            }
                        }
                    }
                    var_14 = (((1 < 0) ? (((arr_6 [i_0]) ? (arr_2 [i_0]) : 33554176)) : (4294967295 & -61)));
                    arr_16 [8] |= -845399618;
                    var_15 = arr_12 [i_1] [i_1] [i_1] [i_0] [i_1];
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [6] [i_5] [i_0] = 9223372036854775807;
                                var_16 = (max(var_16, (((!((((arr_1 [i_6]) ? (((arr_7 [i_6] [i_6]) - -845399604)) : (arr_12 [i_6] [i_6] [10] [i_6] [10])))))))));
                                var_17 += (~845399621);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
