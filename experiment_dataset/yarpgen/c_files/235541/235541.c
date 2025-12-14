/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((var_0 - var_1), (min(var_6, (min(var_12, var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [12] = (min(((~(!var_0))), (((var_10 && (arr_1 [i_0 + 2]))))));
                var_20 += ((4482777994804953054 / (min((arr_2 [i_1 + 2] [i_0 + 2]), (arr_2 [i_1 - 1] [i_0 + 2])))));
                arr_7 [i_1] [i_1] = ((-(arr_1 [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_21 = (min((min(13328, -4482777994804953055)), (((~(arr_10 [i_1]))))));
                                arr_19 [i_1] [i_2] [i_3] = (min((((((min((arr_12 [i_0 - 1] [12] [i_2] [i_1] [i_4]), var_17)))) < var_12)), var_17));
                                var_22 = (((((((-(arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1])))) ? (arr_4 [i_0 + 2] [i_0]) : -4482777994804953054)) >> (((((arr_10 [i_1]) * (arr_15 [i_0] [i_1] [i_1] [i_3] [i_4]))) / (arr_0 [i_0 - 1])))));
                                arr_20 [i_0] [i_0] [i_2] [10] |= ((-(min(9745, (arr_18 [i_1 - 2] [i_1 - 1] [i_1 + 2] [i_1 + 3] [i_1 - 1] [i_1 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = 9745;
    #pragma endscop
}
