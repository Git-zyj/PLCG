/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 -= max((((((64 ? 2118 : -7420431665464550582))) ? (((var_0 ? (arr_5 [i_3] [i_1] [i_2]) : var_11))) : ((0 ? 818119505891087114 : 38)))), (((((arr_7 [i_0] [i_1] [i_1]) ? (arr_2 [i_3]) : (arr_10 [6] [i_2] [6] [i_2] [i_4] [i_4] [10]))) & var_0)));
                                var_22 = (((((-((~(arr_2 [1])))))) ? ((var_13 ? (arr_4 [i_0] [i_1] [i_2] [i_3]) : (arr_5 [i_0] [20] [20]))) : ((max((arr_12 [i_0] [i_0] [i_0] [i_0]), (arr_12 [i_1] [i_0] [i_2] [6]))))));
                                arr_13 [i_0] [i_1] [i_1] [i_4] [i_2] = ((((!(arr_8 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4]))) ? 818119505891087105 : ((-(((arr_9 [i_0] [i_0] [11] [i_0] [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : var_18))))));
                                var_23 = ((-7420431665464550582 ? (((!(arr_6 [i_0] [i_0] [i_1] [i_2] [2] [11])))) : ((~(arr_6 [i_0] [i_3] [i_2] [i_3] [i_3] [15])))));
                                var_24 = (((!0) ? (min((!var_3), (arr_4 [i_0] [i_0] [i_2] [8]))) : (arr_1 [i_2])));
                            }
                        }
                    }
                }
                var_25 -= ((((((((arr_0 [i_0]) - var_19))))) / ((5147 ? 2047 : 2047))));
            }
        }
    }
    #pragma endscop
}
