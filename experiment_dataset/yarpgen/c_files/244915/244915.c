/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((63488 - 58776) < (1203780029 % 1813)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_3] = ((((arr_8 [i_2 + 1] [i_2] [i_2 + 1]) ? (arr_8 [i_2 - 1] [i_2] [i_2 - 1]) : (arr_8 [i_2 - 1] [i_2] [i_2 - 1]))));

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                var_13 = 16911433728;
                                arr_14 [i_2] [1] [5] [1] = var_8;
                            }
                        }
                    }
                }

                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    var_14 = (max(var_14, 2374109723));
                    arr_17 [i_0] |= 1920857566;
                    arr_18 [i_5] [i_5] = ((!(((arr_5 [i_5] [i_5 + 1] [i_5 + 2]) || 145))));
                }
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    arr_22 [i_6 + 1] [i_6] [i_1] [10] = ((-(arr_12 [i_1] [i_1] [i_1] [i_6] [i_1] [i_1] [i_0])));
                    arr_23 [i_6] [i_1] [i_6] = var_10;
                }
                var_15 = ((~(min(1920857572, 125))));
            }
        }
    }
    #pragma endscop
}
