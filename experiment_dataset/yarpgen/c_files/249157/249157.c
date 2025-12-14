/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 14894697410222782671;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
                arr_6 [i_1] = (arr_1 [i_1] [i_1]);
                arr_7 [i_0] [i_1] = (arr_3 [i_1] [13] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                arr_14 [i_3] = 14894697410222782703;
                arr_15 [5] [i_2] [i_2] = -74;
                arr_16 [i_2] = var_5;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                arr_24 [i_4] [i_4] [i_4] = (arr_17 [i_5] [i_4 - 1]);
                arr_25 [i_4] &= (arr_1 [i_4] [i_4]);
                arr_26 [i_5] = (arr_2 [i_4] [i_5]);
                arr_27 [i_4] [1] = (arr_4 [i_4]);
            }
        }
    }
    var_18 = var_15;
    #pragma endscop
}
