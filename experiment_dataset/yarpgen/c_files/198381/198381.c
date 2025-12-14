/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_11 += (~(arr_11 [i_0] [i_1] [i_2 + 2] [i_3] [i_1] [5] [i_0]));
                                var_12 = ((!(-127 - 1)));
                                arr_12 [1] [1] [20] = (max((min(((-73 ? (arr_0 [i_2]) : (arr_3 [i_0] [i_1] [i_1]))), (arr_0 [i_4]))), ((-(arr_7 [i_1] [i_2 - 1] [i_3] [i_4])))));
                                var_13 *= (max(3674151297347004854, (arr_5 [i_0] [i_1 + 2] [i_2] [i_3])));
                                var_14 -= ((+(min((((arr_7 [3] [i_1] [i_1] [i_3 + 2]) ? (arr_9 [i_3]) : 0)), (max((arr_9 [i_3]), 2080778125064997438))))));
                            }
                        }
                    }
                    arr_13 [i_2] &= ((~(min(((-3674151297347004845 ? 111 : 124)), 0))));
                }
            }
        }
    }
    var_15 = 3059077467;
    var_16 = (((-(min(3674151297347004844, var_9)))));
    #pragma endscop
}
