/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_3 ? var_4 : (max(4194303, 3502460035191521865))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] = (((((((min(3502460035191521865, 183))) ? 1 : (arr_6 [i_0] [i_1] [i_0] [2])))) ? 3502460035191521864 : 57180));
                    arr_9 [i_0] [i_0] [i_0] = (arr_6 [i_0] [i_0] [i_0] [i_0]);
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_21 = (min(var_21, (arr_5 [i_0] [i_0] [i_0])));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = arr_6 [i_0] [i_0] [i_0] [i_0];
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] = (arr_17 [0] [i_0] [i_4] [i_5 + 2]);

                            for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [i_1] [i_4] [i_0] [i_6] = ((-2077690717 ? -3502460035191521871 : 181));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((((arr_3 [i_5 + 3]) ? (arr_5 [i_5 - 1] [i_6 - 1] [i_6 - 1]) : (arr_5 [i_5 - 2] [i_6 - 1] [i_6]))), ((191 ? (arr_6 [i_6 + 1] [i_0] [i_0] [i_0]) : (arr_6 [i_5 - 1] [i_1] [i_0] [i_5 + 1])))));
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 1;
                                var_22 = (min(var_22, (arr_2 [6])));
                            }
                            for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                            {
                                var_23 = (arr_5 [i_5 + 1] [i_7 - 1] [i_7 + 1]);
                                arr_29 [i_0] [i_1] [1] [i_0] [i_1] [i_7] = -24508;
                                arr_30 [i_0] [i_1] [i_0] [i_1] [i_1] = (min((((arr_10 [i_0] [i_1]) ? (((min(1, 1)))) : 1869218800)), ((max(45050, (arr_3 [i_0]))))));
                            }
                            for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                            {
                                arr_33 [i_0] [i_0] [i_4] [i_0] [i_5] [i_8 + 1] [i_8 - 1] = (181 ? -4716549412258433560 : 46272);
                                arr_34 [i_0] [i_0] [i_4] [i_5] [i_8] = (min(((-28007 ? ((min(-29401, 58))) : 192)), 46207));
                                arr_35 [i_0] [i_1] [i_0] [i_0] [i_8] = (((arr_20 [i_8] [i_8] [i_8] [i_8] [i_0]) ? (max((arr_6 [i_1] [i_4] [i_0] [i_1]), (((arr_17 [i_0] [i_1] [i_1] [i_1]) ? 3502460035191521871 : -6543958514706415971)))) : 19280));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
