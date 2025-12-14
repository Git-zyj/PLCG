/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 = (~-4001958383301202200);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = var_12;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = ((((((arr_4 [2]) & 2))) ? ((((arr_4 [i_2 - 1]) != -var_11))) : var_3));
                                var_18 ^= ((-((((((arr_9 [i_0] [i_1] [i_2 - 1] [i_3] [i_0]) * (arr_3 [i_1] [i_1])))) ? -204 : var_0))));
                                var_19 = ((!(5652 && 16)));
                                var_20 *= ((-(min((((var_3 && (arr_1 [i_2 + 2])))), (~var_7)))));
                            }
                        }
                    }
                    arr_11 [i_0] [9] [5] = ((((!(var_2 / var_10))) ? (((!(arr_4 [i_0])))) : ((-(arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1])))));
                    arr_12 [i_2 + 2] |= var_8;
                }
            }
        }
    }
    #pragma endscop
}
