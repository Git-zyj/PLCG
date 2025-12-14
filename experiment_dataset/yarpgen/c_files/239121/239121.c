/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_2, 16820));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_11 = (min(var_11, ((min((((arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1]) - 0)), ((-(arr_7 [i_1] [i_2 - 1] [i_2 - 1] [i_2 + 1]))))))));
                            var_12 = (max(var_12, ((min((arr_5 [i_2 - 1] [i_2 + 1] [i_2 - 1]), (min(-16806, (((arr_4 [i_0] [i_1] [i_2 + 1]) ? (arr_9 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [4]))))))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    arr_13 [i_0] [i_1] [i_0] = ((((min(251658240, -115))) && ((((((var_8 - (arr_7 [i_0] [i_1] [i_1] [i_4])))) ? (!7) : (arr_8 [11] [i_1] [i_1] [i_4]))))));
                    var_13 = (max(var_13, 0));
                }
            }
        }
    }
    var_14 = var_6;
    #pragma endscop
}
