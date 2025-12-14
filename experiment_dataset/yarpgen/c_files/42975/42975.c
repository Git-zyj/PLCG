/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (-var_7 ? 23141 : 23155);
                    arr_9 [i_0] = (((arr_7 [i_1 + 1] [i_1 + 1] [i_2 - 1]) ? (arr_7 [i_1 + 1] [i_2] [i_2 + 3]) : (max((arr_3 [i_1 + 1]), (arr_7 [i_1 + 1] [i_2 + 2] [i_2 - 1])))));
                    var_10 -= (((((-1223435775 > (arr_1 [i_2]))) ? -16864 : ((1110735541 ? (arr_6 [i_0] [i_0] [9] [9]) : var_5)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_4] [i_3] [i_3] = ((+(((arr_11 [i_4]) ? (arr_11 [i_3]) : (arr_16 [i_5] [i_4] [i_3])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_11 = (((-12357 || 12357) ? (arr_17 [i_7] [i_5] [i_4]) : var_4));
                                var_12 = (min(var_12, (((((min((arr_14 [i_3] [i_7]), 54350))) ? (arr_14 [i_4] [i_4]) : (arr_14 [i_4] [i_6]))))));
                                arr_23 [i_6] [i_4] [i_4] [i_6] [i_4] [i_4] [i_4] = -23142;
                                var_13 = (((((((-1303151350 ? var_0 : -2592772970824577488))) ^ (max(16780, (arr_16 [i_5] [i_6] [15]))))) % ((6411 & (~var_1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
