/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] = (max((!8305), 48443));
                                arr_15 [i_0] [i_1] [i_2] [i_4] [i_1] &= ((max((arr_6 [i_0] [i_1] [i_3] [i_1]), ((((arr_4 [10] [i_1 - 2] [i_3]) ? var_11 : (arr_8 [4] [4] [i_2] [4])))))));
                                arr_16 [i_0] [i_2] [i_1] [i_0] = (max(((((((arr_3 [i_0] [i_1]) ? (arr_6 [i_0] [i_0] [i_3 - 4] [i_0]) : 1023))) ? var_9 : ((~(arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4]))))), ((((max(1285980351, -263006017)) < 485571547)))));
                                arr_17 [i_4] = -5961055700623299847;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_23 [i_6] [i_0] [i_0] [0] = (arr_18 [i_0]);
                                arr_24 [i_0] [4] [i_2] [i_0] [i_0] = var_13;
                                arr_25 [i_0] [i_1 - 3] [i_2] [i_5] [6] = 824260864;
                                arr_26 [18] [i_1] = ((!((((arr_20 [i_0] [i_1] [i_0] [1] [3]) ? var_10 : (arr_20 [i_2] [i_5] [i_2] [i_0] [i_0]))))));
                            }
                        }
                    }
                    arr_27 [0] [0] = (arr_1 [14]);
                    arr_28 [i_0] [i_0] [12] [i_0] &= (max(((((((arr_6 [i_0] [16] [i_2] [i_0]) ? (arr_6 [i_0] [8] [i_2] [i_2]) : var_3))) ? (max(54137, -824260849)) : var_3)), (max(-485571563, 20439))));
                    arr_29 [i_0] [i_0] = (((((arr_21 [i_0]) - var_14)) > (arr_13 [i_0] [i_0] [i_1 + 1] [i_1 + 2] [i_2] [i_0] [i_1 + 1])));
                }
            }
        }
    }
    var_17 = (max(-824260864, 1774882103001682706));
    #pragma endscop
}
