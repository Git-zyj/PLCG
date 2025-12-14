/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 += (((min((arr_1 [i_0] [i_1 + 1]), (arr_6 [i_2] [i_1] [i_0 + 1] [i_2])))));
                    arr_7 [i_0] [i_1] [i_2] = var_4;
                    arr_8 [i_0] [i_1] [i_1] = ((~(((!((max(var_11, var_12))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 20;i_7 += 1)
                            {
                                arr_23 [i_3] [i_3] [i_3] [i_7] [i_7] = ((!(arr_17 [i_5] [i_6] [i_4])));
                                arr_24 [i_3] [i_7] = (max(((((~(arr_11 [i_3]))))), var_10));
                            }
                            for (int i_8 = 0; i_8 < 20;i_8 += 1)
                            {
                                var_15 = var_13;
                                var_16 = (min(var_16, ((4042110358376628543 ? 2147483647 : 2147483654))));
                            }
                            arr_28 [i_3] [i_3] [i_3] [i_3] [i_3] |= (((4294967277 <= 15032097199313424923) & (arr_18 [i_3] [i_5] [i_5] [i_4])));

                            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                            {
                                var_17 = (min(var_17, 74));
                                var_18 = (min(var_18, ((max((var_0 > var_11), (min((arr_31 [i_6] [i_5]), var_5)))))));
                                arr_33 [i_3] [i_3] [i_3] [i_5] [i_3] &= (arr_14 [i_3] [i_4]);
                                arr_34 [i_3] [i_3] [i_5] [i_6] [i_9] = ((var_4 != (arr_21 [i_9] [i_6] [i_9] [i_9] [i_4] [i_3])));
                            }
                            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                            {
                                arr_38 [i_3] |= ((var_2 ? 1925347361 : ((((min((arr_11 [i_10]), (arr_35 [i_10] [i_5] [i_3] [i_3]))) ? var_11 : ((((arr_21 [i_3] [i_3] [i_3] [i_5] [i_3] [i_3]) || 163))))))));
                                arr_39 [i_10] [i_4] = var_0;
                            }
                            arr_40 [i_3] [i_4] [i_5] [i_6] = var_0;
                        }
                    }
                }
                arr_41 [i_4] [i_4] [i_3] = (((~var_5) ? (arr_17 [i_4] [i_3] [i_3]) : var_4));
            }
        }
    }
    #pragma endscop
}
