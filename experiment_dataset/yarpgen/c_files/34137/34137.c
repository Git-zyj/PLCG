/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((((min(99, 1)))))));
                arr_4 [i_0] &= ((~((var_11 ? (arr_1 [i_1 - 1]) : (arr_0 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] [i_1] [i_2] [i_3] = (((max((25 >= var_0), var_8)) / (arr_1 [i_3])));
                            var_14 = var_1;
                            var_15 = var_10;
                            var_16 = (max(var_16, (+-255)));
                            arr_12 [i_0] [i_1 - 1] [i_2] = ((-(((~39770) % (arr_10 [i_0] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_17 = (max(var_17, ((min(((((var_2 >= var_4) ? var_0 : (1 | var_10)))), var_1)))));
    var_18 = (~var_4);
    var_19 = var_9;
    var_20 += var_5;
    #pragma endscop
}
