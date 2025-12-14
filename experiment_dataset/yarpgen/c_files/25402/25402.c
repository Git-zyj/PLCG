/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_2] [i_0] [i_0] = (((23 ? 17 : 58)));
                    var_19 = var_4;
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_5] = (min((((((arr_0 [i_5]) ? var_10 : (arr_15 [i_1] [i_3] [i_1]))))), (((arr_17 [i_0] [i_0] [i_3] [2]) ? (-36 & -24) : (((arr_12 [i_0] [i_0] [12] [i_0]) | -16300))))));
                                arr_19 [i_0] [3] = (-((~((var_10 ? var_1 : -2062336267)))));
                                var_20 = (min(var_20, (((((65 / (arr_11 [i_1 - 4]))) ^ ((((arr_10 [i_5 + 2] [i_5 - 1] [7] [13]) << 19))))))));
                                var_21 = (((((~(arr_1 [i_1 + 1])))) ? var_16 : ((-((max(-33, 1)))))));
                            }
                        }
                    }
                    var_22 |= 1;
                    arr_20 [i_1] = ((var_6 == (((-(max(var_1, -2062336287)))))));
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                {
                    var_23 = (min(var_23, ((((((var_17 ? -2062336274 : 381496023))) + var_18)))));

                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_6] [i_7] [i_0] = (arr_4 [6]);
                        arr_26 [i_7] [i_6] [i_7] [i_1] [i_0] = (max((((((30 ? (arr_10 [1] [i_6] [i_1 - 2] [i_0]) : (arr_6 [i_0] [i_0] [i_7] [i_7])))) ? ((((arr_23 [i_0] [i_6]) && (arr_15 [i_0] [i_1] [i_6])))) : (arr_6 [i_0] [i_1] [i_6] [i_7]))), (arr_5 [i_0])));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_8] [i_6] [i_1] = ((3 ? 1 : 49152));
                        arr_30 [i_0] [i_0] [i_6] [10] [i_6] [i_1] = 46669;
                    }
                }
                var_24 = (min((arr_5 [i_1 - 4]), ((((var_5 != (arr_21 [i_0] [i_1] [i_1] [i_0]))) ? 893825907 : var_6))));
            }
        }
    }
    var_25 = (min(var_25, var_17));
    #pragma endscop
}
