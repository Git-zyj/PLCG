/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 = 12890674192858236861;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = arr_11 [i_0] [i_0] [i_2];
                                var_15 = (arr_2 [i_3 + 1]);
                                arr_15 [5] [5] [5] [5] [i_2] = (((((~1) + 2147483647)) << (((((arr_2 [i_0 + 2]) + 95)) - 28))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_16 = var_2;
                                var_17 = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 ^= (max(var_10, -var_3));
    var_19 = var_9;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 14;i_9 += 1)
            {
                {
                    var_20 = (max(var_20, ((min(((-((max(var_5, (arr_21 [i_7])))))), (arr_27 [i_9 + 3] [i_9 + 3] [i_9 + 3] [i_9 + 4]))))));
                    arr_30 [i_7] [i_8] [i_7] [i_8] = -24719;
                }
            }
        }
    }
    #pragma endscop
}
