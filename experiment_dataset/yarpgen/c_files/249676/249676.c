/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max(6765828643078889941, var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 &= (14600544075322607665 / var_5);
                var_14 ^= -1;
                arr_8 [i_0] = ((6765828643078889929 ? var_8 : (((~var_10) ? (1 || 49152) : var_3))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [7] [7] [i_4] = (arr_4 [i_0]);
                                var_15 -= (max(((((((var_5 != (arr_10 [i_0] [i_0] [i_0]))))) / (-6765828643078889942 % 113))), var_7));
                                arr_19 [i_0] [i_1] [i_2 + 2] [i_0] [i_4] [i_2] [i_0] = (((((var_9 > ((-(arr_3 [i_2 - 1])))))) % (max(((14600544075322607652 ? (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0]) : var_7)), ((min((arr_9 [i_3]), (arr_5 [i_0] [i_1] [i_2 - 1]))))))));
                                var_16 = (((arr_2 [i_1]) | (max(-65533, (arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 ^= 14600544075322607660;
    #pragma endscop
}
