/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] = -9200;
                    arr_9 [i_2] [i_0] [i_2] = (arr_0 [i_1] [i_0]);
                }
            }
        }
    }
    var_18 = ((var_4 ? (((-32767 - 1) ? 45439 : 20)) : (1372552173 && 251658240)));

    /* vectorizable */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                arr_17 [i_3] [i_4] [6] = -88;
                arr_18 [i_3 - 1] [i_3] [i_4] [i_5 + 1] = (((arr_4 [i_5 + 1] [i_3 + 1]) ? (arr_4 [i_5 + 1] [i_3 + 1]) : (arr_4 [i_5 + 1] [i_3 - 2])));
            }
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                arr_21 [i_6] [i_4] [i_6] = var_10;
                arr_22 [i_6] [i_6] = 10577804624676726189;
            }
            arr_23 [i_3] [i_3] [i_4] = ((var_10 ? var_9 : (((arr_5 [i_3] [1] [i_4]) ? var_13 : var_7))));
            arr_24 [i_4] [20] [20] = ((-(arr_16 [0] [i_4] [i_3 + 1])));
        }
        arr_25 [i_3 + 1] = (arr_0 [i_3 - 2] [11]);
        arr_26 [i_3] = 3;
        arr_27 [i_3] = (((arr_20 [i_3 - 1] [i_3] [i_3]) ? (arr_20 [i_3 + 1] [i_3] [i_3]) : (arr_20 [i_3 + 1] [i_3 - 2] [i_3])));
    }
    #pragma endscop
}
