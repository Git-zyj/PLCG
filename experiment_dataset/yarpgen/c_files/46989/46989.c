/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = ((-101 ? (~var_3) : ((((~48) | (arr_0 [i_1 + 1] [i_2 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = (max((((~(arr_12 [i_1 - 1] [i_4 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_0])))), (1005529967 * 2828060167)));
                                arr_13 [i_0] [4] [i_1] [i_2] [i_1] [i_4] = (((((-(192 + 65535)))) & 2828060167));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_0] [i_0] = ((var_1 | (min(((max(206, var_1))), -11))));
                    var_17 = (min(var_17, ((max(2828060167, ((((var_7 >> (1466907114 - 1466907095))))))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            arr_19 [7] [i_1] [7] [0] [i_6] [i_1] [i_5] = var_7;
                            var_18 = (min(var_18, 18446744073709551615));
                            var_19 &= ((-((-(arr_18 [i_0] [i_0] [i_2 + 1])))));
                            var_20 += ((!(arr_8 [i_1] [i_1 - 1] [i_1] [i_1])));
                        }
                        var_21 += (74 + var_3);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 21;i_8 += 1)
        {
            {
                var_22 = (min(var_22, 255));
                var_23 = ((-74 < ((max((arr_22 [i_7 + 1] [i_8 + 3]), (arr_22 [i_7 - 2] [i_8 + 3]))))));
                var_24 = ((((82 >= (arr_23 [i_8 + 2]))) ? ((1 & (arr_20 [i_8 - 2]))) : (154 >> var_2)));
            }
        }
    }
    #pragma endscop
}
