/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 114;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = 95;
                    arr_9 [23] [i_1] [i_0] [i_0] = (arr_2 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] = ((((((arr_4 [i_4 + 1] [i_4 - 2] [i_4 + 1]) ? (arr_4 [i_4 - 2] [i_4 - 2] [i_4 - 2]) : (arr_4 [i_4 - 1] [i_4 - 1] [i_4 - 3])))) ? (((arr_11 [i_4 - 1] [i_4 - 3] [i_4 + 2] [i_4 + 2]) ? var_1 : -125)) : (arr_11 [i_4 + 2] [i_4 - 1] [i_4 - 2] [i_4 - 3])));
                                arr_17 [i_0] [i_1] [i_2] [1] [i_2] = 1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_25 [18] [21] [i_2] [3] [3] = (((((var_2 ? (arr_10 [i_0]) : (arr_22 [i_6] [i_6 + 3] [i_6] [i_6] [i_6 + 2])))) ? (max((((arr_13 [i_5]) ? (arr_14 [i_0] [i_0] [i_0]) : var_13)), (!0))) : (arr_14 [i_6 - 1] [i_5] [i_0])));
                                var_21 -= (((((!(arr_7 [i_0] [i_1] [18])))) >> (((((3005631194 ? var_1 : (arr_0 [i_0])))) - 921066873023612285))));
                                arr_26 [1] [i_5] [i_2] [3] [i_1] [i_0] = ((-var_16 ? ((-((var_2 ? 28819 : -4637)))) : (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (max(65516, -1)) : ((-(arr_0 [11])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
