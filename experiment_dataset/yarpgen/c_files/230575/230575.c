/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = 23376;
                var_21 = ((2176 ? 2176 : 13509));
                var_22 = (min(var_22, 23379));
            }
        }
    }
    var_23 = 2176;
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_13 [1] [i_3] [i_3] = (((-32767 - 1) ? 26448 : (!-32763)));
                    arr_14 [i_3] [i_3] [i_3] = (!2044);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_24 = (+-1);
                                arr_21 [i_2] [i_3] = ((((!(((-8 ? -25964 : 17761)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_25 = (min(var_25, -13500));
                                arr_28 [i_3] [i_3] [i_4] [i_7] [i_8] = -13496;
                                var_26 = (((!10747) ? 25969 : 25963));
                                var_27 = -13519;
                                var_28 += -8192;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
