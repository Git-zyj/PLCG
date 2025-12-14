/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((-523423873 ? (arr_7 [i_2] [i_1] [13]) : (arr_7 [i_0] [i_1] [i_2])));
                    var_19 = (arr_4 [i_2] [i_1] [i_0]);
                    arr_9 [i_0] [i_1] [i_2] = arr_3 [i_1];
                    var_20 = (((arr_0 [i_2]) ? (arr_0 [i_2]) : var_9));
                }
            }
        }
        arr_10 [i_0] = (((arr_6 [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0])));
        arr_11 [i_0] [i_0] = (arr_1 [15]);
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {
            {
                var_21 |= (((arr_1 [5]) > (((47 <= ((max(var_16, (arr_14 [1])))))))));
                arr_18 [6] [i_3] [i_4] = ((arr_6 [i_3] [i_3 - 2] [i_3 - 1]) ? (109619713 && 1) : (!var_10));
            }
        }
    }
    #pragma endscop
}
