/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = ((!((min(var_2, (((-90 ? var_1 : 2147483647))))))));
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_3] = -var_6;
                            var_15 = (max(var_15, (((246 ? 18446744073709551614 : 30737)))));

                            for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
                            {
                                arr_13 [i_0] [i_0] [i_3] [i_0] = (max((30759 * 65508), var_1));
                                arr_14 [i_3] [11] [i_1] [i_1] [i_0] [i_1] [i_3] = (((((~(((arr_1 [i_3] [i_1]) * 34777))))) ? ((var_11 ? ((((!(arr_7 [i_0]))))) : ((-(arr_0 [6]))))) : ((((!(((-2680332042665750408 / (arr_8 [i_0]))))))))));
                            }
                            for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] &= 34771;
                                arr_19 [i_3] [i_5 - 1] [i_3] [i_3] [i_0] [i_0] = (min(var_2, (0 + var_4)));
                                var_16 = (min(var_16, (arr_6 [i_0] [i_1 - 2] [i_2])));
                            }
                            for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                            {
                                arr_22 [i_3] [i_1] [i_3] = ((((!(((var_7 ? var_3 : -680920354))))) ? (arr_17 [i_3] [i_3] [i_2] [i_0] [i_0]) : ((var_0 ? (arr_11 [i_2] [i_2]) : (((arr_11 [i_0] [i_0]) << (((arr_7 [i_0]) - 13931))))))));
                                arr_23 [i_6] [i_3] [i_2] [i_3] [i_0] = var_11;
                                var_17 = (max(34776, (!29624)));
                                arr_24 [i_3] [i_3] [i_3] [i_2] [i_2] = var_8;
                            }
                        }
                    }
                }
                var_18 = (~-34);
            }
        }
    }
    var_19 = ((~(min((((var_4 ? -680920354 : var_10))), 3198616445901405778))));
    #pragma endscop
}
