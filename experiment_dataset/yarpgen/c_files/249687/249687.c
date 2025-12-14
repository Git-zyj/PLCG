/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(var_5, ((96 ? 127 : -49))))) ? ((min(((max(var_14, var_12))), (((-96 + 2147483647) >> 1))))) : (min(var_7, ((var_5 ? var_13 : var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] = var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (arr_7 [i_4 + 2] [i_1] [i_1] [i_0])));
                                arr_15 [i_4] [i_3] [i_0 + 1] [i_0 + 1] [i_0 + 1] = 2106836980;
                                var_17 = ((-(((arr_6 [i_0 - 1] [i_0 - 1] [i_2 - 3] [i_1 - 1]) ? (0 | var_7) : (arr_9 [i_0] [i_1] [i_2] [i_2] [i_4])))));
                                arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_4] = (((((var_3 < (arr_2 [i_0] [i_0]))) || (((arr_12 [i_0] [i_0]) != -32)))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] [i_4] = 47;
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] [i_0] = ((((0 ? -var_4 : (arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_1 - 1] [i_2]))) / var_14));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_18 = (arr_4 [i_1]);
                                arr_26 [i_0] [i_1 - 1] [i_1] [i_2] [i_2] [i_5 - 1] [i_6] &= (arr_3 [i_5 - 1]);
                            }
                        }
                    }
                }
                arr_27 [i_0] [i_0] [i_0] = ((~((-(arr_6 [i_0] [i_1 - 1] [i_1] [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            {
                arr_34 [i_7] = ((((var_8 > ((1 ? -1829371847 : var_12)))) ? ((min(var_12, (arr_30 [i_7])))) : ((1 ? 1 : 242))));
                var_19 -= 64;
                var_20 = (arr_22 [i_7] [i_8]);
                arr_35 [i_8] |= var_5;
            }
        }
    }
    #pragma endscop
}
