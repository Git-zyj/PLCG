/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_10;
    var_12 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (max(((-var_9 ? 134217727 : (min((arr_3 [i_0 - 2]), (arr_4 [i_2] [i_1] [i_1] [i_0]))))), ((((var_1 / (arr_5 [i_0] [i_0] [i_0] [i_0])))))));
                    arr_7 [i_0] [i_0] [i_1] [i_2] = (min(((-(((arr_1 [i_0 + 3]) ? -96 : -134217709)))), (arr_4 [i_0] [i_0] [i_0 + 2] [8])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_3] = ((!((((arr_13 [10] [i_4] [i_4 - 3] [i_4 - 1] [i_4 - 2]) ? var_9 : (2757312929 & 86))))));
                                arr_16 [i_3] [i_1] [i_1] [i_1] [i_1] = ((((min(var_4, (arr_14 [i_4 - 1] [i_2] [i_1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
