/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((var_13 ? var_15 : var_9)))));
    var_20 = (~var_3);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 = ((((min((arr_4 [i_0 + 1] [i_0 + 1]), (arr_4 [i_0 - 1] [i_0 - 1])))) ^ (((arr_4 [i_0 + 1] [i_0 - 1]) ? (arr_4 [i_0 + 1] [i_0 + 1]) : (arr_4 [i_0 - 1] [i_0 + 1])))));
                            var_22 = (arr_3 [i_0] [i_2]);
                            arr_11 [i_2] [i_2] [i_2] [i_0 + 1] [i_0] = ((-(min(var_18, (arr_0 [i_0 - 1])))));
                        }
                    }
                }
                var_23 = 216;
            }
        }
    }
    #pragma endscop
}
