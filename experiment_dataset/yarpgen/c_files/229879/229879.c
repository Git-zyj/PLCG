/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_0] [i_2] = var_8;
                    var_11 = (((63 ? ((((arr_3 [i_1]) & var_4))) : var_2)));
                    arr_8 [i_0] [i_2] [i_0] = ((-((-0 ? var_1 : (arr_1 [i_0])))));
                    var_12 = ((((min((arr_1 [i_0]), (arr_1 [i_1])))) < ((var_4 ? (arr_1 [i_2]) : 1))));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_17 [i_4] [i_1] [i_1] = arr_1 [i_5];
                                arr_18 [i_5] [i_4] [i_3] [i_4] [i_0] = var_0;
                                arr_19 [i_0] [4] [i_0] |= (((((max((arr_10 [i_0] [i_5]), var_0))) ? 113 : (arr_15 [i_0] [i_0] [i_3] [i_4] [i_4] [i_5 - 2]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_13 = (max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), ((((((arr_22 [i_0]) - var_1)) >= (-113 + var_3))))));
                                arr_25 [i_0] [i_1] [i_3] [i_0] [i_6] [i_0] = ((((!(arr_23 [i_6] [i_1] [i_1]))) ? var_7 : (((arr_6 [i_6] [i_6] [i_3] [i_6]) % (arr_23 [i_0] [i_1] [i_3])))));
                            }
                        }
                    }
                    arr_26 [10] = ((var_6 ? var_6 : (arr_6 [i_0] [i_0] [i_0] [i_0])));
                }
                arr_27 [i_0] [i_0] [i_0] |= (arr_20 [i_0]);
                arr_28 [i_0] [i_1] = ((((((((var_1 ? 98 : (arr_24 [i_0])))) ? var_9 : var_8))) ? -68 : var_2));
                arr_29 [i_0] [i_0] |= (min((((arr_15 [i_0] [i_0] [i_0] [12] [i_1] [i_1]) ? var_8 : -84)), ((var_0 ? -1804993436 : -74))));
            }
        }
    }
    #pragma endscop
}
