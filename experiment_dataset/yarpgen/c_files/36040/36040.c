/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_1] = (((1717060401 ? 576460751229681664 : -385050966061222689)) != -1717060401);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [20] [1] [11] [11] [i_1] [2] = (arr_6 [i_0] [i_1] [i_2]);
                                var_15 = ((var_13 ? ((var_2 ? -1787511079758306606 : var_9)) : (((((var_6 ? var_5 : (arr_6 [i_4] [i_3] [i_2]))))))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_1] = -1717060374;
                }
            }
        }
    }
    #pragma endscop
}
