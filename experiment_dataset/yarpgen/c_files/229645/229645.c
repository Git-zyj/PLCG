/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 += (arr_2 [i_0]);
                var_17 = (max(var_17, ((((((!(arr_6 [8] [14])))) & ((min(var_3, var_7))))))));
                var_18 -= (45494 ? var_11 : ((var_2 ? var_9 : var_6)));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_17 [i_1] = min(-1778182070, 5414916843987470098);
                                arr_18 [i_4] [i_1] [i_2] [i_1] [i_0] = (min((((-(min((arr_7 [i_0] [i_0]), -4602851284873132995))))), ((var_9 ? (((var_8 ? 32747 : var_3))) : var_5))));
                            }
                        }
                    }
                }
                arr_19 [i_1] [i_0] [i_1] = (((((min(var_8, var_2)))) ? (arr_16 [i_0] [0] [0] [9] [i_0]) : -var_11));
            }
        }
    }
    #pragma endscop
}
