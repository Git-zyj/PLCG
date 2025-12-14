/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 = 4294967294;
                            arr_9 [i_3] [i_1] [i_1] = (((arr_2 [i_1 + 1]) ? (((arr_2 [i_1 + 1]) ? (arr_2 [i_1 - 2]) : var_13)) : (arr_2 [i_1 + 1])));
                            arr_10 [i_3 - 2] [6] [i_2] [i_0] [i_0] &= (min((min((arr_3 [i_0 - 1] [i_1 + 1]), (arr_3 [i_0 - 1] [i_1 + 2]))), ((((arr_3 [i_0 - 1] [i_1 - 1]) == (arr_3 [i_0 - 1] [i_1 - 2]))))));
                            var_18 = var_8;
                        }
                    }
                }
                var_19 = (max(var_19, (((((arr_5 [i_0 - 1] [i_1 + 1] [1]) ? (arr_5 [i_0 - 1] [i_1 + 2] [i_1 + 1]) : (arr_5 [i_0 - 1] [i_1 + 2] [i_1 + 2])))))));
            }
        }
    }
    var_20 = ((-(min(2, (var_6 / 4504)))));
    var_21 = ((-(max(((max(var_10, 27368))), var_7))));
    #pragma endscop
}
