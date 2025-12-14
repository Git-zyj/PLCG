/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 += ((((min(255, 452837908))) ? (((arr_3 [i_0] [i_0]) ? (arr_4 [i_2] [i_2]) : (arr_5 [i_0] [i_0]))) : (((arr_2 [i_1 + 1] [i_1 - 1]) % var_2))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [i_1] [10] = ((((max(((var_12 ? (arr_8 [i_4] [i_3] [i_3] [9] [6] [14]) : 3412568169360048405)), (arr_4 [i_1] [i_1])))) ? (~var_12) : (((min(47, 16))))));
                                var_16 = arr_9 [i_0] [i_1] [i_1] [12] [i_3] [i_3];
                                var_17 = (max(var_17, (min((min(6300, (arr_0 [1]))), ((((arr_5 [i_1 + 2] [i_0]) <= (arr_4 [i_2] [0]))))))));
                            }
                        }
                    }
                    var_18 = -14503;
                }
            }
        }
    }
    var_19 = (max(-32681, var_4));
    var_20 = (min(var_20, (((!(!163))))));
    #pragma endscop
}
