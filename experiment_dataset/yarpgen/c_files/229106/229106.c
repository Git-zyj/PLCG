/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1860110837;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [11] [i_3] [i_4 - 1] = (((min(var_6, (arr_12 [i_4] [i_0] [i_4 + 3] [i_4 - 2] [i_4 - 1]))) / (19704 >= var_2)));
                                var_14 = (min(var_14, (~var_11)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_6] |= (max(((-(1641101063 != 4095))), ((-(arr_21 [i_5 + 2] [i_5] [i_5 + 1] [i_5] [i_5 + 2] [i_5] [i_5 + 2])))));
                                arr_23 [i_6 + 1] [i_6] [i_0] [i_0] [i_0] [i_1] [i_0] = -119518992;
                                var_15 = (max(var_15, (arr_13 [i_0] [i_1] [i_2] [i_0] [i_2])));
                            }
                        }
                    }
                    arr_24 [i_0] [i_1] [i_0] = var_8;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_31 [i_0] [i_0] = (arr_2 [i_1] [i_0]);
                                var_16 &= (min((arr_21 [i_0] [i_1] [i_2] [i_7] [i_7] [i_8] [i_8]), ((((arr_17 [i_2] [i_1]) || var_10)))));
                                arr_32 [i_0] [i_0] [i_0] [16] [i_7] [i_8] = ((((var_10 ? (arr_0 [i_1] [i_0]) : 4327)) | ((min(65527, var_3)))));
                                arr_33 [i_0] [i_0] = 171;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (((((636125301 ? var_10 : (!15360)))) ? var_5 : var_12));
    #pragma endscop
}
