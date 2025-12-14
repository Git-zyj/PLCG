/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [5] [7] = (!var_8);
                var_20 = (~var_18);
                arr_6 [i_0] = ((-(min(49310, (((arr_4 [i_0] [i_1]) << (var_13 - 7155740241309147430)))))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_4] [i_4] [i_3] [i_1] = (arr_7 [3] [i_1] [i_2]);
                                arr_18 [i_0] [i_1] [i_4] [i_3] [i_4] [5] = (arr_10 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2] [i_2] [i_2 - 2]);
                                arr_19 [2] [i_4] [i_4] [15] = (arr_10 [18] [i_1] [i_1] [i_1] [i_1] [i_1]);
                                var_21 = ((~(arr_10 [i_0] [i_0] [i_1] [i_2] [9] [4])));
                            }
                        }
                    }
                }
                arr_20 [i_0] [11] = ((((((((~(arr_8 [18] [i_1] [i_0] [i_1])))) ? ((var_15 ? (arr_11 [6] [i_0] [i_0] [i_1]) : 63991)) : (((var_16 ? var_2 : (arr_7 [i_1] [i_0] [i_0]))))))) ? ((var_19 >> (((((arr_4 [i_1] [i_0]) ? -18954 : (arr_16 [12] [i_0] [18] [i_1] [11]))) + 19006)))) : (arr_3 [i_0] [i_0])));
            }
        }
    }
    var_22 = var_10;
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                {
                    arr_28 [i_5] [i_6] [i_7] = ((!((((max((arr_15 [i_5] [6] [0]), 9684851895554889888)) + (((((arr_1 [i_6] [i_7]) || 8958)))))))));
                    var_23 = (min(var_23, (((var_10 ? ((((33856 ? 8290 : 9684851895554889888)) * (89 / 4985686966746022473))) : ((max(((~(arr_26 [10]))), ((1224338807 ? (arr_10 [i_7] [i_7] [i_7] [9] [i_6] [3]) : (arr_12 [i_5] [15] [i_6] [i_7])))))))))));
                    arr_29 [i_5] = (min((max((arr_21 [i_6]), (((arr_11 [i_5] [i_5] [i_6] [i_7]) << (((arr_15 [i_5] [i_6] [i_7]) + 1312439941)))))), var_13));
                }
            }
        }
    }
    #pragma endscop
}
