/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (var_8 ? (~3112374630602072894) : -36);
    var_18 = (max((((!(((35 ? 35 : 127)))))), var_14));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = (arr_6 [1] [i_2] [i_2]);
                    arr_10 [i_2] |= max((~var_9), var_10);
                    var_19 = (max((arr_7 [i_0] [i_2]), (max(var_5, (((arr_6 [i_0] [i_1] [i_2]) ? var_13 : 31))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 ^= ((~(max((arr_2 [i_3] [i_3] [i_1]), (arr_2 [i_0] [i_3] [i_2])))));
                                var_21 = var_0;
                                var_22 = arr_4 [i_1] [i_3];
                                var_23 = (max(((12651386832721281424 & (arr_11 [i_1] [i_0] [i_4]))), ((((arr_11 [i_4] [i_0] [i_2]) ^ var_11)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
