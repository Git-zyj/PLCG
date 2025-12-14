/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] &= (((arr_1 [13]) >= -34));
                arr_5 [i_0] [10] [i_0] |= 18446744073709551608;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] = (max((arr_12 [i_0] [0]), var_3));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_3] [12] [i_0] = 13850739638836092224;
                                arr_19 [i_0] [14] [i_3] [i_3] [i_4] = var_9;
                                arr_20 [i_4] [0] [18] [i_2] [0] [i_4] |= var_11;
                            }
                            arr_21 [i_1] [i_1] [i_1] = ((max((((125800307 ? 1 : 4169166975))), (max(var_9, (arr_17 [i_0] [i_1] [i_0] [i_1]))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        arr_24 [i_5] [i_5 + 1] = ((!(199 & 28187)));
        arr_25 [i_5] [i_5] = 18;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        arr_28 [i_6] = ((75 ? (arr_27 [i_6] [i_6]) : (arr_27 [i_6] [i_6])));
        arr_29 [i_6] = (arr_26 [i_6] [i_6]);
    }
    #pragma endscop
}
