/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((max(var_8, ((((arr_1 [i_0] [i_1]) ? 27257 : 65524))))) > var_9));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_2] = arr_1 [i_0] [i_3];
                                arr_14 [i_0] [i_0] [i_2] = ((((max(4294967295, ((max((arr_11 [i_3]), var_11)))))) && ((((min(22, var_3))) && var_11))));
                                arr_15 [i_0] [i_2] [i_2] [i_3] [i_4] [i_2] = ((+(max((arr_1 [i_2] [i_2]), (arr_9 [i_1] [i_1] [i_2] [i_1] [i_1] [i_0])))));
                            }
                        }
                    }
                }
                arr_16 [i_1] [i_1] [i_0] = ((var_2 & (min(((min((arr_8 [i_0] [i_1]), var_11))), (max(32765, 16383))))));
                arr_17 [i_0] [i_0] = (max(17399337380435535894, 1258445190));
                arr_18 [i_0] [i_1] = (arr_9 [i_0] [12] [i_0] [i_1] [7] [i_1]);
            }
        }
    }
    var_14 = (max(32765, 17230426951939369093));
    var_15 = var_7;
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_32 [i_5] &= (((((arr_25 [23]) <= var_7)) ? 16633 : (((((arr_23 [6] [i_7] [i_6]) ? (arr_20 [i_6]) : 18446744073709551615))))));
                        arr_33 [8] [i_8] [i_7] [i_8] [i_6] = (arr_28 [i_8] [i_7] [11] [i_6] [i_6] [i_5 - 1]);
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                    {
                        arr_36 [i_9] [i_7] [i_6] [12] = ((max(61625, (min(-17553, 2165958296)))) + var_1);
                        arr_37 [i_5] [i_7] [i_7] [i_5] [i_7] = 725146061;
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                    {
                        arr_40 [1] [24] [i_7] [i_7] = ((+((max((arr_26 [1] [i_5 - 1]), (arr_26 [i_6] [i_5 - 1]))))));
                        arr_41 [i_5] [i_5] [i_7] [9] [i_5] [i_10] &= ((~(((arr_29 [i_5 - 1] [i_5] [i_5] [i_5] [i_5 - 1]) ? 0 : (arr_34 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])))));
                        arr_42 [9] [i_7] [i_6] = -9;
                    }
                    arr_43 [i_5 - 1] [22] [i_7] = ((!(((+((((arr_28 [i_7] [i_7] [i_5] [9] [i_5] [i_5]) <= (arr_34 [i_7] [20] [i_6] [i_5] [1])))))))));
                    arr_44 [i_5] [i_5] [i_7] [i_5] = ((var_5 >> (41243 - 41223)));
                    arr_45 [i_5] [i_5] = (arr_35 [i_5] [i_5] [i_5] [i_7]);
                }
            }
        }
    }
    #pragma endscop
}
