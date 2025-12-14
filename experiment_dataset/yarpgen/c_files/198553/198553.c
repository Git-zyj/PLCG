/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_0] = ((-(((((1 ? 2186589386153852187 : 1879491255)) <= ((max((arr_9 [i_0] [i_1] [i_2]), (arr_6 [i_3])))))))));
                            arr_12 [i_2] = ((((var_10 / (arr_9 [i_2 - 1] [i_0 - 3] [i_0 - 3]))) ^ (((arr_9 [i_2 - 1] [i_0 - 2] [i_0 - 2]) ? (arr_9 [i_2 + 1] [i_2] [i_0 + 1]) : (arr_9 [i_2 + 2] [i_1] [i_0 - 3])))));
                        }
                    }
                }
                arr_13 [i_0] [i_0] = ((((((!((((arr_5 [i_0] [i_1] [i_1]) ? (arr_9 [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_1])))))))) < ((((arr_6 [i_1]) ? (arr_5 [i_0] [i_1] [i_1]) : var_8)))));
            }
        }
    }
    var_11 = var_2;
    var_12 = ((((1 ? 4178080524 : -574254465030097526))));
    #pragma endscop
}
