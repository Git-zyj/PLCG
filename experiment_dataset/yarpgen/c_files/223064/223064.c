/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(var_4, (min(var_12, var_0))))) % var_6));
    var_18 |= (-29257 < var_13);

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_19 = var_15;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (min(((((var_15 || (arr_0 [i_0] [10]))))), ((~(arr_5 [4] [4] [i_2])))));
                    var_21 = (max(29256, var_3));
                }
            }
        }
        arr_7 [i_0] = (min((29256 & var_12), ((min((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_0]))))));
        arr_8 [i_0] = var_2;
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_20 [i_3] = ((((max(-29263, -var_4))) ? (((!(arr_12 [i_5] [i_5 - 1] [i_5 + 3])))) : (min((arr_14 [i_3] [i_6]), -29022))));
                                var_22 = ((((arr_3 [i_7 + 1] [i_5] [3]) % (arr_19 [i_5 + 2] [11] [i_7 - 1] [10] [i_7 - 1] [11]))));
                                arr_21 [i_3] [i_3] [i_3] = 80;
                            }
                        }
                    }
                    var_23 = var_13;
                    arr_22 [i_3] [i_4] [i_3] = (arr_12 [i_3] [i_3] [i_3]);
                }
            }
        }
        arr_23 [i_3] = min(((((arr_6 [12] [i_3] [i_3] [12]) ? (arr_6 [i_3] [i_3] [i_3] [i_3]) : (-2147483647 - 1)))), 5903357118932156892);
    }
    var_24 = (((~var_3) ? (min((var_0 != var_9), -16363)) : var_6));
    #pragma endscop
}
