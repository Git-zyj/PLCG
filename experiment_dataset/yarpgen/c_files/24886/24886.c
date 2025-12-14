/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (!14);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_1 - 1] [i_2] [i_3 - 2] [i_2] [i_0] [i_0] = (max((arr_9 [i_0] [i_1] [i_2] [i_3]), (arr_10 [i_0] [i_0] [i_2] [i_0] [i_0])));
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_4 - 2] [i_2] = (((arr_5 [i_3] [i_1]) >= var_9));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 7;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            {
                arr_20 [2] [i_6] [i_6] |= (min((18446744073709551581 << 1), (arr_0 [i_5 - 2])));
                arr_21 [i_5] = (max((arr_11 [i_5] [i_5] [i_6] [i_6] [i_6 - 1] [i_6] [1]), ((max(((!(arr_14 [i_6]))), (arr_15 [i_5] [i_5]))))));
            }
        }
    }
    #pragma endscop
}
