/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_9 [3] = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = (arr_7 [i_0] [i_1] [i_2] [i_2]);
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (arr_8 [i_0] [i_2]);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_5] [7] = ((-(((arr_22 [i_6] [i_6] [i_6] [i_6] [i_6]) ? (arr_13 [i_5] [i_6]) : (arr_22 [6] [i_1] [i_5] [i_6] [1])))));
                                var_18 = (max(-1952418470482757081, 64));
                                arr_26 [i_0] [i_7] [i_0] [i_6] [8] [i_1] = 30546;
                                arr_27 [i_0] [11] = max((arr_16 [i_0] [i_7] [i_5]), ((((!(arr_11 [i_0] [i_1] [14] [i_6] [i_1]))) ? ((((!(arr_21 [i_1] [i_7]))))) : (((arr_0 [i_6]) ? 34995 : var_6)))));
                            }
                        }
                    }
                    arr_28 [i_0] = (arr_20 [i_0] [i_1]);
                }
                arr_29 [5] [5] = var_14;
                arr_30 [i_0] = (((4286 ? 161087238 : 62886)));
                var_19 = arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1];
            }
        }
    }
    var_20 = ((var_10 ? (max(var_2, var_3)) : (~8088834267247296870)));
    var_21 = var_2;
    var_22 = (((((min(30546, 30546)))) > (!34989)));
    #pragma endscop
}
