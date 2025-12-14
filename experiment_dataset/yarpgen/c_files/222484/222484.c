/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0 + 4] [i_0] [i_0] = (((((9818963799692064562 > (arr_1 [i_0 + 3] [i_0 + 2])))) + ((65535 ? (((arr_1 [i_0] [i_1]) ? (arr_2 [i_1]) : 35289)) : (arr_4 [i_0])))));
                arr_8 [i_0] [i_0] [i_1] = (0 ? (max((((arr_1 [i_1] [i_0]) ? (arr_3 [i_0]) : (arr_5 [i_0] [i_1]))), ((((arr_2 [i_0]) - (arr_5 [i_0] [i_1])))))) : (!3765));
                arr_9 [i_0] [i_0] = ((-(((arr_3 [i_0]) >> (30246 - 30242)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                arr_15 [i_3] [i_3] = ((((802480592279728325 ? -26647 : (arr_11 [i_3])))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_23 [1] [i_3] [i_4] [i_2] [i_6] [i_2] = ((((((!18446744073709551596) ? (arr_11 [15]) : ((max(-802480592279728323, -15340)))))) ? (arr_19 [i_2] [i_4]) : (arr_22 [i_2])));
                                arr_24 [i_2] [i_3] [i_2] [i_3] [i_3] [i_2] [i_2 - 1] = (max((((arr_13 [i_2 + 2] [i_2 - 2] [i_2 + 1]) ? (arr_13 [i_2 + 2] [i_2 - 2] [i_2 + 2]) : (arr_13 [i_2 - 1] [i_2 - 2] [i_2 - 1]))), (arr_13 [i_2 + 1] [i_2 - 1] [i_2 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
