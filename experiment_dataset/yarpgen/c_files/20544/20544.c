/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_10 = (((((((arr_2 [i_0] [i_1 + 1]) <= 18601))) < (arr_4 [i_0] [i_1 - 2] [i_2 - 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, (arr_7 [i_0 + 2] [i_2 - 1] [i_3] [7])));
                                var_12 = (((((((arr_11 [i_0] [20] [i_2] [9]) << (-18602 + 18602)))) < (arr_10 [i_0] [i_1 - 3] [i_1 - 3] [i_3] [20]))));
                            }
                        }
                    }
                    var_13 -= max(((((arr_9 [i_0 - 1] [i_1 + 1] [i_2 + 3]) + ((18601 ? 1859721802 : 1))))), ((+(((arr_1 [3]) ? 2781113949 : (arr_5 [i_0 + 2] [i_0]))))));
                    var_14 = (((((-(arr_12 [i_2 + 2] [i_2 - 1] [i_1 + 1] [i_1] [i_0 + 3])))) - (arr_13 [7] [i_0])));
                }
            }
        }
    }
    var_15 = (((min(var_6, var_3)) % (((var_8 ? (9213803100311165633 || 1023) : -931273190)))));
    #pragma endscop
}
