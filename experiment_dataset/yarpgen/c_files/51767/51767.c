/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((arr_1 [i_0]) && (((15 ? (!2) : (arr_0 [8])))));
                arr_7 [i_0] = ((arr_5 [i_0] [i_0]) - (arr_1 [12]));
                var_11 = ((-(arr_2 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_1] [i_0] [13] [i_3] = ((((((arr_0 [i_0]) ? var_9 : (((18 ? var_3 : 1)))))) ? (((((~(arr_11 [i_0] [i_0] [i_2 - 1] [2])))) ? (arr_0 [6]) : (arr_9 [i_1 + 1] [i_2 + 1] [i_2 - 1]))) : ((~(arr_0 [12])))));
                            var_12 = (max(var_12, (arr_9 [11] [11] [i_2 - 1])));
                            arr_13 [i_0] [1] [i_2] [i_2] [i_2] [i_2] = (arr_10 [i_0] [i_0] [i_1] [i_2] [5]);
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(!27)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                var_13 &= var_8;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_26 [i_4] [5] [5] [i_7] [i_4] [i_7] = (arr_19 [1] [i_5] [i_5]);
                            arr_27 [i_4] [i_5] [i_6] [i_6] [i_7] = (((~(((var_2 || (arr_17 [i_4])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
