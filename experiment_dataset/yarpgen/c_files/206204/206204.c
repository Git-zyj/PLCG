/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 18015;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 4] [4] [i_0] [2] = (arr_1 [i_0] [i_0]);
                    arr_9 [i_0] [i_1] [i_2] = (arr_2 [1]);

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_16 [i_0] [i_0] [8] [i_0] = (arr_12 [i_0] [i_0] [i_2] [i_0] [i_4] [i_4]);
                            arr_17 [i_0] [12] [i_0] [i_0] = ((-(arr_10 [i_4] [i_4] [i_4] [i_4] [i_4])));
                            var_14 += 32753;
                            var_15 |= 17988;
                        }
                        var_16 = var_3;
                        var_17 = 47533;
                        var_18 = (min((arr_3 [i_0] [i_0] [i_1 - 3]), ((-(arr_0 [i_0 + 3])))));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            var_19 = (max(var_19, (arr_10 [i_0] [i_1] [i_2] [i_2] [i_0])));
                            var_20 = 47536;
                            var_21 = (max(var_21, ((((~(arr_15 [i_2] [i_0 + 4] [i_1 - 3] [i_6 - 2])))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            var_22 *= (~var_11);
                            arr_26 [i_0] [i_5] [i_5] [11] = (arr_15 [i_0] [i_0 + 1] [i_1 - 1] [i_7 - 1]);
                            arr_27 [i_0] = ((var_8 != (arr_13 [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1] [i_7])));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_23 = -31507;
                            var_24 = (arr_2 [i_0 + 4]);
                            var_25 = (max(var_25, ((-((-((1 ? 15891884157696488219 : (arr_21 [i_5] [i_5] [i_5] [i_2] [2] [i_5] [i_8])))))))));
                        }
                        var_26 = 1;
                        var_27 -= ((-(((arr_13 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0 + 1]) ? (arr_18 [i_5] [i_5] [i_5] [i_0]) : ((min(32761, 30727)))))));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_0] [i_0] [12] [i_9] [i_9] [i_1] = (min((~-26091), (((((arr_4 [i_0] [i_1] [i_2]) + 9223372036854775807)) >> (((~var_8) + 2089199448))))));
                        arr_33 [i_0] [i_1] [i_1] [i_1] = (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
