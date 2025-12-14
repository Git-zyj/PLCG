/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = 62967;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 -= (~43826);
                                var_21 = ((!(((6905540286774975135 ? 4881 : 20263)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_25 [i_5] [i_5] [i_5] [i_5] = (((var_11 && var_6) * var_6));
                            var_22 = (max(((((24489 ? 24503 : 6)) + (arr_0 [i_5 - 1] [6]))), -6022786486634359951));
                            arr_26 [i_5] [i_6] [i_6] [i_8] = (((arr_17 [i_5 + 1]) ? (!1410509914) : (!4881)));
                        }
                    }
                }
                var_23 = (max((((((~(arr_3 [2] [i_6]))) & (((-6022786486634359936 ? var_16 : var_1)))))), (((((~(arr_14 [i_5])))) ? (~var_6) : (arr_19 [i_5 + 2] [i_5 - 1] [i_5 + 2] [i_5 - 1])))));
            }
        }
    }
    var_24 = -var_0;
    var_25 &= ((var_5 << ((-(max(2, 4294967290))))));
    #pragma endscop
}
