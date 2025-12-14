/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (6421709669691505649 || 14);
    var_19 |= -var_15;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = (min(((min(-9223372036854775798, -1))), (((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_1 [i_0 - 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_2] = ((((62572 > ((~(arr_5 [i_0] [i_2] [i_2])))))));
                                arr_15 [i_4] [i_0] [i_2] [i_2] [i_0] [i_0] = (0 || 1);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_20 [i_6] [i_2] [i_5] [i_2] [i_1] [i_2] [i_0] |= var_2;
                                arr_21 [i_0] [9] [9] [i_5] [i_6] [i_6] = (arr_9 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 + 1]);
                            }
                        }
                    }
                    arr_22 [i_0] = ((!(((~(min((arr_2 [i_2]), (arr_5 [i_0] [i_0] [i_2]))))))));
                }
            }
        }
    }
    var_20 = 16383;
    #pragma endscop
}
